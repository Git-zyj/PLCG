/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189221
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0] [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            var_14 = (((arr_6 [i_4] [i_2] [i_1]) - var_5));
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_1] = var_3;
                            arr_13 [i_0] [i_0] [i_2] [1] = var_7;
                        }
                        var_15 = (-24 / var_13);
                        arr_14 [i_0] [i_1] [6] [i_3] = (arr_10 [i_0 + 1] [i_1] [i_2] [i_3] [14] [i_0 + 1] [i_1]);
                        var_16 = (max(var_16, 30314));
                    }
                }
            }
        }
        var_17 = -30314;
        arr_15 [i_0] = ((var_8 > (arr_0 [i_0 + 3])));
    }

    for (int i_5 = 3; i_5 < 15;i_5 += 1)
    {
        var_18 = (max(var_18, (arr_16 [i_5 + 1])));
        var_19 = ((+(min((arr_18 [i_5 - 1] [i_5]), (arr_18 [i_5 + 1] [i_5 + 2])))));
    }
    var_20 = (max(var_20, ((min((min(2460678345, var_4)), (var_4 * var_3))))));
    #pragma endscop
}
