/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168537
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, (((138 ? var_10 : var_12)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [1] [i_3] [1] [i_3] [i_0] [i_4] = ((+(max((arr_11 [i_3] [i_4 + 1] [i_4 + 1] [i_3] [i_4 + 1]), (arr_9 [i_1] [i_4 + 1] [i_4 + 1] [i_4] [i_4 + 1])))));
                                var_17 = (min(var_17, (((+((((106 ? (arr_2 [i_0]) : (arr_3 [i_0]))) << ((((1 ? (arr_2 [i_0]) : var_11)) - 1625205565)))))))));
                            }
                        }
                    }
                    arr_14 [i_0] [i_1] [i_2] = ((((max((arr_7 [i_0] [i_1] [i_2]), 440599287))) ? ((~(arr_11 [i_2] [i_1] [i_0] [i_0] [i_0]))) : (-2147483647 - 1)));

                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            arr_20 [i_0] [i_0] [i_2] = (arr_6 [i_0] [i_0] [i_2] [i_6]);
                            var_18 += (((arr_15 [i_6] [i_5] [i_2] [i_2] [i_1] [i_0]) ? 2147483640 : 3854368009));
                            arr_21 [i_6] [i_6] [i_5] [i_0] [i_1] [i_0] [i_0] = 127;
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            arr_26 [i_0] [i_1] [i_2] [i_5] [i_7] = (+((((arr_0 [i_1]) != 2147483647))));
                            arr_27 [i_0] [i_0] [7] [i_1] [i_2] [i_5] [i_7] = ((-(arr_16 [i_0] [i_1] [3] [i_5] [i_7])));
                            arr_28 [i_7] [i_0] [i_2] [i_1] [i_0] [i_7] [i_7] = min((arr_3 [i_0]), ((max(3854368009, 4184704826))));
                        }
                        var_19 = (arr_2 [i_0]);
                        arr_29 [i_1] = (arr_15 [i_0] [i_0] [i_2] [i_5] [i_5] [i_0]);
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        arr_33 [i_0] [i_1] [i_2] [i_8] [i_2] = 105;
                        var_20 |= (-2147483647 - 1);

                        for (int i_9 = 3; i_9 < 7;i_9 += 1)
                        {
                            arr_37 [i_9] = (arr_11 [i_9 + 2] [6] [i_2] [i_1] [i_0]);
                            arr_38 [5] [i_1] [i_1] [i_2] [i_8] [i_9] = (arr_36 [9] [9] [i_2] [i_8] [i_9 + 3]);
                        }
                        for (int i_10 = 0; i_10 < 10;i_10 += 1)
                        {
                            arr_43 [i_0] [i_0] [i_1] [i_0] [i_8] [i_10] = (arr_3 [i_8]);
                            arr_44 [i_0] [i_1] [i_0] [i_8] [i_10] = 440599288;
                            arr_45 [i_0] [i_0] [i_2] [i_8] [6] &= var_11;
                        }
                        for (int i_11 = 0; i_11 < 10;i_11 += 1)
                        {
                            arr_50 [i_2] [i_8] [2] = (((arr_23 [i_11] [i_8] [i_2] [i_2] [i_2] [i_1] [2]) ? 3854367999 : var_1));
                            arr_51 [9] [i_1] [i_2] [i_8] [i_11] [1] = (arr_22 [i_0] [1] [i_2] [i_8] [i_11] [4]);
                            var_21 &= (arr_9 [i_11] [5] [i_2] [i_1] [i_0]);
                        }
                        for (int i_12 = 0; i_12 < 10;i_12 += 1)
                        {
                            arr_55 [i_0] [7] [7] [i_8] [i_8] [i_2] [i_1] = (arr_18 [6] [i_1] [i_2] [i_8] [i_1]);
                            var_22 = (max(var_22, var_10));
                            arr_56 [i_0] [i_0] [i_0] [i_0] [1] = -2229922358874950721;
                        }
                        var_23 = -13186;
                    }
                    /* vectorizable */
                    for (int i_13 = 2; i_13 < 9;i_13 += 1)
                    {
                        var_24 -= ((!(arr_52 [i_13 - 2] [i_13] [i_13 - 2] [i_13] [i_13 - 2])));
                        var_25 = (min(var_25, ((((((35673 ? 17 : 3496426857))) ? (arr_42 [i_0] [i_13 + 1] [i_0] [i_13 - 1] [i_13]) : (arr_31 [i_13 - 1]))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
