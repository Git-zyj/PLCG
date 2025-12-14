/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138193
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = -2142978866;
    var_18 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    var_19 = (((var_5 ? (arr_4 [i_0] [i_0]) : -3944822925540913644)));
                    arr_9 [19] [i_0] [i_2] = var_3;

                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 17;i_3 += 1)
                    {
                        arr_12 [i_0] [i_0] [i_1] [i_0] [i_2] [i_3] = ((!(arr_11 [i_3 - 3] [i_3 - 3] [i_3 - 3])));
                        arr_13 [i_0] [i_0] = ((var_11 ? 211 : var_7));
                        arr_14 [i_0] [i_0] [i_3 - 1] [i_0] [i_0] [i_1] = (arr_2 [i_0]);

                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            arr_18 [i_0] [i_0] [i_4] [i_3] [i_2] [i_2] = 74;
                            var_20 = (!2645693611);
                            var_21 = (var_5 != (arr_8 [i_1] [i_3 - 3] [i_0] [i_0]));
                        }
                        arr_19 [i_0] [i_0] [i_2] [8] = ((((arr_7 [i_3] [i_0] [i_0] [1]) ? 2947061647 : (arr_10 [i_3] [i_2] [i_0] [i_0]))));
                    }
                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 20;i_5 += 1)
                    {

                        for (int i_6 = 2; i_6 < 17;i_6 += 1)
                        {
                            arr_26 [i_0] [i_1] [i_2] [i_0] [i_6] = 34700;
                            var_22 = (((563315374 / var_15) - 27151));
                            arr_27 [i_0] [i_1] [i_0] [i_5] = ((-(arr_17 [i_5] [i_6] [i_6 + 4] [i_6 + 4] [i_6 - 1] [i_6])));
                        }
                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            arr_30 [i_5] [i_0] [i_1] = (arr_24 [i_5 - 1] [i_5] [12] [i_5 + 1] [i_5] [i_5 - 1]);
                            arr_31 [i_0] [11] [i_2] [i_7] [i_0] = (~(arr_7 [i_2] [i_0] [i_5 + 1] [i_7]));
                            var_23 = ((27497 ? (arr_15 [i_5 + 1] [i_5] [i_5 + 1] [i_5 + 1] [i_5 - 1]) : (!0)));
                            var_24 = ((((((arr_15 [i_0] [i_1] [i_2] [i_5] [i_7]) ? 7949 : (arr_3 [i_0])))) ? 226 : (((arr_7 [i_0] [i_0] [i_5 + 1] [i_7]) ^ var_0))));
                            arr_32 [i_0] [i_0] [i_1] [i_0] [i_0] [i_7] [i_7] = 27512;
                        }
                        arr_33 [i_0] [i_0] [i_0] [i_0] [i_5 + 1] = ((var_0 ? (arr_24 [i_5 + 1] [i_1] [i_2] [i_1] [i_5 + 1] [i_5]) : 27495));
                    }
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        arr_38 [i_8] [i_0] [i_0] = (((!1) + (0 ^ 234)));
                        arr_39 [i_0] [i_0] = (max(((max(27497, (242765368 != var_11)))), (((var_7 ^ (arr_7 [i_0] [i_0] [i_2] [i_8]))))));
                    }
                }
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    var_25 = ((((((min(1, var_16))) >= (arr_17 [i_1] [i_1] [i_1] [9] [i_0] [i_0]))) ? (arr_2 [i_0]) : (arr_22 [i_9] [i_1] [i_0] [i_0])));
                    arr_43 [i_0] [i_0] [i_0] = -var_13;

                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        arr_48 [i_0] [i_0] [i_0] = (arr_11 [i_1] [i_9] [i_10]);
                        arr_49 [i_0] [i_0] [i_0] [i_0] [i_0] [13] = -3730610841146491512;
                    }
                }

                for (int i_11 = 0; i_11 < 21;i_11 += 1)
                {
                    var_26 = (31323 / (215 * 1));
                    arr_52 [i_0] [i_1] [i_11] = (-27496 / -810790814);
                    arr_53 [i_0] [i_0] [i_0] [i_11] = ((!(((-(arr_28 [i_1] [i_1] [i_11] [i_11] [i_1]))))));
                }
            }
        }
    }
    #pragma endscop
}
