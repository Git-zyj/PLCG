/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15619
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_19 -= var_6;

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        var_20 = (((arr_2 [i_0 + 3] [i_0 - 2]) ? (arr_2 [i_0 - 3] [i_0 - 2]) : (arr_2 [i_0 - 3] [i_0 + 1])));
                        var_21 = ((-1407146457 ? 25824 : 108));
                        var_22 = (min(var_22, ((~(((arr_4 [i_0] [i_3]) / (arr_6 [i_3])))))));
                    }
                    for (int i_4 = 4; i_4 < 19;i_4 += 1)
                    {
                        arr_16 [i_1 + 4] [i_0] [i_1 + 4] [i_0] = (((arr_9 [i_0 - 3] [i_1 + 3] [i_2] [i_4 - 3]) ? (arr_0 [i_0 - 3] [i_1 + 3]) : (arr_0 [i_0 - 2] [i_1 - 1])));
                        var_23 = (147 | 28672);
                    }
                }
            }
        }
        arr_17 [i_0] = (var_7 ? ((2689633297142641948 ? 15 : (arr_0 [i_0] [i_0]))) : var_12);
    }
    var_24 -= -1;
    #pragma endscop
}
