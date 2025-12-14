/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17032
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_7 [i_0] [i_1] [i_2] [i_2] [i_3] [i_4]);
                                var_13 = (((max((((arr_1 [i_0] [i_2]) / var_1)), var_5))) ? (arr_5 [i_2] [i_1]) : (min(((var_5 ? var_10 : var_10)), (((var_7 >= (arr_5 [i_3] [i_4])))))));
                                arr_13 [15] [i_1] [3] [i_0] [i_1] = (arr_2 [i_0] [i_0] [21]);
                            }
                        }
                    }
                    var_14 = (min(var_14, (((arr_1 [i_0] [17]) ? ((((262143 ? var_3 : 4294967295)) % var_11)) : (((((min((arr_9 [i_0] [i_2] [i_1] [i_1] [4]), (arr_1 [i_0] [i_2]))) == ((8 ? (arr_2 [i_0] [i_0] [15]) : -1))))))))));
                }
            }
        }
        arr_14 [i_0] [1] = var_9;
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {

        for (int i_6 = 2; i_6 < 11;i_6 += 1)
        {
            arr_19 [i_5] [i_6] [i_6] = 1934;

            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                arr_22 [i_5] [i_6 - 1] [i_6] [i_5] &= ((var_2 == (arr_9 [i_5] [i_6] [i_7] [i_6] [i_6])));

                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    arr_26 [i_8] [i_7] [i_6] = var_9;
                    arr_27 [i_5] [i_6] [i_7] [i_8] = var_7;
                }
                for (int i_9 = 0; i_9 < 13;i_9 += 1)
                {
                    var_15 = var_4;
                    var_16 *= var_4;
                    arr_32 [i_5] [i_7] [i_9] = ((var_4 >= (arr_30 [3] [i_6])));
                    arr_33 [i_5] [i_6] [i_7] [i_9] = (!(arr_28 [i_6] [i_6 + 1] [i_6] [i_6 + 1] [i_6 - 1] [i_6 + 1]));
                }
            }
            for (int i_10 = 0; i_10 < 13;i_10 += 1)
            {
                arr_36 [i_5] [i_5] [i_5] [i_5] = -var_0;
                arr_37 [5] [i_5] [i_5] = -9;
                var_17 = (max(var_17, (arr_18 [i_6 + 1] [i_6 - 1])));
                var_18 = (max(var_18, var_5));
            }
            var_19 *= ((-(var_11 || var_9)));
            arr_38 [6] = ((~(arr_4 [i_6 - 2] [i_6 - 2])));
            var_20 &= ((+(((arr_31 [i_5] [i_6] [i_6]) ? (arr_30 [i_5] [i_5]) : var_5))));
        }

        for (int i_11 = 0; i_11 < 13;i_11 += 1)
        {
            arr_43 [i_5] [2] [i_11] |= (arr_24 [i_5] [i_11]);
            var_21 = ((var_1 ? (arr_1 [i_5] [i_11]) : var_11));
            var_22 &= ((var_9 & (arr_7 [i_11] [i_11] [i_11] [i_11] [i_5] [i_5])));
        }
    }
    for (int i_12 = 0; i_12 < 25;i_12 += 1)
    {

        for (int i_13 = 0; i_13 < 25;i_13 += 1)
        {
            arr_49 [i_12] [i_12] [i_13] = ((((((((var_8 * (arr_46 [i_12] [i_13] [i_13])))) ? (~var_12) : (min(var_11, var_1))))) ? (arr_45 [i_13] [i_13]) : (arr_46 [i_12] [i_12] [i_12])));
            var_23 -= ((~((((arr_44 [i_12]) >= ((var_3 ? (arr_48 [i_12] [i_12]) : (arr_46 [i_12] [i_13] [i_13]))))))));
            var_24 ^= ((~(min((arr_45 [i_12] [i_13]), (min(1, var_9))))));
            /* LoopNest 3 */
            for (int i_14 = 0; i_14 < 25;i_14 += 1)
            {
                for (int i_15 = 4; i_15 < 24;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 1;i_16 += 1)
                    {
                        {
                            var_25 = -262144;
                            var_26 = var_12;
                            arr_58 [i_12] [i_13] [i_12] [i_15 + 1] [i_13] [i_16] [i_16] = (max((max(((1 ? 1 : 65513)), -1)), -67741581));
                            arr_59 [i_12] [i_12] [i_14] [i_14] [i_16] = (min((max((arr_53 [i_15 - 3] [i_15 - 2] [i_15 - 2] [i_15 - 2] [i_15 - 1] [i_15 + 1]), (arr_44 [i_15 + 1]))), (!var_10)));
                            arr_60 [i_12] = ((+(((~var_11) ? (arr_51 [i_15 - 3] [i_15 + 1] [i_15 - 3] [i_15 - 2]) : (arr_54 [i_16] [i_15] [i_14] [i_13] [i_12] [i_12] [i_12])))));
                        }
                    }
                }
            }
        }
        for (int i_17 = 0; i_17 < 1;i_17 += 1)
        {
            arr_63 [i_12] [i_12] [i_17] = (arr_61 [18] [18] [i_17]);
            var_27 = (!((!(((arr_51 [i_12] [i_12] [i_12] [i_17]) && (arr_46 [i_12] [1] [7]))))));
            var_28 = (max(var_28, var_12));
            var_29 = (min(var_29, (((min((var_5 || var_4), (((arr_53 [i_12] [i_12] [i_12] [i_12] [i_17] [i_17]) ? (arr_54 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] [i_12]) : (arr_56 [i_12] [i_12] [i_12] [i_12])))))))));
        }
        var_30 = (min(var_30, (arr_44 [i_12])));
    }
    var_31 = (((var_0 ? var_8 : (max(var_4, var_12)))));
    /* LoopNest 2 */
    for (int i_18 = 0; i_18 < 18;i_18 += 1)
    {
        for (int i_19 = 1; i_19 < 14;i_19 += 1)
        {
            {
                arr_70 [i_18] [i_19] = (min((min(-3, var_1)), (((!(arr_52 [i_19 + 2] [i_19 - 1] [i_19 + 4] [i_19 - 1] [i_19] [i_19]))))));
                arr_71 [i_19] = (~var_0);
                arr_72 [i_19] [i_19] = ((-((5862575771283562269 & (min(-67741604, -5862575771283562269))))));

                for (int i_20 = 0; i_20 < 18;i_20 += 1)
                {
                    var_32 = ((((max(((min((arr_52 [21] [i_19] [i_18] [i_19] [i_20] [i_20]), (arr_73 [i_19] [i_19] [i_19])))), var_4))) ? var_4 : (!56)));
                    var_33 = (((((!(arr_0 [i_19] [i_19]))) || var_12)));
                }
                arr_76 [i_18] [i_19] [i_19] = (((((var_8 ^ ((var_10 / (arr_61 [i_18] [i_18] [i_18])))))) ? (max(((var_11 ^ (arr_44 [i_18]))), (max((arr_73 [i_19] [i_19] [i_19]), (arr_0 [i_18] [i_19]))))) : ((((-(arr_48 [i_18] [i_19])))))));
            }
        }
    }
    var_34 = (min(var_34, (((~var_2) * ((((!(((var_5 ? var_5 : var_1)))))))))));
    #pragma endscop
}
