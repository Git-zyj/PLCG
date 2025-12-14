/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167672
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            {
                var_16 = ((~(max((((arr_2 [i_0] [i_0]) ? var_9 : var_3)), var_0))));

                for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
                {
                    var_17 = (min(var_17, ((max(var_1, 0)))));
                    arr_7 [i_0] [i_0] [i_0] [i_0] = (max((max((arr_4 [i_0 + 1]), var_1)), ((max(31633, (arr_1 [i_1 - 4]))))));
                }
                for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
                {
                    var_18 -= ((-((~(((arr_6 [16] [16] [i_0]) ^ (arr_6 [i_1] [i_1] [i_1])))))));
                    var_19 ^= (((((min((arr_2 [13] [1]), (!0))))) & (min((((arr_5 [i_0] [i_1] [i_3] [i_3]) ? (arr_6 [i_0 + 3] [i_1] [i_1]) : var_13)), (((-(arr_3 [i_0]))))))));

                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        var_20 = (((((max((arr_6 [i_0] [i_0] [i_0]), var_10)) - var_8)) | (((!(((arr_4 [i_4]) || var_2)))))));

                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            var_21 -= max((min((arr_13 [i_1 - 2] [i_0 + 1] [i_0] [i_0 + 4]), (min(var_14, 865109422076328625)))), ((min((arr_14 [i_5]), var_15))));
                            var_22 += 65;
                            var_23 = ((var_12 ? (arr_6 [i_0] [i_0 + 4] [i_0]) : (arr_10 [i_1 - 4] [i_1])));
                            var_24 += max((((14 + var_8) ? ((min(var_2, var_11))) : (min(var_11, 18446744073709551592)))), 17581634651633222992);
                        }
                        for (int i_6 = 2; i_6 < 21;i_6 += 1)
                        {
                            var_25 = (((((-32767 - 1) * (max(2769471361, 9)))) * 0));
                            var_26 *= ((!(arr_14 [i_0])));
                            var_27 |= (max((arr_17 [i_0] [18] [i_3] [i_0] [i_3] [i_6] [1]), (((-16636 < (((min((arr_8 [i_0] [19] [i_3] [3]), var_5)))))))));
                        }
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_28 = (min(var_28, (((((((max(var_0, 239))) / -865109422076328625)) == var_12)))));
                        var_29 = (((max((max(-16643, -41463642)), 12391)) == var_3));
                        var_30 = ((((((max(18446744073709551606, var_8))))) >= var_2));
                    }
                    for (int i_8 = 2; i_8 < 19;i_8 += 1)
                    {
                        var_31 = ((((-(0 - -3))) < var_15));
                        var_32 = (max((31 ^ 0), ((min(237, 170)))));
                        var_33 = (min(var_33, var_1));
                        var_34 &= ((!((((14703122392834456930 + 38) ? (arr_0 [i_8 + 1]) : var_3)))));
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        arr_26 [i_9] [i_9] [i_3] [i_1] [8] [i_0] &= var_12;

                        for (int i_10 = 2; i_10 < 20;i_10 += 1)
                        {
                            var_35 = (((arr_14 [i_0 - 1]) | (!var_6)));
                            var_36 = ((3 ? (arr_13 [i_10] [i_9] [i_3] [i_0 + 4]) : 108));
                        }
                        arr_31 [i_0] [i_1] [i_3] [i_3] [i_3] [19] = var_5;
                    }
                }
                var_37 = (min(var_37, ((max((arr_29 [4] [i_1 - 1]), (arr_20 [i_1] [i_0 + 4] [i_0] [i_0]))))));
                var_38 = ((-((var_3 >> (8388607 - 8388607)))));
            }
        }
    }

    for (int i_11 = 0; i_11 < 11;i_11 += 1)
    {
        var_39 = (min(var_39, (((max((arr_6 [i_11] [i_11] [i_11]), 218))))));
        var_40 = 14;
    }
    #pragma endscop
}
