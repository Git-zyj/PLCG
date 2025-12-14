/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116873
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(((var_7 ? var_8 : var_1)), var_6));
    var_12 = -838274088;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            arr_14 [i_4] [i_2] [i_2] [i_2] [i_1] [i_1] [i_0 - 1] &= ((-((min((arr_8 [i_0 + 1] [i_1]), (arr_8 [i_0 - 2] [i_1]))))));
                            arr_15 [i_1] [i_1] [i_1] [12] = var_4;
                        }
                        var_13 = (arr_13 [i_0 + 2] [i_1] [i_0 + 2] [5] [i_2] [i_3]);
                        arr_16 [i_0] [i_1] [i_0 - 1] [14] &= ((((1073955445 ? 63630 : -1073955426)) ^ (((arr_11 [13] [13] [13] [i_3]) & (arr_2 [i_2])))));
                    }
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        arr_19 [i_1] [i_5] = (((((1354310675 ? 0 : 1819135349))) ? (arr_18 [i_1]) : var_0));
                        var_14 *= ((((((arr_11 [i_0 + 1] [i_1] [17] [i_5]) ? (arr_11 [i_0 + 2] [i_1] [i_2] [i_5]) : (arr_11 [i_0 + 2] [i_1] [1] [i_5])))) ? ((max(var_1, (arr_11 [i_0 - 1] [i_1] [i_2] [1])))) : ((-68 ? 268435455 : 12))));
                        arr_20 [i_0 + 1] [0] [i_0 + 1] [i_0 + 1] = (988006273 % 37701);
                        arr_21 [i_1] [i_1] = (-1073955444 - -16405);
                        var_15 = (-268435471 % 10);
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {

                        for (int i_7 = 1; i_7 < 17;i_7 += 1)
                        {
                            var_16 = (max(var_16, (((var_3 ? var_3 : (!var_8))))));
                            var_17 = (((arr_13 [i_2] [i_1] [1] [1] [i_7 + 3] [i_2]) + (arr_5 [i_2])));
                        }
                        var_18 = var_8;
                    }
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        arr_31 [10] [i_0 + 2] [i_1] [i_0 + 2] = (max(((min(2, 0))), var_3));
                        var_19 = ((((max(var_0, var_9))) ? var_5 : ((((arr_22 [i_0 - 2] [i_0 + 1] [i_0 + 2] [i_0 - 2]) ? (arr_22 [6] [i_0 + 2] [6] [i_0 - 3]) : (arr_22 [i_0] [i_0 + 2] [i_0 + 2] [i_0 + 1]))))));
                    }
                    var_20 *= var_10;
                    var_21 = (min(var_21, (arr_11 [i_0 + 1] [i_1] [i_0 + 1] [i_2])));
                }
            }
        }
    }
    var_22 += var_10;
    #pragma endscop
}
