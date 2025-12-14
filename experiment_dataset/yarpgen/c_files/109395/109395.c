/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109395
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= var_4;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                var_11 *= (((84 ? 118 : ((max(-14605, 14605))))));
                var_12 = (min(((~(min(var_7, 1)))), ((var_7 ? (((((arr_5 [i_0] [i_1]) > var_3)))) : (((arr_4 [i_0] [i_1] [i_2]) ? 2121528729887981868 : var_9))))));
            }
            /* vectorizable */
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 13;i_5 += 1)
                    {
                        {
                            var_13 = (2121528729887981868 >= (arr_10 [i_0] [i_1] [i_3] [i_4] [i_4 + 3]));
                            var_14 *= (arr_11 [i_0] [i_5 + 1] [i_4 + 3] [1] [i_5]);
                            var_15 *= ((~(arr_0 [0])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 14;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 14;i_7 += 1)
                    {
                        {
                            var_16 = var_5;
                            arr_20 [i_7] [i_3] &= var_9;
                        }
                    }
                }

                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    arr_23 [i_0] [i_0] [i_3] [i_8] [i_1] = (arr_19 [i_1] [i_1 - 4] [i_1 + 1]);
                    var_17 = (!2121528729887981883);

                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        var_18 = (((arr_1 [i_1 - 3] [i_1 - 3]) ? (~488562102859560459) : (arr_0 [i_1 - 3])));
                        var_19 = var_6;
                        var_20 = var_2;
                        arr_26 [7] [i_1] [i_3] [i_8] [i_9] [i_9] = (arr_24 [i_1] [i_1] [i_3] [i_8] [i_9]);
                    }
                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {
                        arr_29 [i_0] [i_0] [i_0] [i_1] [1] [i_0] [i_0] = (((arr_1 [i_1 - 2] [i_0]) ^ (arr_0 [i_1 - 1])));
                        var_21 = (((arr_9 [i_1 + 1] [1] [i_1] [i_10]) ^ (arr_9 [i_1 - 3] [i_10] [i_1] [6])));
                        arr_30 [i_0] [i_1 - 1] [i_3] [i_8] [i_1] = (arr_22 [i_0] [i_0] [i_0] [i_8]);
                    }
                    var_22 = (((var_9 == (arr_3 [i_1] [i_3] [9]))));
                }
                for (int i_11 = 0; i_11 < 15;i_11 += 1)
                {
                    var_23 ^= (var_4 == var_6);
                    var_24 = ((var_6 | (arr_12 [i_1] [i_1] [i_1] [i_1 - 2] [i_1] [7] [i_1 - 4])));
                }
                var_25 = (max(var_25, (~var_4)));
            }

            for (int i_12 = 0; i_12 < 15;i_12 += 1)
            {
                var_26 ^= ((((((1 >> (-103 + 132))) + -95))) & var_3);
                arr_36 [8] [i_1 - 3] [i_1] [i_1] = ((max((~14605), ((min(15413, (arr_2 [i_1] [i_1])))))));
            }
            arr_37 [i_0] [i_0] [i_0] |= (max((arr_22 [i_1] [i_1] [i_0] [i_0]), 17566335903396187018));
            var_27 = ((min(((var_7 ? var_3 : 2121528729887981868)), 34)) == var_3);
            var_28 = (max(var_28, (((!(102 / var_4))))));
        }
        for (int i_13 = 1; i_13 < 13;i_13 += 1)
        {
            var_29 = (min(var_0, ((((177 ? 10530 : -12342)) >> 1))));
            arr_41 [i_13] [i_13] = 3860563912;
            var_30 = 53705;
            var_31 = -652293282417958638;
        }
        for (int i_14 = 3; i_14 < 13;i_14 += 1)
        {
            arr_46 [i_0] [11] [10] = ((!((((((var_5 ? (arr_35 [i_0]) : -102))) / var_7)))));
            arr_47 [i_0] [i_14] = ((11805 - ((var_5 ^ (2121528729887981868 <= -123)))));
        }
        for (int i_15 = 0; i_15 < 15;i_15 += 1)
        {
            var_32 += (max(((min(var_3, (arr_40 [i_0])))), -86));
            var_33 = -108;
            var_34 = ((max(var_6, var_7)));
            var_35 = (max(var_35, (((~(max((((~(arr_18 [i_0] [i_15] [i_0] [i_0] [9])))), var_7)))))));
        }
        var_36 = (((+(min((arr_45 [i_0] [13] [1]), (arr_24 [i_0] [i_0] [6] [1] [6]))))) * (arr_7 [i_0] [i_0]));
    }
    /* vectorizable */
    for (int i_16 = 0; i_16 < 22;i_16 += 1)
    {
        arr_54 [i_16] [i_16] = ((var_6 ? (488562102859560480 * 0) : (((0 ? 1 : (arr_53 [20]))))));
        var_37 += ((1 ? (arr_52 [i_16]) : (arr_52 [i_16])));
        var_38 = (max(var_38, 103));
        var_39 += (arr_52 [i_16]);
    }
    var_40 -= ((-((min((!16328), var_2)))));
    var_41 = (var_6 && (!-1));
    #pragma endscop
}
