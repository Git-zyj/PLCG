/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146369
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_4;
    var_17 = var_14;
    var_18 = (max(var_18, (((-(min(var_15, var_14)))))));

    for (int i_0 = 2; i_0 < 9;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (arr_1 [i_0 - 2]);
        arr_3 [i_0] = -var_2;
        var_19 = (min((arr_1 [i_0]), (min((arr_0 [i_0 - 1]), (((arr_0 [i_0]) | (arr_1 [i_0])))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_20 ^= (var_13 | var_1);
                    var_21 *= (min(54424, 60));
                }
            }
        }
    }
    for (int i_3 = 2; i_3 < 9;i_3 += 1) /* same iter space */
    {
        var_22 &= var_8;
        var_23 = -var_1;
        var_24 = (min(2061116926820295924, -6055668253224898657));
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 8;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                {
                    var_25 = (min((((var_6 > (arr_10 [i_4 - 1] [i_4 - 1])))), var_14));

                    /* vectorizable */
                    for (int i_6 = 2; i_6 < 8;i_6 += 1) /* same iter space */
                    {

                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            var_26 = -var_4;
                            arr_22 [i_3] [i_4] [i_4] [i_5] [1] [i_7] = ((-(((arr_14 [4]) + var_11))));
                            var_27 = -var_12;
                        }
                        for (int i_8 = 0; i_8 < 10;i_8 += 1)
                        {
                            var_28 = var_13;
                            var_29 = var_7;
                            var_30 = ((((arr_12 [i_8] [i_4 + 1]) < (arr_21 [i_8] [i_6] [i_5] [i_3] [i_3] [i_3] [i_3]))));
                            var_31 = (((arr_24 [4] [i_3] [i_3 + 1] [i_3 - 1] [i_6 + 2] [i_8]) != var_10));
                        }
                        var_32 = -var_13;
                        var_33 = -var_10;
                    }
                    /* vectorizable */
                    for (int i_9 = 2; i_9 < 8;i_9 += 1) /* same iter space */
                    {
                        arr_29 [i_4] = var_8;
                        var_34 = (arr_5 [i_3 - 2] [i_3 - 2] [i_3 - 1]);
                    }
                    for (int i_10 = 2; i_10 < 8;i_10 += 1) /* same iter space */
                    {
                        arr_33 [i_10] [i_3] [i_4 - 2] [i_4 - 2] [i_3] = (min(60, (arr_18 [i_5] [i_10] [i_5] [i_10] [i_4])));
                        arr_34 [2] [i_4 - 1] [2] [i_10] [i_4] &= (arr_11 [i_3]);
                        var_35 = ((-((((arr_20 [i_3] [i_4]) < var_12)))));
                    }
                    var_36 = (min(-49, (arr_27 [i_5] [i_4] [i_4] [i_3 + 1])));
                }
            }
        }
    }
    #pragma endscop
}
