/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171117
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = max((((!(!231212581)))), var_2);
    var_16 = -var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_17 &= ((-(arr_0 [i_3])));
                            var_18 ^= ((((+(max((arr_1 [i_0]), (arr_6 [i_3] [22]))))) + ((((min(-5533167065849279980, 1))) ? (arr_6 [i_0] [i_0]) : (max(104, (arr_7 [i_0] [i_1] [i_2 + 3] [i_2 + 3])))))));
                        }
                    }
                }
                var_19 = (var_8 * ((((!((min((arr_2 [20] [9]), 181))))))));

                /* vectorizable */
                for (int i_4 = 4; i_4 < 22;i_4 += 1)
                {
                    var_20 = (((1 << (-5533167065849279987 + 5533167065849280000))));

                    for (int i_5 = 1; i_5 < 22;i_5 += 1)
                    {
                        var_21 = (!1);
                        var_22 = ((-1 ? -4225 : (1116349615 >= var_13)));
                        var_23 = var_0;

                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            arr_18 [i_0] [7] [7] [7] [i_5] [i_5] [i_6] = (96 * (((var_0 ? (arr_5 [i_4 + 1]) : 74))));
                            var_24 = (arr_9 [i_1] [i_4 - 2] [i_5 - 1]);
                            var_25 = ((~(1336186606 & 1722107085)));
                        }
                    }
                    for (int i_7 = 1; i_7 < 22;i_7 += 1)
                    {
                        var_26 = ((((~(arr_12 [i_7] [13] [i_4] [i_7 - 1])))) & (-5856779218019033244 & var_4));
                        var_27 = ((~(!27414)));
                    }
                }
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    var_28 = ((!(((~(arr_21 [i_0] [i_1] [15] [i_1] [i_8] [i_8]))))));
                    arr_24 [i_0] [i_0] = (((-(arr_22 [i_0] [i_0] [i_0]))) < (((((arr_19 [i_0] [22] [i_1] [1]) < 1)))));
                    var_29 = ((max((arr_7 [i_0] [i_8] [i_8] [15]), (((var_1 ? -5533167065849279980 : var_10))))));
                }
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 23;i_11 += 1)
                        {
                            {
                                var_30 = (((((!(arr_4 [6])))) << (((!(arr_12 [i_0] [i_0] [i_9] [i_10]))))));
                                var_31 = ((~((~((var_10 & (arr_14 [i_0] [i_9] [i_9] [4])))))));
                                var_32 = 158;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 23;i_12 += 1)
                    {
                        for (int i_13 = 3; i_13 < 21;i_13 += 1)
                        {
                            {
                                var_33 = (((((((arr_29 [i_0] [i_0] [i_0] [i_9] [i_0] [i_9] [i_0]) ? (arr_29 [i_0] [i_0] [1] [i_9] [i_12] [i_12] [i_13 + 2]) : var_0)) + 9223372036854775807)) >> (5856779218019033254 - 5856779218019033205)));
                                var_34 = ((((~(7774273665378641571 <= 15370425387322853030))) == (((!(arr_17 [i_13 - 3] [i_13] [2] [2] [i_13 - 2] [i_13 - 1] [i_13 + 2]))))));
                                var_35 = 8687534855010235681;
                            }
                        }
                    }
                }
                var_36 = 540809389;
            }
        }
    }
    var_37 = (!var_5);
    var_38 = ((!(!var_14)));
    #pragma endscop
}
