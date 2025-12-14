/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105044
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_11 = ((arr_5 [i_0]) & (arr_5 [i_1]));
                    var_12 = (((arr_3 [i_1]) ^ (max(var_3, (min((arr_2 [11] [i_1]), var_9))))));
                    var_13 = ((~(arr_3 [i_0])));
                }
            }
        }
    }
    var_14 = (!var_7);
    var_15 = ((min(var_4, 22997)));
    #pragma endscop
}
