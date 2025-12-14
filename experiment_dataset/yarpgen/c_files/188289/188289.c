/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188289
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((((var_6 || var_5) * ((var_9 ? var_5 : 12))))) ? (((1099494850560 - -1073741824) ? var_15 : var_13)) : (((((max(var_5, var_0)) >= var_4))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        arr_9 [i_0] [i_1] [i_2 + 1] [i_2] [i_3] = (var_11 - 243);

                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            arr_12 [i_4] [i_3] [i_2] [i_1 + 1] [i_0] = ((!(var_11 / var_2)));
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_0 - 1] &= ((arr_10 [i_2 + 1] [i_4] [i_4]) >= (arr_0 [i_0 + 3]));
                            var_17 ^= 16744448;
                            arr_14 [i_0] [i_0] [i_4] [i_3] [i_1] = (((arr_6 [i_0 + 3] [i_2 - 1] [i_2 - 1] [i_4]) - ((-2482 ? 243 : var_6))));
                            arr_15 [i_2] [i_2] [i_2] = (1411528438 || -1584883673);
                        }
                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            arr_19 [i_5] [i_5] [i_3] [i_2 + 1] [i_0] [i_0] [i_0] = ((var_1 ? (!1) : 1));
                            arr_20 [i_0 + 2] [i_0] [i_0] [i_0] [i_0] [i_0 + 1] [i_0] = (arr_1 [i_1 - 1]);
                            var_18 = (max(var_18, -var_14));
                        }
                        var_19 = 126100789566373888;
                        arr_21 [i_3] [i_2] [i_1] [i_0] = ((1073741824 ? 12 : -790461088));
                        var_20 &= (var_15 ? (arr_2 [i_0 + 2]) : 1073741848);
                    }
                    arr_22 [i_0] [i_0] [i_0 + 1] = (((((var_12 - (arr_11 [i_0] [i_0 - 1] [i_1] [i_1])))) ? (arr_2 [i_1 - 1]) : var_6));
                }
            }
        }

        for (int i_6 = 2; i_6 < 11;i_6 += 1) /* same iter space */
        {
            arr_26 [i_6] [i_6] [i_6 - 2] = ((1584883672 ? (arr_1 [i_6 + 1]) : (((var_10 ? var_14 : -1073741824)))));
            /* LoopNest 2 */
            for (int i_7 = 4; i_7 < 12;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    {
                        arr_32 [i_0] [i_7] [i_8] [i_0] = ((var_0 ? (arr_23 [i_0 + 3]) : var_6));
                        arr_33 [i_7] = 29;
                    }
                }
            }

            for (int i_9 = 1; i_9 < 13;i_9 += 1)
            {
                var_21 = (((~-1073741799) ? (((var_9 ? 1073741809 : var_0))) : var_10));
                /* LoopNest 2 */
                for (int i_10 = 2; i_10 < 13;i_10 += 1)
                {
                    for (int i_11 = 4; i_11 < 10;i_11 += 1)
                    {
                        {
                            arr_41 [i_11] [i_9] [i_9 - 1] [i_9] [i_0] = (((var_8 / var_9) ? ((1 ? var_14 : var_13)) : (arr_38 [i_9] [i_6] [i_9])));
                            var_22 = (max(var_22, ((214 ? (arr_34 [i_10] [i_6] [i_0]) : ((15111669201056208713 ? (arr_34 [i_6] [i_9 + 1] [i_9 + 1]) : 1073741829))))));
                            arr_42 [i_9] [i_9] [i_9] [i_10] [i_9] = 1099494850561;
                        }
                    }
                }
            }
            for (int i_12 = 0; i_12 < 14;i_12 += 1)
            {
                var_23 = var_12;
                arr_45 [i_0] [i_0] [i_0] [i_6] = (((var_0 ? 1 : 0)));
                arr_46 [i_0] [i_6 + 1] [i_0] [i_12] = (((((-26718 ? var_14 : var_11))) || var_11));
            }
        }
        for (int i_13 = 2; i_13 < 11;i_13 += 1) /* same iter space */
        {
            arr_49 [i_13] [i_13] = 245;
            var_24 = (max(var_24, (((~(arr_29 [i_13 - 1] [i_13] [i_13]))))));
            arr_50 [i_13] = (arr_39 [i_0] [i_13] [i_0 + 1] [i_0] [i_13 + 3]);
        }
    }
    var_25 = (((var_5 == var_0) || var_2));
    #pragma endscop
}
