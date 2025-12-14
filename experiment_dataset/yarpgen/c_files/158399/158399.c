/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158399
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_5;

    for (int i_0 = 4; i_0 < 21;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] &= (!255);
        arr_4 [i_0] = (max((((-1598866850241927122 ? (arr_1 [i_0 - 3] [i_0 - 3]) : (!55183)))), 4855290501425997888));
    }
    for (int i_1 = 4; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_14 += (arr_2 [i_1 + 2]);

        /* vectorizable */
        for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
        {
            var_15 = (max(var_15, (!10341)));
            var_16 = 101;
        }
        for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
        {

            for (int i_4 = 3; i_4 < 23;i_4 += 1)
            {
                var_17 = (min(var_17, ((max(-31520, (max((arr_0 [i_1 - 3] [i_4 + 1]), 0)))))));
                var_18 = var_11;
                arr_13 [8] [i_3] [i_1] &= (max((!55194), (max(687851052, -144))));
                var_19 += var_11;

                for (int i_5 = 2; i_5 < 22;i_5 += 1)
                {
                    arr_17 [i_5] |= (arr_6 [i_3]);
                    arr_18 [i_4] [i_3] [11] [i_5] [i_5] = -var_10;
                    var_20 = (max((((-18446744073709551611 ? (arr_11 [i_4]) : var_10))), (((arr_15 [i_1] [i_3] [i_4 - 1] [1]) ? (arr_15 [i_1 - 4] [i_3] [i_4] [i_5]) : (arr_15 [i_1 - 1] [i_1 - 1] [i_4] [4])))));
                }
                /* vectorizable */
                for (int i_6 = 4; i_6 < 23;i_6 += 1)
                {
                    arr_21 [i_3] [i_3] [i_4] [i_4] [i_3] [i_6] = (arr_11 [i_4]);

                    for (int i_7 = 3; i_7 < 22;i_7 += 1)
                    {
                        var_21 = 17960021335100596906;
                        var_22 = -14435857982537223659;
                    }
                    var_23 = 31;
                }
                for (int i_8 = 0; i_8 < 24;i_8 += 1)
                {
                    var_24 = (min(var_24, (arr_8 [i_3] [i_4])));
                    arr_28 [10] [i_4] [i_1] [i_3] [i_1] |= 2851853357;
                    var_25 = (min(var_25, (((((max(18446744073709551615, (arr_10 [i_1 - 4] [i_3])))) ? (((!(arr_10 [i_1 - 3] [i_3])))) : (max(var_6, var_11)))))));
                    var_26 -= ((!(((55183 ? 126 : 55194)))));
                }
            }
            /* vectorizable */
            for (int i_9 = 3; i_9 < 21;i_9 += 1)
            {
                arr_32 [i_9 - 3] [i_1] [i_1] = ((+(((arr_22 [i_1] [i_1] [i_1] [i_1] [6]) ? 0 : (arr_24 [i_1] [i_1] [i_1] [i_1 - 1] [i_1])))));

                for (int i_10 = 0; i_10 < 24;i_10 += 1)
                {
                    arr_37 [i_3] [i_3] [i_9] [i_10] &= ((-(arr_8 [i_9 - 2] [i_10])));
                    var_27 = 4;
                }
                var_28 += ((!(arr_6 [i_1 - 4])));
                arr_38 [i_9] [i_9] [i_1] [i_1] = var_5;
                var_29 = (arr_31 [i_1 - 4] [i_9 - 2]);
            }
            var_30 += (max(((~(max(4294967295, -8129)))), ((max((~-2108666549), (max(-547904042, (arr_2 [i_1]))))))));

            for (int i_11 = 3; i_11 < 23;i_11 += 1) /* same iter space */
            {
                var_31 -= var_7;
                var_32 *= 8129;
                var_33 = (min(var_33, ((max((((+((max((arr_30 [16] [i_3] [i_3]), 1)))))), (max((max(13018253502030326838, (arr_40 [i_1] [i_3] [i_1]))), 65535)))))));
                var_34 = (max((((!((max(16322622440559669367, var_12)))))), ((((max(0, 31))) ? (max(0, var_10)) : (((max(-101, 1))))))));
            }
            for (int i_12 = 3; i_12 < 23;i_12 += 1) /* same iter space */
            {
                arr_44 [i_12] [i_3] [i_1] [i_1 + 3] = (~-101);
                var_35 = ((-(((-(arr_36 [i_1] [i_1] [i_3] [i_3] [i_1] [i_12]))))));
            }
            /* LoopNest 2 */
            for (int i_13 = 3; i_13 < 23;i_13 += 1)
            {
                for (int i_14 = 2; i_14 < 23;i_14 += 1)
                {
                    {
                        var_36 = (max((max(var_2, -733305458)), 1));
                        var_37 = (max(var_37, ((max(0, 10)))));
                    }
                }
            }
            var_38 = var_3;
        }
        var_39 = ((~(max(2980972783, var_9))));
        /* LoopNest 3 */
        for (int i_15 = 0; i_15 < 1;i_15 += 1)
        {
            for (int i_16 = 1; i_16 < 20;i_16 += 1)
            {
                for (int i_17 = 4; i_17 < 23;i_17 += 1)
                {
                    {
                        var_40 -= ((~(max(-23, 18446744073709551615))));
                        var_41 ^= ((((max((arr_12 [i_1] [i_1] [i_1]), (max(3, 4714876426680249727))))) ? ((max(1, ((!(arr_34 [i_17] [i_15] [i_16] [i_17])))))) : (arr_22 [i_17] [12] [i_16] [i_17] [i_17])));

                        /* vectorizable */
                        for (int i_18 = 1; i_18 < 21;i_18 += 1)
                        {
                            var_42 = 54;
                            var_43 = (max(var_43, var_9));
                        }
                        for (int i_19 = 3; i_19 < 22;i_19 += 1)
                        {
                            var_44 = 12491825360672535554;
                            var_45 += (max((max(4714876426680249727, (arr_55 [i_17 - 2] [i_17] [i_17 - 2]))), 3371));
                        }
                    }
                }
            }
        }
    }
    var_46 = (max(((max(var_3, var_2))), var_10));
    #pragma endscop
}
