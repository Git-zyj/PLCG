/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10589
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((-75 ? (min((((var_18 ? 896 : var_9))), (min(var_16, var_6)))) : var_4));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            var_20 ^= (((arr_2 [i_0 + 1]) <= (arr_1 [i_0 + 1])));
            var_21 += (arr_2 [i_0 + 1]);
        }
        for (int i_2 = 2; i_2 < 20;i_2 += 1)
        {
            var_22 = (((arr_4 [i_0 - 1] [i_2 - 1]) ? 1 : (arr_4 [i_0 + 1] [i_2 - 1])));
            var_23 = var_18;
        }
        var_24 = (arr_5 [8]);
        arr_7 [i_0] [i_0 - 1] = 30;
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                {

                    for (int i_5 = 2; i_5 < 19;i_5 += 1)
                    {
                        var_25 = var_15;
                        arr_14 [19] [i_3] [i_4] [i_5 - 1] = (-101 & var_16);
                        arr_15 [i_4] [i_4] [i_4] [i_4] = ((arr_13 [i_0 + 1] [i_3 - 2] [i_3 - 2] [i_5]) ? (((arr_11 [i_4] [i_3] [i_5]) ? 1 : (arr_6 [i_0 + 1] [i_0 + 1]))) : (arr_2 [i_0]));
                    }
                    for (int i_6 = 1; i_6 < 21;i_6 += 1)
                    {
                        arr_19 [i_0] [i_3 + 1] [i_4] [i_0 + 1] = 1;

                        for (int i_7 = 1; i_7 < 18;i_7 += 1)
                        {
                            var_26 = 974760430;
                            var_27 *= (((arr_9 [i_0 - 1] [i_0 - 1]) ? var_0 : 1));
                        }
                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            var_28 = (arr_21 [i_0] [i_0 - 1] [1] [i_4] [1]);
                            arr_24 [i_3] [i_3 - 3] [i_8] [i_8] [10] &= (((arr_2 [i_6 + 1]) ? (((1 ? 1 : var_18))) : (((arr_10 [i_4] [i_4] [2]) ? (arr_10 [i_0] [0] [15]) : (arr_13 [i_0] [i_0] [i_0] [1])))));
                        }
                        for (int i_9 = 0; i_9 < 22;i_9 += 1)
                        {
                            arr_28 [i_4] [i_4] [i_4] [i_4] [i_4] = (((arr_0 [i_3 + 4] [i_0 + 1]) ? (~var_14) : var_1));
                            var_29 += 0;
                            var_30 = -688302578;
                            arr_29 [i_0] [i_4] [i_0] [i_0] [i_0 + 1] = ((~(((arr_9 [i_0 - 1] [18]) % (arr_23 [i_3 + 3] [21] [i_3] [i_3 - 2] [i_3] [1] [i_4])))));
                        }
                        var_31 += (((4195158527 != (-9223372036854775807 - 1))));
                        arr_30 [i_0 + 1] [i_0 + 1] [i_4] [i_0] = (((!-31390) ? var_3 : 232));
                    }
                    for (int i_10 = 3; i_10 < 21;i_10 += 1)
                    {
                        var_32 = (((arr_5 [i_4]) > (((var_9 ? var_8 : (arr_1 [i_3]))))));
                        var_33 = (min(var_33, (arr_17 [12] [i_3 + 4] [12] [i_3 + 1])));
                    }
                    arr_34 [i_4] [i_4] [i_4] [18] = ((arr_18 [i_0] [i_4] [i_3] [i_3] [i_4] [i_0]) ? (((var_7 ? var_1 : -56))) : var_9);
                }
            }
        }
    }
    var_34 = var_0;
    #pragma endscop
}
