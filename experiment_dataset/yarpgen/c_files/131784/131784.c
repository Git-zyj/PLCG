/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131784
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(34350, (min(((var_17 ? 2827194090694293706 : var_17)), var_17))));
    var_20 = var_3;
    var_21 -= var_12;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_22 = var_9;

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_23 = (min(var_23, (((((-(arr_4 [i_0]))))))));
            var_24 = ((~((-(arr_3 [17] [i_1] [i_1])))));
            var_25 = 105345666;
            arr_5 [11] [i_1] [11] = (max((arr_2 [3]), ((-(arr_4 [i_0])))));
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
        {
            var_26 = (min((max((arr_0 [i_0]), var_15)), (min((((~(arr_3 [i_0] [i_0] [i_0])))), (arr_0 [i_0])))));
            arr_8 [i_0] = (min(((~(arr_1 [i_0]))), (((~(arr_7 [i_0] [i_2]))))));

            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                var_27 = (min((max(1, 2147483647)), ((((min((arr_1 [i_0]), (arr_10 [i_0] [i_0] [i_0] [i_0])))) ? (var_14 > var_15) : var_4))));
                var_28 = ((max(((var_18 ? 589375606 : var_6)), (arr_4 [i_0]))) | (((((((arr_9 [i_3] [i_3] [i_0]) ? var_4 : 18446744073709551615)) >= (((((arr_2 [i_0]) > (arr_11 [i_3]))))))))));
            }
        }
        for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
        {

            for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
            {
                var_29 = (max(var_29, (((((arr_11 [i_4]) + (arr_11 [i_4])))))));
                var_30 = (((max((arr_1 [3]), (max(var_1, (arr_17 [i_5] [i_5] [i_5] [i_5]))))) == (((max(var_15, (arr_13 [i_0] [i_0])))))));
            }
            for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
            {
                arr_21 [i_0] [7] [i_6] [i_6] = (((arr_16 [i_0] [i_4] [i_0]) >= (min((arr_20 [16] [i_0] [16] [i_6]), ((max(var_11, 1527047152)))))));
                arr_22 [i_0] = (((+(((arr_9 [i_4] [18] [6]) % 4294967284)))));
            }

            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                var_31 = ((var_4 ? (((~(arr_7 [i_4] [i_7])))) : (min((((arr_11 [i_7]) ? (arr_23 [i_0]) : var_14)), (((var_5 ? var_15 : var_8)))))));
                var_32 = (~(min((arr_10 [i_0] [20] [i_7] [i_0]), var_7)));
                var_33 = (((arr_15 [i_0] [i_4] [i_7]) ? -224345951 : (((((arr_19 [i_0] [i_4] [2]) - (arr_15 [i_0] [i_4] [i_7])))))));
            }
            for (int i_8 = 0; i_8 < 24;i_8 += 1)
            {
                arr_31 [11] [i_4] = ((~(arr_23 [3])));
                arr_32 [i_0] = (max(589375606, -1099601446));
                var_34 = var_0;
                var_35 = (arr_23 [i_4]);
            }
        }
    }
    for (int i_9 = 1; i_9 < 12;i_9 += 1)
    {
        var_36 = (arr_24 [i_9 - 1] [i_9 - 1]);
        var_37 = (min((arr_24 [i_9 + 4] [i_9 + 3]), (arr_24 [i_9 - 1] [i_9 + 1])));
        var_38 = (max(var_38, 8967587780948117543));
        var_39 = ((((arr_2 [i_9]) ? (min(5507410796211197375, 12308329501092048037)) : (min((arr_35 [i_9]), (arr_36 [i_9]))))));
    }
    var_40 = (~1152921504606846975);
    #pragma endscop
}
