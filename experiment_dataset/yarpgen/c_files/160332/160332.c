/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160332
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((var_0 ? var_1 : var_6)) % (var_8 > var_0))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            arr_6 [i_0] [i_1] [i_1] = ((63 ? (arr_5 [i_1 - 3] [i_1 + 1] [i_1 + 1]) : 196));

            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                var_17 = (min(var_17, (arr_1 [i_2])));
                arr_11 [i_1] = ((arr_4 [i_1 - 1] [i_1] [i_1 + 2]) & (arr_7 [i_1 - 1] [i_1 - 1] [i_1 + 2] [i_1 - 1]));
                var_18 = (((arr_10 [i_1] [3] [i_1 + 2] [i_1 + 3]) < (arr_9 [1] [i_1] [i_1 - 2])));
            }
            for (int i_3 = 1; i_3 < 12;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {

                    for (int i_5 = 3; i_5 < 12;i_5 += 1)
                    {
                        var_19 -= var_0;
                        var_20 = (arr_18 [i_5] [i_5] [i_4] [i_3] [i_1 + 1] [i_0]);
                    }

                    for (int i_6 = 1; i_6 < 11;i_6 += 1)
                    {
                        arr_23 [i_0] [i_1] = var_13;
                        var_21 = ((~(arr_15 [i_1] [i_1] [i_3 + 1] [2] [i_4] [2])));
                        arr_24 [i_1] [1] = ((var_14 * (arr_12 [12] [12] [12] [1])));
                        var_22 = ((((-1825645971 ? (arr_16 [i_6] [i_6] [i_6] [i_6 + 2]) : (arr_18 [i_0] [i_1] [i_3] [i_0] [i_4] [i_0]))) & (0 >= -1825645959)));
                    }
                    for (int i_7 = 1; i_7 < 11;i_7 += 1)
                    {
                        var_23 = var_7;
                        var_24 = (max(var_24, (arr_2 [i_4])));
                        var_25 = ((63 - (~17537515483460215907)));
                        var_26 = (max(var_26, 10));
                    }

                    for (int i_8 = 2; i_8 < 10;i_8 += 1)
                    {
                        var_27 = (!(~var_9));
                        arr_30 [i_8] [i_1] [i_1] [i_1] [2] = ((!(((1 | (arr_20 [i_3] [i_1]))))));
                        arr_31 [i_1] [2] [i_3] [i_4] [i_8] = -1;
                        var_28 = (max(var_28, (arr_4 [1] [1] [i_8])));
                    }
                    arr_32 [i_0] [12] [i_0] [12] &= ((-(17537515483460215910 < var_14)));
                }
                for (int i_9 = 0; i_9 < 13;i_9 += 1) /* same iter space */
                {
                    var_29 = 23;
                    var_30 = (max(var_30, var_2));
                }
                for (int i_10 = 0; i_10 < 13;i_10 += 1) /* same iter space */
                {
                    arr_38 [i_0] [i_1] [i_3] [1] = (((arr_26 [i_0] [i_1 - 3] [i_3] [i_3 + 1] [i_3 - 1] [i_10]) ? -54 : (arr_2 [i_1 + 1])));
                    arr_39 [i_1] [i_1] [i_3] [i_1] [i_1] [i_0] = ((-(1 % 46997)));
                }
                var_31 = (arr_17 [i_0] [5] [i_1] [i_1]);
                arr_40 [i_1] [i_3] [i_1] [i_1] = (((((!(arr_34 [i_3] [i_0])))) + 1));
            }
            arr_41 [i_0] [i_1] [i_1] = 1;
        }
        arr_42 [i_0] [i_0] = (((((min(var_15, -543658061)) > var_3)) ? (max(255, (((arr_10 [2] [i_0] [i_0] [i_0]) ? 3924877177 : -112794905)))) : (((+(((arr_7 [i_0] [i_0] [i_0] [i_0]) ? (arr_37 [i_0] [i_0] [i_0]) : var_3)))))));
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 1;i_11 += 1)
    {
        arr_45 [i_11] = ((413473116 ? var_7 : (arr_8 [i_11])));
        arr_46 [i_11] [i_11] = (((arr_4 [i_11] [i_11] [i_11]) < -229572584));
        arr_47 [i_11] = (~49558467);
        /* LoopNest 3 */
        for (int i_12 = 1; i_12 < 11;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 10;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 13;i_14 += 1)
                {
                    {
                        arr_58 [i_11] [i_14] [i_12] [i_13] [i_14] [i_14] = 285631583;
                        var_32 = (~95);

                        for (int i_15 = 0; i_15 < 13;i_15 += 1) /* same iter space */
                        {
                            var_33 = (max(var_33, (var_8 ^ var_5)));
                            arr_63 [i_14] [i_12] [i_13] [i_12] [i_13] [5] = (((arr_50 [i_13] [i_12] [i_13]) ? 1 : (arr_52 [0] [1] [0])));
                        }
                        for (int i_16 = 0; i_16 < 13;i_16 += 1) /* same iter space */
                        {
                            var_34 &= (arr_49 [i_12 + 1]);
                            var_35 = (max(var_35, (1569018991 | 31566)));
                            arr_67 [i_14] [8] [i_13] [i_14] [0] = (((arr_53 [i_13 + 3] [i_12 + 2] [i_13]) ? 1359710714 : var_0));
                            var_36 = (max(var_36, (arr_37 [3] [i_13] [6])));
                        }
                        for (int i_17 = 0; i_17 < 13;i_17 += 1) /* same iter space */
                        {
                            arr_72 [i_17] [i_12] [i_14] [i_14] [i_17] [i_12 - 1] = (var_8 * var_4);
                            arr_73 [i_17] [i_17] [i_17] &= ((var_8 & (arr_71 [i_12 + 1] [i_12 + 2] [i_13 - 1] [i_13] [i_13 - 1])));
                        }
                        for (int i_18 = 0; i_18 < 13;i_18 += 1) /* same iter space */
                        {
                            arr_76 [i_11] [i_11] [i_14] [i_11] [i_18] = ((!(arr_50 [i_13] [i_13 + 3] [5])));
                            var_37 = ((!(arr_8 [i_13 + 3])));
                            arr_77 [i_11] [i_12] [i_13] [1] [i_14] = ((var_7 && (arr_19 [i_12 + 2] [i_12 + 2] [i_13 - 1] [i_14] [i_13] [i_13 + 1])));
                            var_38 = (max(var_38, ((((var_1 >= (arr_29 [i_11] [i_11] [i_12] [i_13] [6] [i_12] [10])))))));
                        }
                    }
                }
            }
        }
        arr_78 [i_11] [1] = 18446744073709551596;
    }
    var_39 = max(((1 ? 24 : (min(1, 379959734)))), var_14);
    #pragma endscop
}
