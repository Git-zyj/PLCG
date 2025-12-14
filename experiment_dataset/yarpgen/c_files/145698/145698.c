/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145698
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= ((((max(-var_13, (var_16 | var_5)))) ? (min((((var_9 ? var_14 : 0))), var_5)) : (min(var_2, ((var_9 ? 243 : 9140206599860817064))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        var_18 = (((((var_7 ? (arr_3 [i_1] [i_1]) : (arr_9 [i_0] [i_1] [i_2] [i_0] [i_3])))) ? var_9 : var_5));
                        var_19 = (max(var_19, (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0])));

                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            var_20 = (((arr_9 [i_4] [i_3] [i_2 - 1] [i_1] [i_0]) ? 1803861390863577986 : (((~(arr_0 [i_2]))))));
                            arr_13 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_6 [i_2 + 2] [i_2 + 1] [i_2 - 2]);
                            var_21 = (((arr_12 [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0]) >> (((arr_0 [i_1]) - 56))));
                            arr_14 [i_1] = -16387105495354590394;
                        }

                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            var_22 = (arr_3 [i_1] [i_2 - 2]);
                            var_23 &= ((var_1 << (((((arr_10 [i_0]) + 2059638578354961197)) - 4734574323430306787))));
                        }
                        for (int i_6 = 2; i_6 < 10;i_6 += 1)
                        {
                            arr_23 [i_0 - 1] [i_0 - 1] [i_2] [i_1] [i_1] [i_6] = ((arr_6 [i_2 - 1] [i_6 + 1] [i_6]) * (arr_4 [i_6 + 1] [i_1]));
                            var_24 = ((((((arr_5 [i_1] [i_1] [i_1]) ? (arr_22 [i_0] [i_0] [i_0]) : var_3))) ? (arr_19 [i_6] [i_3 + 1] [i_2 - 1] [i_1] [i_0]) : (var_6 | -524)));
                            var_25 = ((-(arr_21 [i_0 + 1] [i_3 - 1] [i_2 + 1] [i_3] [i_1])));
                            arr_24 [i_1] [i_2] [i_1] = (arr_3 [i_1] [i_6 - 1]);
                        }
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            arr_28 [i_0] [i_0] [i_1] [i_0] [i_0] = (((arr_12 [i_0] [i_1] [i_2 + 1] [i_3] [i_7]) | (arr_12 [i_0] [i_1] [i_0] [i_3 - 1] [i_7])));
                            arr_29 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_1] [i_0] = ((0 == (arr_17 [i_2] [i_2 + 2] [i_2 - 1] [i_1] [i_2 + 2])));
                        }
                        arr_30 [i_0] [i_0 + 1] [i_0] [i_1] = (((18446744073709551601 ? -27202 : -1)));
                    }
                    arr_31 [i_1] = ((!(((var_7 ? (arr_5 [i_1] [i_1] [i_1]) : var_6)))));
                }
            }
        }
        arr_32 [i_0] = ((~(arr_19 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1])));
        arr_33 [i_0] = (var_0 + var_7);
    }
    #pragma endscop
}
