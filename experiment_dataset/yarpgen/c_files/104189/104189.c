/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104189
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, ((max((((var_8 > (~var_7)))), var_2)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_15 = ((~((-(arr_5 [19])))));
                    var_16 *= ((((var_8 > (arr_0 [i_0]))) ? (max((arr_4 [i_1] [i_1]), (arr_5 [i_0]))) : var_9));
                    var_17 = (((((((((arr_0 [i_0]) ? (arr_2 [i_0] [i_1] [16]) : -7536777804448507625))) ? (max((arr_4 [i_0] [i_1]), var_0)) : (~-29948)))) > (max(29979, -7536777804448507625))));
                }
            }
        }
    }
    var_18 = ((-29973 ? 7236268628404885437 : 1));
    var_19 = var_6;

    /* vectorizable */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {
                        var_20 = (arr_16 [i_6] [i_6] [i_5] [i_6]);
                        var_21 = (max(var_21, ((((arr_2 [i_3] [i_4] [6]) - (arr_4 [i_4] [i_6]))))));
                        arr_20 [i_3] [i_3] [i_4] [i_5] [i_6] = ((arr_10 [i_3] [18]) ? (arr_10 [i_3] [7]) : (arr_10 [i_3] [i_3]));
                    }
                }
            }
        }

        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            var_22 *= -var_6;
            var_23 = var_13;

            for (int i_8 = 3; i_8 < 17;i_8 += 1)
            {
                var_24 += ((((((arr_15 [i_8] [i_7]) ? 1 : var_9))) ? -9696 : -var_4));
                arr_28 [0] [i_7] [i_7] [i_3] = (arr_18 [1] [i_8 - 3] [i_8 + 1] [i_3]);
                var_25 += (((-7536777804448507629 ? var_1 : var_10)));
            }
            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {
                var_26 = (~var_8);
                arr_32 [i_7] = -1868137806458848237;
                arr_33 [i_7] [i_7] [i_9] = var_2;
            }
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                arr_38 [i_3] [i_7] [5] = var_4;
                var_27 = (arr_30 [i_3] [i_3] [i_3]);
                var_28 *= var_5;
            }
            arr_39 [6] [i_7] &= (((((arr_1 [i_3]) ? var_1 : -5418)) | (arr_1 [i_7])));
        }
        for (int i_11 = 0; i_11 < 19;i_11 += 1)
        {
            arr_43 [i_11] [i_3] = (~18446744073709551615);
            arr_44 [i_3] [i_11] [i_11] = var_2;

            for (int i_12 = 1; i_12 < 1;i_12 += 1)
            {
                arr_47 [i_3] [i_3] [i_11] [i_12] = ((!(arr_41 [i_12 - 1])));
                var_29 = (min(var_29, ((((arr_21 [i_3] [i_12]) <= (arr_21 [i_12] [i_12]))))));
            }
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                arr_51 [9] [i_11] [i_11] [i_3] = (arr_15 [i_3] [6]);
                var_30 = (min(var_30, var_12));
            }
            for (int i_14 = 0; i_14 < 19;i_14 += 1)
            {
                var_31 = (max(var_31, (((!(arr_8 [i_3]))))));
                var_32 = (min(var_32, 1971905528));
                var_33 += ((5416 ? 7224639393230979033 : 7224639393230979033));
                arr_56 [i_3] [i_3] [4] [4] = (((arr_14 [13] [13] [i_3] [2]) ? 1868137806458848233 : 12441665580056093881));
            }
            for (int i_15 = 0; i_15 < 19;i_15 += 1)
            {
                var_34 = (6005078493653457729 / -127);
                arr_59 [1] [1] [i_15] &= (((-(arr_50 [i_3] [i_3] [i_3] [i_3]))));
                var_35 ^= -49;
            }
        }
        for (int i_16 = 0; i_16 < 19;i_16 += 1)
        {
            var_36 = (min(var_36, (((~(arr_3 [i_3]))))));
            var_37 = var_10;
            arr_64 [i_3] [i_16] [i_3] = (arr_35 [i_16] [i_16] [i_3] [i_16]);
        }
    }
    for (int i_17 = 0; i_17 < 13;i_17 += 1)
    {
        var_38 = ((~(((arr_41 [i_17]) + (arr_41 [i_17])))));
        var_39 -= (max((!var_11), (arr_13 [0] [6] [1] [i_17])));
        var_40 = max(((max((arr_23 [i_17] [i_17]), (((9 || (arr_2 [i_17] [i_17] [12]))))))), ((-var_4 ? ((((!(arr_2 [i_17] [i_17] [i_17]))))) : ((-7150 ? 6005078493653457735 : -121)))));
        var_41 |= (127 * 2132849567);
        var_42 = (max((arr_29 [i_17] [i_17] [i_17] [i_17]), ((max(((max((arr_42 [i_17] [i_17]), (arr_13 [i_17] [i_17] [11] [i_17])))), (max(var_11, (arr_50 [i_17] [i_17] [i_17] [i_17]))))))));
    }
    #pragma endscop
}
