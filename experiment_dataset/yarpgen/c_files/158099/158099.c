/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158099
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        arr_10 [2] [i_1] [i_1] [i_1] [i_1] [i_1] = var_10;

                        for (int i_4 = 2; i_4 < 15;i_4 += 1)
                        {
                            var_18 = (arr_2 [i_3] [i_4]);
                            var_19 = var_3;
                        }

                        /* vectorizable */
                        for (int i_5 = 3; i_5 < 14;i_5 += 1) /* same iter space */
                        {
                            arr_16 [i_0] [i_1] [i_1] [i_3] [1] [5] = (arr_15 [i_5 - 3] [i_5 - 3] [i_5] [i_5] [i_5] [i_5 - 1]);
                            arr_17 [i_0] [i_0] [i_2] [i_3] [2] = var_8;
                            arr_18 [13] [i_0] [i_1] [i_1] [7] [i_3] [i_1] = (~var_14);
                            var_20 = (127 && 1);
                            arr_19 [2] [2] [5] [5] = (arr_6 [i_5 - 2]);
                        }
                        for (int i_6 = 3; i_6 < 14;i_6 += 1) /* same iter space */
                        {
                            arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = var_4;
                            var_21 = (((((-(min(var_8, var_9))))) ? (min((arr_15 [i_6 + 1] [i_6 - 1] [i_6 + 1] [i_6 - 1] [i_6 - 3] [i_6]), var_13)) : 1));
                            var_22 = 1436764797;
                        }
                        /* vectorizable */
                        for (int i_7 = 1; i_7 < 15;i_7 += 1)
                        {
                            arr_26 [i_7 - 1] [i_1] [i_2] [i_1] [i_0] = (((1 ? var_8 : 4294967279)));
                            arr_27 [i_0] [i_0] [i_0] = (~var_7);
                            var_23 = (min(var_23, 55467));
                        }
                        var_24 = max(var_16, (((arr_12 [i_0] [i_0] [8] [i_2] [i_3]) && (!0))));
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        for (int i_9 = 3; i_9 < 15;i_9 += 1)
                        {
                            {
                                var_25 = 1;
                                arr_35 [i_0] = -90;
                                var_26 = (min(var_26, (((~(((var_0 <= (18446744073709551615 || -124)))))))));
                                var_27 = (min(var_27, var_15));
                            }
                        }
                    }

                    for (int i_10 = 0; i_10 < 16;i_10 += 1) /* same iter space */
                    {
                        arr_38 [i_0] [5] [i_2] [i_10] [14] = (((arr_8 [12] [i_1] [i_10] [i_10] [i_10]) | ((55 ? 4294967279 : 122))));
                        var_28 = (min(var_28, (arr_33 [i_1])));
                        arr_39 [i_1] [i_1] [i_1] [i_10] [i_1] [i_1] = ((max((arr_2 [i_0] [i_0]), ((-(arr_36 [i_1] [i_1] [i_2] [13] [i_0] [i_0]))))) + (!var_12));
                        arr_40 [i_0] = (min(var_16, -var_6));
                        var_29 = (max(202189771, 24727));
                    }
                    for (int i_11 = 0; i_11 < 16;i_11 += 1) /* same iter space */
                    {
                        arr_44 [i_0] = (max(-1551740844, 1));
                        var_30 = -var_10;
                    }
                    for (int i_12 = 1; i_12 < 12;i_12 += 1)
                    {
                        arr_47 [i_0] [i_0] [i_0] [0] [1] = arr_5 [i_0] [i_1] [i_2] [i_1];
                        var_31 = (min(4294967279, ((var_6 ? (arr_42 [i_0] [i_1] [i_2]) : var_13))));
                        var_32 *= -1296386398670839969;
                    }
                }
            }
        }
    }
    #pragma endscop
}
