/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126427
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_16 = (((((arr_7 [i_0]) ? (arr_7 [i_2]) : (arr_1 [i_0] [i_0]))) ^ (min((arr_7 [0]), (arr_1 [i_1] [i_2])))));
                    arr_8 [i_1] [i_0] [i_1] [i_2] = (max((min(-7488663011846511388, 21982)), (arr_3 [i_1])));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        arr_11 [3] [i_3] [i_0] [i_3] [i_0] = (((arr_2 [i_0]) / (arr_9 [i_0] [i_2] [i_3])));
                        var_17 = (arr_10 [i_3] [i_0] [i_1] [i_0]);
                    }
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        var_18 = (((((var_5 ? 1424564669 : (((arr_4 [i_0] [12] [i_4]) << 8))))) ? (max((arr_1 [i_2] [i_4]), (arr_2 [i_2]))) : 2025124013));
                        var_19 = (arr_0 [i_4]);
                    }
                    arr_14 [i_2] = var_14;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 16;i_6 += 1)
        {
            {
                arr_19 [i_6] [i_6] = var_6;
                var_20 = var_6;
            }
        }
    }
    var_21 = var_2;

    /* vectorizable */
    for (int i_7 = 0; i_7 < 21;i_7 += 1)
    {
        arr_23 [i_7] = ((arr_20 [i_7]) ? (arr_20 [i_7]) : (arr_20 [i_7]));
        var_22 = ((~(arr_22 [i_7] [i_7])));
        var_23 = (((((var_1 ? -1424564669 : (arr_22 [i_7] [i_7])))) ? (arr_20 [i_7]) : (arr_20 [i_7])));
        var_24 = var_5;
        var_25 += (arr_21 [i_7]);
    }
    /* vectorizable */
    for (int i_8 = 2; i_8 < 14;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 18;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 16;i_10 += 1)
            {
                {
                    var_26 = 35620;
                    arr_30 [i_9] [i_9] [i_9] = 3749;
                }
            }
        }

        for (int i_11 = 0; i_11 < 18;i_11 += 1) /* same iter space */
        {
            var_27 &= ((!(arr_32 [i_8 - 1] [i_8 - 1] [0])));
            var_28 = 2618762458843074896;
        }
        for (int i_12 = 0; i_12 < 18;i_12 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 18;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    {
                        var_29 = (min(var_29, (((5458424565545716653 ? 288381501 : (arr_15 [i_8 + 4] [i_8 + 4]))))));
                        arr_43 [i_14] [i_14] [i_14] [17] [i_14] [i_14] = -288381502;
                        var_30 = (((((arr_37 [i_14] [i_14] [i_13] [i_12]) >> (((arr_34 [i_8] [i_8] [i_13]) - 4791445206074757118)))) << (var_1 - 1340353222972002078)));

                        for (int i_15 = 0; i_15 < 18;i_15 += 1)
                        {
                            var_31 |= ((!(arr_38 [i_8] [i_8] [i_8])));
                            var_32 = (min(var_32, 5458424565545716653));
                        }
                        for (int i_16 = 0; i_16 < 18;i_16 += 1)
                        {
                            var_33 = -5458424565545716679;
                            var_34 = ((-5458424565545716679 ? 1 : ((-3770 ? 1984567943 : (arr_39 [i_13] [i_13] [i_13] [i_14])))));
                            var_35 &= ((-(arr_34 [i_8 - 2] [i_14] [i_8 - 2])));
                            var_36 = 5458424565545716704;
                        }
                        arr_50 [i_14] [1] [1] [i_14] [i_8] [i_14] = (arr_24 [i_8 + 2]);
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_17 = 0; i_17 < 18;i_17 += 1)
            {
                for (int i_18 = 0; i_18 < 1;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 18;i_19 += 1)
                    {
                        {
                            var_37 = var_5;
                            var_38 -= -10949;
                            arr_57 [i_8] = (((arr_34 [i_8 + 4] [i_8 - 1] [13]) >> (((arr_34 [i_8 - 2] [i_8 + 2] [i_18]) - 4791445206074757113))));
                            var_39 = ((arr_46 [i_8] [i_8] [i_8] [i_8 + 4] [i_8 + 2] [i_8 + 2]) / (arr_24 [i_8 + 3]));
                        }
                    }
                }
            }
            var_40 = (((arr_54 [i_12]) / var_10));
            var_41 += (arr_40 [i_12]);
            var_42 = var_13;
        }
        for (int i_20 = 0; i_20 < 18;i_20 += 1) /* same iter space */
        {

            for (int i_21 = 0; i_21 < 18;i_21 += 1)
            {
                var_43 = ((-5458424565545716679 ? 3770 : -288381513));
                var_44 = -759600838;
                var_45 = ((10927 ? 5458424565545716679 : -700182131));
            }
            var_46 = ((!(arr_31 [i_8])));
            arr_62 [i_20] [i_8] = (((arr_22 [i_8] [i_8]) ? var_8 : (arr_37 [i_8] [i_8] [i_8] [i_8])));
            arr_63 [1] [1] = var_8;
        }
        for (int i_22 = 0; i_22 < 18;i_22 += 1)
        {

            for (int i_23 = 0; i_23 < 18;i_23 += 1)
            {
                var_47 = (min(var_47, (((!(arr_56 [i_8] [i_8] [i_8] [i_8] [i_8]))))));
                var_48 = (arr_33 [i_8] [i_8] [i_8]);

                for (int i_24 = 0; i_24 < 18;i_24 += 1)
                {
                    var_49 = ((((arr_53 [i_8] [i_8] [i_8] [i_8] [i_8]) ? var_8 : (arr_16 [i_8]))));
                    arr_72 [i_8] [i_23] [i_23] [i_8] [i_8] [i_24] &= (((((var_10 ? (arr_20 [i_22]) : (arr_28 [i_8] [i_22] [i_22] [i_24])))) ? (arr_27 [i_8] [i_8]) : (arr_31 [i_8])));
                }
                for (int i_25 = 0; i_25 < 18;i_25 += 1)
                {
                    var_50 = (27 || 3730);
                    arr_76 [i_22] [i_22] = ((!(5458424565545716655 || 67108863)));
                }
            }
            var_51 ^= (((5458424565545716653 <= 3073969091) ? (arr_48 [i_8 - 1] [i_8 + 2] [i_8 - 2] [i_8 - 1]) : (arr_18 [i_8 - 1])));
        }
    }
    var_52 = (min(var_52, var_1));
    #pragma endscop
}
