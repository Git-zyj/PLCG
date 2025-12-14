/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176331
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    arr_7 [i_2] [i_2] = 822018162259985073;
                    var_13 = var_2;
                }
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    arr_11 [i_0] [i_1] [i_3] = 186;
                    arr_12 [i_0] [i_0] [i_3] = 32753;
                }
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {

                    for (int i_5 = 3; i_5 < 21;i_5 += 1)
                    {
                        arr_17 [i_5] [0] = var_9;

                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            arr_20 [i_0] [i_0] [i_5] [i_0] [i_0] = 32767;
                            arr_21 [i_0] [i_1] [i_5] [i_4] [i_5 - 2] [i_6] = 985864521;
                            arr_22 [i_0] [i_1] [i_4] [i_5] [5] [i_1] [i_5 - 3] = 598600961;
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            arr_25 [i_5] [i_5] [i_4] [i_1] [i_1] [i_0] [i_5] = 120;
                            arr_26 [i_0] [i_5] [i_0] [i_0] [i_0] [i_0] = 119;
                            var_14 = (max(var_14, 126));
                        }
                        arr_27 [i_0] [1] [i_5] [i_0] = (~-122);
                        arr_28 [i_5] [14] [i_4] [i_4] [i_5] = 103;
                        arr_29 [i_0] [i_1] [i_1] [i_1] [i_5] [i_5 - 3] = 103;
                    }
                    for (int i_8 = 1; i_8 < 22;i_8 += 1)
                    {
                        arr_33 [1] [i_1] [i_4] = ((var_1 ? 35 : var_5));
                        var_15 = var_4;
                    }
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        arr_38 [i_9] [i_1] [i_1] [i_1] [i_1] [i_1] = 32761;

                        for (int i_10 = 3; i_10 < 20;i_10 += 1)
                        {
                            arr_42 [i_1] [2] [i_4] [2] [i_10 - 3] &= (~126);
                            arr_43 [i_4] [i_9] [i_9] [i_4] [i_10] = var_4;
                            arr_44 [i_9] = var_11;
                        }
                        for (int i_11 = 0; i_11 < 23;i_11 += 1)
                        {
                            var_16 -= var_9;
                            arr_48 [i_0] [i_9] = (~var_4);
                            arr_49 [i_0] [i_0] [i_9] = (-127 - 1);
                            var_17 = (var_0 ? var_9 : 53918);
                            var_18 = var_1;
                        }
                        arr_50 [i_9] [i_4] [i_9] = ((var_7 ? var_9 : 117440512));
                        arr_51 [i_9] [i_1] [i_9] [i_9] = var_4;
                        var_19 = var_12;
                    }
                    arr_52 [i_0] [i_1] [i_4] = 1;
                }
                arr_53 [i_0] [i_0] = var_3;
                arr_54 [i_0] [i_0] [i_1] &= ((17100367646460828495 ? 1744174668583915932 : -96));
                arr_55 [i_0] = ((87866680 ? var_11 : -1642722836));
            }
        }
    }
    var_20 = var_5;
    var_21 = (min(var_21, (!80)));
    #pragma endscop
}
