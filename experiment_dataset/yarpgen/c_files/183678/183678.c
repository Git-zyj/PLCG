/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183678
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max((min(var_14, var_10)), var_3));
    var_17 = (12 <= 65535);
    var_18 = (((((var_10 / 65535) ? (var_9 / var_2) : var_7)) >= var_11));

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                arr_7 [i_0] = (min(var_15, (((arr_4 [i_0] [i_2]) ? var_3 : -var_12))));
                arr_8 [i_2] = ((-((-(arr_6 [i_2] [i_1] [i_0] [i_0])))));
                arr_9 [i_0] [i_1] [i_2] = (min(((~(arr_4 [i_0] [i_1]))), ((-(arr_4 [i_0] [i_2])))));
            }
            var_19 = var_5;
            arr_10 [i_0] [i_0] = max(var_14, 2039487193);
            var_20 = (!-95140299);
            var_21 = 53298;
        }

        /* vectorizable */
        for (int i_3 = 2; i_3 < 18;i_3 += 1)
        {
            var_22 = (((14254 << (40479 - 40476))));
            var_23 |= (((arr_2 [i_3 + 3] [i_3 + 1]) <= (arr_2 [i_3 - 1] [i_3 + 1])));

            for (int i_4 = 2; i_4 < 19;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            var_24 = 1729500736;
                            var_25 = (arr_18 [i_3] [i_3 + 1] [i_5] [i_5] [i_5]);
                            var_26 = (((arr_16 [i_4 - 1] [i_4 - 1] [i_4] [i_4 - 2] [i_4 + 1]) ? (arr_16 [i_4 + 1] [i_4 + 1] [i_4 + 2] [i_4 - 1] [i_4 + 2]) : (arr_16 [i_4 + 1] [i_4 - 2] [i_4 - 1] [i_4 + 1] [i_4 - 2])));
                            arr_21 [i_3 + 2] [i_4 - 2] [i_5] [i_6] = arr_17 [i_0] [i_3] [i_3 - 2];
                        }
                    }
                }

                for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
                {
                    var_27 = (!40508);
                    arr_24 [i_3] [i_3] [i_4 + 2] [i_7] = var_1;
                }
                for (int i_8 = 0; i_8 < 21;i_8 += 1) /* same iter space */
                {

                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        var_28 = (!2199023255424);
                        var_29 = ((((arr_0 [i_8] [i_9]) ? var_4 : (arr_22 [i_8] [i_4 + 1] [i_3]))) > (((9 * (arr_13 [i_0] [i_4] [i_9])))));
                    }
                    var_30 = var_6;

                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        arr_32 [i_0] [i_3 + 1] [i_4] [i_8] [i_10] = 29;
                        arr_33 [i_0] [i_10] [i_4 - 1] [i_10] [i_10] [i_0] = ((!(arr_16 [i_4 + 1] [i_4] [i_4] [i_3 + 2] [i_3])));
                        arr_34 [i_10] [i_8] [i_4 + 1] [i_3 - 1] [i_3] [i_3] [i_0] = ((~(arr_4 [i_4 + 2] [i_3 + 2])));
                    }
                    for (int i_11 = 0; i_11 < 21;i_11 += 1)
                    {
                        arr_37 [i_0] [i_0] [i_3 + 3] [i_3 + 2] [i_4] [i_8] [i_11] = ((-(arr_25 [i_0] [i_3 + 3] [i_4 - 2])));
                        var_31 = (!25);
                        arr_38 [i_0] [i_3] [i_8] [i_3 - 2] [i_11] [i_0] |= ((9063594583496276456 ? 0 : var_6));
                        var_32 -= (((arr_25 [i_4 + 2] [i_3 - 2] [i_3 + 1]) ? (arr_25 [i_4 + 2] [i_3] [i_3]) : (arr_25 [i_4 + 2] [i_4] [i_0])));
                        var_33 -= var_11;
                    }
                    for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
                    {
                        var_34 = arr_12 [i_3 + 1] [i_4 - 2];
                        var_35 = ((0 ? var_7 : (arr_28 [i_4 - 2] [i_4 + 2] [i_3] [i_3] [i_3 - 2] [i_3] [i_3 + 2])));
                    }
                    for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
                    {
                        arr_44 [i_0] [i_0] [i_0] [i_3] [i_4 + 1] [i_8] [i_13] &= (((((arr_12 [i_0] [i_0]) ? var_0 : 380599987627223157)) > (arr_35 [i_4 + 2] [i_3 + 2])));
                        var_36 = (((var_6 <= 3840) ? (arr_28 [i_0] [i_4 - 2] [i_4] [i_4 + 1] [i_13] [i_0] [i_4]) : (arr_3 [i_4 - 1])));
                        arr_45 [i_0] [i_3] [i_4] [i_8] [i_13] = (~59384);
                        var_37 = (arr_1 [i_0]);
                    }
                }
            }
            for (int i_14 = 3; i_14 < 20;i_14 += 1)
            {
                var_38 = (((arr_42 [i_14 - 3] [i_3 + 2]) < ((var_4 ? 5034700674241915872 : 37))));
                var_39 = 0;
                var_40 = (((arr_41 [i_0] [i_3 - 2] [i_3 + 1] [i_14 - 3] [i_14 - 1]) ? (!var_11) : var_1));
            }
            for (int i_15 = 0; i_15 < 1;i_15 += 1)
            {
                var_41 -= var_11;
                var_42 = ((~(arr_36 [i_3 + 2] [i_3])));
                arr_53 [i_0] [i_15] = (arr_0 [i_3 - 2] [i_3 + 3]);
                var_43 = (13 + 3);
            }
            for (int i_16 = 0; i_16 < 21;i_16 += 1)
            {
                arr_56 [i_16] = ((6151 ? 1 : 1));
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 21;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 21;i_18 += 1)
                    {
                        {
                            arr_65 [i_0] [i_0] [i_0] [i_0] |= (arr_36 [i_3 - 1] [i_3]);
                            var_44 = var_3;
                            var_45 |= 6151;
                            arr_66 [i_0] [i_3] [i_16] [i_17] [i_18] = -95140299;
                        }
                    }
                }
                var_46 = (!var_11);
            }
        }
        var_47 -= (~var_13);
    }
    for (int i_19 = 0; i_19 < 1;i_19 += 1) /* same iter space */
    {
        var_48 = -1808732069;
        arr_69 [i_19] |= (1 ? 49587 : 0);
    }
    #pragma endscop
}
