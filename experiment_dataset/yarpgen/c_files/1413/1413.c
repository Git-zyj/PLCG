/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((max(822163667, 29172))) ? var_6 : (min(var_6, var_7))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                {
                    var_12 = (min(11056, 215));
                    var_13 = (((min((min((arr_8 [i_2]), var_4)), ((max(199, 43)))))) ? (((min(59, 6344)))) : (1 / 134654995472429518));
                    arr_9 [16] [16] = ((((max(68, (var_6 || var_2)))) ? ((max((min(var_4, (arr_4 [i_0 + 2] [i_1 + 1]))), (arr_1 [i_0] [i_2 - 3])))) : ((-((max(var_8, (arr_5 [i_0]))))))));
                    var_14 = (min(4901746490986489661, -4901746490986489662));
                }
            }
        }
    }
    var_15 = 6344;
    #pragma endscop
}
