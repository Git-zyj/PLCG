/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106845
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((var_8 ? var_14 : ((var_13 ? 0 : var_0))))) ? (max(4294967293, 4294967291)) : 13));

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_21 += 0;
        var_22 = (((-2147483647 - 1) + ((~((var_1 ? var_16 : 4294967272))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
        {
            var_23 += (((~var_12) % (arr_5 [i_0 - 2] [i_0 - 1])));
            var_24 = ((~(14580 / 4294967272)));
        }
        for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
        {
            var_25 = var_13;
            var_26 ^= ((((var_18 ? var_6 : (((~(arr_2 [4]))))))) ? (((var_7 | (arr_1 [i_0 + 1] [i_0])))) : ((19 ? 0 : 0)));

            /* vectorizable */
            for (int i_3 = 2; i_3 < 12;i_3 += 1)
            {
                var_27 = (((arr_8 [i_3 + 2] [i_0 - 1] [i_0 - 2]) ? var_17 : 659332087));
                var_28 = 13;
            }
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
        {
            arr_15 [i_0] [8] [i_0] = (var_1 == var_10);
            var_29 = (((((var_5 ? 4294967293 : (arr_7 [i_0] [i_0])))) ? (arr_7 [i_0 - 1] [i_0]) : 4294967291));
            arr_16 [i_0 - 2] [i_0] = (-127 - 1);
            arr_17 [i_0] [i_4] [i_0] = var_17;
        }
        for (int i_5 = 2; i_5 < 11;i_5 += 1)
        {

            for (int i_6 = 2; i_6 < 12;i_6 += 1)
            {
                arr_22 [i_0] [i_0] = ((!(arr_18 [8])));
                var_30 = 5;
            }
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                var_31 = (min(var_31, ((-(((!(arr_8 [i_0] [i_5] [i_7]))))))));
                arr_26 [i_0] [12] [i_7] = (max((23 % 27187), ((max((arr_23 [i_0]), var_3)))));
                var_32 = 153;
                var_33 = (max(var_33, -1146915906));

                for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
                {
                    arr_30 [3] [i_0] [i_5 + 4] [i_7] [i_0] = ((var_7 & (((-(arr_2 [i_0]))))));
                    var_34 *= (((((arr_1 [i_5 + 4] [i_0 + 1]) ? (arr_25 [i_0]) : (!var_2)))) || var_1);
                    var_35 = (min(var_35, ((((((var_13 ? var_18 : (arr_23 [0])))) ? ((max(var_15, (arr_14 [i_7])))) : (max(var_4, 4294967284)))))));
                    var_36 = var_10;
                    var_37 = (((((((601699039 & (arr_11 [i_8] [i_0] [i_5]))) / 1))) ? (((4294967293 ? 0 : var_13))) : 10));
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 15;i_9 += 1) /* same iter space */
                {

                    for (int i_10 = 1; i_10 < 13;i_10 += 1) /* same iter space */
                    {
                        var_38 = ((0 || (arr_2 [i_0])));
                        var_39 += (63725 | 0);
                        var_40 = (((((-56 + (arr_20 [i_0] [i_5] [i_7])))) < var_13));
                        var_41 ^= (((arr_2 [0]) / (((arr_13 [i_0]) ? 23 : (arr_25 [i_0])))));
                        var_42 = ((((var_6 ? 4294967293 : var_4))) ? (var_4 % 207) : var_14);
                    }
                    for (int i_11 = 1; i_11 < 13;i_11 += 1) /* same iter space */
                    {
                        var_43 = ((var_13 ? (arr_27 [i_11 + 2] [i_0] [i_0] [i_0 - 2]) : (((1645474575 ? var_4 : (arr_8 [i_11] [i_11] [i_11 + 2]))))));
                        arr_38 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 + 1] [7] [i_0] = 3;
                    }
                    for (int i_12 = 1; i_12 < 13;i_12 += 1) /* same iter space */
                    {
                        arr_42 [i_0] [10] [9] [i_7] [i_9] [i_0] = (((arr_39 [i_5] [i_0] [i_5] [i_5] [i_5 + 2]) == (((arr_18 [14]) ? var_16 : 53995))));
                        arr_43 [i_0 - 2] [14] [i_7] [0] [i_12] &= 207;
                    }
                    var_44 = (~var_7);
                }
                /* vectorizable */
                for (int i_13 = 0; i_13 < 15;i_13 += 1) /* same iter space */
                {
                    var_45 += -var_17;
                    var_46 = ((-(arr_31 [i_7] [i_13])));
                    var_47 = (((!(arr_2 [i_0]))));
                }
            }
            var_48 = (((arr_9 [i_0 - 2] [i_0 - 2]) == ((max((arr_36 [i_0 - 1] [i_0 - 2] [i_5 + 4]), (arr_36 [i_0 - 2] [i_0 - 1] [i_5 + 2]))))));
            var_49 = (arr_20 [i_5] [i_5] [i_5 + 1]);
            arr_46 [i_0] [i_0] = 19;
        }
    }
    var_50 = 237;
    var_51 = (max(((-var_2 ? var_0 : var_17)), ((((max(207, -16))) ? ((var_17 ? 1299033907439826694 : var_11)) : (((14 ? 16268 : var_18)))))));
    var_52 = var_18;
    #pragma endscop
}
