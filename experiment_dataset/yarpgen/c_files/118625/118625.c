/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118625
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                arr_5 [i_0 + 2] = ((min(32767, (arr_2 [i_0 + 3] [i_0 + 1] [i_1 + 2]))));
                arr_6 [i_0 + 3] [i_1 + 1] = ((+(((arr_3 [i_1 + 1]) >> (((arr_4 [i_0 - 1]) - 8093))))));
                var_20 = (min(var_20, ((min((arr_1 [i_0 + 4] [i_1 + 2]), ((max(var_0, var_16))))))));
            }
        }
    }
    var_21 = var_13;
    #pragma endscop
}
