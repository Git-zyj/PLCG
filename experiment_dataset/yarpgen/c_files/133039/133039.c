/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_20 *= ((!(max((var_1 && var_2), (17563 || 65535)))));
            var_21 = (max(((max((arr_1 [i_0]), (arr_3 [i_0] [19])))), (min((arr_2 [i_0] [i_0] [i_0]), (arr_2 [i_0] [i_0] [15])))));
            var_22 = (arr_0 [i_0] [i_1]);
        }
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            arr_6 [i_2] [i_0] [i_0] = (arr_5 [i_2]);

            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                var_23 ^= ((-var_16 ? var_16 : ((var_4 ? ((((arr_9 [i_0] [i_0] [14]) <= (arr_1 [i_0])))) : -25620))));

                for (int i_4 = 4; i_4 < 24;i_4 += 1)
                {
                    arr_13 [i_0] [i_0] &= var_4;
                    arr_14 [i_0] [i_0] [i_0] [i_0] [i_4] = var_14;
                }
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
                    {
                        arr_22 [i_0] [21] [i_3] [24] [i_0] = var_12;
                        arr_23 [i_2] [i_2] [i_2] [i_2] = (var_5 != -25620);
                        var_24 = (arr_2 [i_2] [6] [i_5]);
                        var_25 = (min(var_25, ((((((-(arr_11 [i_0] [i_2] [i_3])))) ? ((-(arr_11 [i_3] [i_5] [i_6]))) : (arr_11 [i_0] [i_0] [10]))))));
                    }
                    for (int i_7 = 0; i_7 < 25;i_7 += 1) /* same iter space */
                    {
                        arr_27 [i_0] [i_2] = ((!((((arr_5 [i_0]) - (arr_5 [i_0]))))));
                        var_26 = -17568;
                    }
                    var_27 = ((-(arr_12 [i_0] [i_0] [i_0] [i_2] [i_3] [6])));
                }
                arr_28 [i_0] = var_2;
            }
        }
        var_28 = ((((min(713357757, ((976057019 ? 3318910292 : 3318910306))))) ? 6168 : (((31 <= 75) << (-25620 - 4294941664)))));
        arr_29 [8] = (((-25626 - -9) && (((-(~var_2))))));
        var_29 ^= ((~((32764 ? -122 : (arr_12 [i_0] [12] [i_0] [i_0] [i_0] [22])))));
    }
    for (int i_8 = 0; i_8 < 24;i_8 += 1)
    {
        var_30 ^= ((((~(arr_20 [i_8] [i_8] [i_8] [i_8] [4] [24] [i_8])))) ? ((((max(var_16, (arr_18 [i_8] [i_8] [i_8] [i_8]))) & -10913))) : (max(((max(-94, 2871315869))), var_7)));

        for (int i_9 = 0; i_9 < 24;i_9 += 1)
        {
            arr_35 [i_8] = ((-(min(var_13, var_16))));

            for (int i_10 = 0; i_10 < 24;i_10 += 1)
            {
                var_31 = ((max(var_12, -var_18)));
                arr_38 [i_8] [i_10] [i_9] [i_10] = (arr_8 [i_8] [i_9] [i_10]);
                var_32 = (min(var_32, (((var_13 ? (((arr_36 [i_8] [i_9] [i_9]) * (arr_36 [i_8] [i_9] [i_10]))) : 26531)))));
            }
        }
        for (int i_11 = 0; i_11 < 24;i_11 += 1)
        {
            var_33 = var_1;

            for (int i_12 = 0; i_12 < 24;i_12 += 1)
            {
                var_34 *= ((((((arr_42 [i_8] [23] [i_12]) ? ((var_16 ? (arr_4 [i_12] [i_8] [i_8]) : -17549)) : (min(32767, 32767))))) ? ((0 ? (arr_34 [i_8]) : (arr_30 [22]))) : (((((var_5 ? var_15 : (arr_30 [i_8]))))))));
                var_35 = ((-(arr_7 [i_8] [i_11] [i_8] [i_8])));
                arr_43 [2] [i_8] [i_11] [i_12] = ((var_9 <= (((arr_39 [i_8]) ? (min(25621, var_4)) : ((-(arr_37 [i_8] [i_8] [i_12] [i_12])))))));
                arr_44 [15] [i_11] [i_11] = ((~(~954673889)));
                var_36 = (--1489808515);
            }
            var_37 = ((-(~-32760)));
        }
    }
    var_38 = var_1;
    var_39 = var_15;
    #pragma endscop
}
