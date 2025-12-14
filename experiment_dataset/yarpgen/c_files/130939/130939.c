/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130939
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_7;

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            var_15 = (arr_4 [i_1 - 1] [i_1 - 1]);
            var_16 ^= var_12;
        }
        for (int i_2 = 1; i_2 < 21;i_2 += 1)
        {

            for (int i_3 = 3; i_3 < 18;i_3 += 1)
            {
                arr_12 [i_2] [i_2] [i_3] [i_2] = ((!(((arr_5 [i_2]) != (arr_7 [i_2] [i_2])))));
                var_17 = ((!(~-121)));
            }
            for (int i_4 = 2; i_4 < 18;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        {
                            var_18 = var_9;
                            arr_19 [i_0] [i_2] [i_0] [i_0] [i_5] [i_6] = (max((max(4197304966, ((2220596155 ? 1125899906842623 : (arr_0 [i_0] [i_5]))))), ((var_1 ? var_9 : var_1))));
                        }
                    }
                }
                arr_20 [i_0] [i_2] [9] [i_4] = (~1);
                arr_21 [i_2] [i_2] [i_4] [i_2] = (((arr_14 [i_4] [i_2] [i_0]) ? (arr_2 [i_0] [i_0] [i_4]) : (((arr_14 [i_0] [i_2] [i_4]) ? (((arr_4 [1] [i_2]) ? var_6 : var_11)) : 230))));
            }
            var_19 = (((((-(arr_7 [i_2 + 1] [i_2])))) ? (arr_7 [i_2 - 1] [i_2]) : ((~(arr_7 [i_2 - 1] [i_2])))));
        }
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            var_20 = 18934;
            var_21 += var_13;
            arr_25 [i_0] &= (((~var_3) <= (((var_12 ? (arr_16 [i_0] [i_0] [i_7] [i_7] [i_7]) : (arr_16 [i_0] [i_7] [i_0] [i_0] [i_7]))))));
        }
        arr_26 [i_0] = max(((~(arr_24 [i_0] [i_0] [i_0]))), (arr_17 [i_0] [i_0] [i_0] [i_0] [0] [i_0]));
        var_22 -= (((var_12 ? (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_11 [i_0] [i_0] [i_0]))));
    }
    for (int i_8 = 0; i_8 < 22;i_8 += 1) /* same iter space */
    {
        var_23 = -var_0;
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 22;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 18;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 22;i_11 += 1)
                {
                    {
                        arr_37 [4] [i_8] [i_9] [i_8] = min((arr_8 [i_8] [i_8] [i_10]), ((~(arr_14 [i_10] [i_8] [i_10]))));

                        for (int i_12 = 0; i_12 < 22;i_12 += 1)
                        {
                            var_24 = (max(var_24, (arr_24 [i_12] [i_12] [i_12])));
                            arr_40 [i_8] [3] [16] [i_11] [i_12] = var_1;
                        }
                        for (int i_13 = 2; i_13 < 20;i_13 += 1)
                        {
                            var_25 += (~var_13);
                            var_26 = (max(var_26, ((((((~1444796629) < 1444796629)) ? ((((arr_22 [i_10 - 2] [i_10 + 2] [i_13 - 1]) ? var_6 : var_2))) : (((arr_17 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]) | var_12)))))));
                            var_27 = (arr_6 [i_8]);
                            arr_44 [i_13] [i_11] [i_10 + 4] [16] [i_9] [i_8] = max(234, ((((((arr_31 [i_11]) ? (arr_0 [i_10] [i_13]) : (arr_16 [i_13] [i_11] [i_10] [i_9] [7])))) ? ((min(44877, var_3))) : (((arr_38 [i_8] [i_9] [i_9] [i_10] [i_11] [i_11] [i_13]) ^ (arr_18 [i_10] [i_11] [i_13]))))));
                            var_28 = (max(var_28, -29));
                        }
                        for (int i_14 = 0; i_14 < 22;i_14 += 1)
                        {
                            arr_47 [i_8] [19] = -1;
                            arr_48 [i_10] [i_9] [14] [i_11] [i_14] [i_10] = var_4;
                            arr_49 [i_8] [6] [i_10] [6] [i_8] = var_8;
                        }

                        for (int i_15 = 0; i_15 < 22;i_15 += 1)
                        {
                            var_29 = (min((((1066023183 != (arr_33 [i_8] [i_10 - 2])))), (arr_29 [i_10])));
                            var_30 = var_0;
                        }
                        for (int i_16 = 0; i_16 < 22;i_16 += 1)
                        {
                            var_31 = ((max(-722955105, (arr_0 [i_10 - 2] [i_9]))));
                            var_32 = (min(var_32, -124));
                        }
                    }
                }
            }
        }
        var_33 = (((arr_52 [i_8] [i_8] [9] [i_8] [i_8] [12]) ? (min((var_1 - var_3), 6727922414575607915)) : (max((arr_45 [i_8] [7] [i_8] [i_8] [7] [i_8]), var_2))));
        arr_56 [i_8] [i_8] = (max(((23814 ? var_7 : (arr_15 [i_8] [i_8] [i_8] [i_8]))), var_4));
    }
    #pragma endscop
}
