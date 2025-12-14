/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117521
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_17 = (arr_0 [i_0] [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
                        {
                            arr_13 [i_0] [i_0] [i_0] [i_0] [i_4] [i_0] [i_0] = arr_7 [i_0] [i_1] [i_4];
                            arr_14 [i_0] [i_1 + 1] [i_2] [i_3] [i_4] [i_3] = 1;
                            var_18 = (((!var_8) + 1));
                            arr_15 [i_4] [i_1] [i_1] [i_1] [i_4] = (arr_0 [i_0] [i_2]);
                        }
                        for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
                        {
                            arr_19 [i_2] &= ((~(((var_1 <= (arr_8 [i_2]))))));
                            var_19 = (arr_3 [i_1 + 1] [i_1 - 2]);
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] = arr_7 [i_0] [i_1] [i_2];
                            var_20 = (min(var_20, (~var_8)));
                            var_21 = (arr_5 [i_0] [i_5] [i_2] [i_3]);
                        }
                        for (int i_6 = 2; i_6 < 16;i_6 += 1)
                        {
                            var_22 = (((arr_11 [i_1 - 2] [i_2] [i_6 + 1] [i_6 - 2] [i_6]) ? 1 : ((((arr_3 [i_3] [i_6 - 2]) != 5)))));
                            var_23 = (max(var_23, ((((arr_18 [i_1] [i_1 + 1] [i_0] [i_3] [i_1 + 1]) != (arr_18 [i_0] [i_1 - 2] [i_1] [i_0] [i_3]))))));
                        }
                        for (int i_7 = 2; i_7 < 13;i_7 += 1)
                        {
                            arr_28 [i_0] [i_1] [i_2] [i_2] [i_7] = (((arr_21 [i_7] [i_0] [i_7] [i_7 + 2] [i_0]) || (((var_0 ^ (arr_26 [i_0] [i_1] [i_2]))))));
                            var_24 = ((~(arr_7 [i_7 + 3] [i_1 - 1] [i_1 - 1])));
                            var_25 = (min(var_25, (((~(arr_6 [i_7] [i_2] [i_0]))))));
                        }
                        var_26 = (((arr_4 [i_1 + 1]) & (arr_7 [i_0] [i_1 - 2] [i_0])));
                        var_27 = var_3;
                    }
                }
            }
        }
        var_28 = (min(var_28, 17339216736006434982));
        arr_29 [i_0] [i_0] = var_13;
        arr_30 [i_0] = (!((((arr_12 [i_0]) ? 1095166924 : 1))));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 23;i_8 += 1) /* same iter space */
    {

        for (int i_9 = 1; i_9 < 22;i_9 += 1)
        {
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 23;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 23;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 23;i_12 += 1)
                    {
                        {
                            var_29 -= ((-((4294967295 ? 99760136 : 1))));
                            var_30 = (arr_35 [i_8]);
                        }
                    }
                }
            }
            var_31 = (((var_5 >= 9597301913925525926) % (~54163)));

            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                var_32 = (min(var_32, (arr_36 [i_8] [i_9] [i_9] [i_13])));
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 23;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 1;i_15 += 1)
                    {
                        {
                            arr_53 [i_8] [i_13] [i_8] = ((~(arr_32 [i_9 + 1])));
                            var_33 = (((arr_37 [i_9 - 1] [i_9 - 1] [i_13] [i_8]) ? (arr_37 [i_9 - 1] [i_9 - 1] [i_13] [i_13]) : 2306273958));
                        }
                    }
                }
            }
            for (int i_16 = 0; i_16 < 0;i_16 += 1)
            {
                var_34 = (((arr_56 [i_9 - 1] [i_9 + 1] [i_9 + 1] [i_9 + 1]) ? (arr_56 [i_9 + 1] [i_9 + 1] [i_9 - 1] [i_9 - 1]) : -2087097809));
                var_35 -= (((99760136 & var_3) > (arr_33 [i_9 - 1] [i_16 + 1])));
                var_36 = (((arr_38 [i_9 + 1] [i_16] [i_16 + 1] [i_16 + 1] [i_16 + 1]) > (arr_37 [i_8] [i_16 + 1] [i_16] [i_16])));
            }
            arr_57 [i_8] [i_8] [i_9] = (~2087097830);
        }
        var_37 = (99760143 ? 99760131 : 1477600027);
        var_38 = ((1975218881 ? 17339216736006434982 : 1));
        var_39 = (((arr_47 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]) ? (arr_32 [i_8]) : (arr_32 [i_8])));
    }
    for (int i_17 = 0; i_17 < 23;i_17 += 1) /* same iter space */
    {
        arr_60 [i_17] = (((((((882970133 ? 0 : 1988693337))) ? 2087097823 : (arr_44 [i_17] [i_17] [i_17]))) - (((max(7018, var_9))))));
        var_40 = (arr_52 [i_17] [i_17] [i_17] [i_17] [i_17]);
    }
    var_41 = var_15;
    #pragma endscop
}
