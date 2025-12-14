/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188512
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((((6168447866925011401 ? -361421094932773076 : 0))) ? var_15 : ((235 ? 255 : 56))))) ? var_6 : ((var_15 ? (!var_4) : var_11)));
    var_18 = (max(var_18, ((((((((var_2 ? var_2 : var_7))) ? var_16 : (max(var_1, var_8))))) ? var_4 : ((((var_7 / var_16) ? ((var_9 ? var_15 : var_10)) : ((-62 ? var_7 : -64)))))))));

    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        var_19 |= ((((arr_2 [i_0 + 3]) ? ((var_0 ? var_6 : (arr_0 [i_0]))) : (((max((arr_1 [i_0]), (arr_0 [i_0 - 3]))))))));
        var_20 = (((arr_0 [i_0 - 1]) ? ((var_4 ? var_11 : (arr_0 [i_0 + 3]))) : ((((arr_0 [i_0 - 4]) ? (arr_0 [i_0 + 2]) : (arr_0 [i_0 + 1]))))));
    }
    for (int i_1 = 1; i_1 < 14;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
        {
            var_21 = (max(((((arr_7 [i_1 - 1] [i_2]) ? (arr_8 [i_2]) : (arr_8 [i_1])))), (max((((arr_7 [i_1 + 2] [i_2]) ? var_16 : (arr_7 [i_1 + 1] [i_2]))), (((var_14 ? var_10 : var_0)))))));

            for (int i_3 = 1; i_3 < 13;i_3 += 1)
            {
                var_22 = max((max((arr_9 [i_1] [i_1 - 1] [i_1 - 1] [i_3 - 1]), (arr_9 [i_1] [i_1 + 2] [i_1 + 1] [i_3 + 1]))), ((~(arr_9 [i_1] [i_1] [i_1] [i_3]))));
                var_23 = (max(var_23, ((((~var_9) ? (max(var_11, (arr_3 [i_1 + 1]))) : 0)))));
                var_24 = (((((235 ? 196042750 : 0))) ? (((~(((!(arr_6 [i_1 - 1] [i_1 - 1]))))))) : (((arr_4 [i_1 - 1]) ? (arr_4 [i_1 - 1]) : (arr_3 [i_1 + 1])))));
                var_25 = ((+(((arr_8 [i_1 + 2]) ? (arr_10 [i_1] [i_1] [i_1 + 2] [i_1 + 2]) : (arr_10 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1])))));
                var_26 -= ((((((-62 == 1) ? (max(var_1, (arr_7 [i_1 - 1] [i_2]))) : (((var_8 ? var_9 : var_3)))))) ? ((((arr_5 [i_3]) ? (arr_11 [i_1] [i_1] [i_3 + 3]) : (arr_11 [i_1] [i_1] [i_1 + 2])))) : (arr_4 [i_1 - 1])));
            }
        }
        for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
        {
            var_27 = var_4;
            arr_16 [i_1 + 1] [i_4] [i_4] = (((!(arr_12 [i_1 + 1]))));
            var_28 = ((max((max(var_6, (arr_7 [i_1] [i_1 + 2]))), ((var_5 ? (arr_11 [i_1 + 2] [i_1 - 1] [i_4]) : (arr_7 [i_1] [i_4]))))));

            for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
            {
                var_29 *= (((((+(((arr_7 [i_4] [i_5]) ? (arr_7 [i_4] [i_5]) : (arr_13 [i_5])))))) ? ((657258247 ? (((max(1, 1)))) : (max(752004951882707921, 176)))) : (~var_0)));
                var_30 = (max(((var_3 ? (((var_13 ? (arr_8 [i_5]) : (arr_18 [i_1] [i_1] [i_5])))) : (arr_3 [i_1 + 1]))), -var_13));
                var_31 = var_5;
            }
            /* vectorizable */
            for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
            {
                var_32 = (arr_7 [i_1 - 1] [i_1 + 2]);
                arr_22 [i_1] [i_1] [i_1] = ((~(arr_21 [i_1] [i_1] [i_1 + 2])));

                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    var_33 = (((arr_23 [i_1 + 2] [i_7] [i_6] [i_6]) ? (arr_23 [i_1] [i_7] [i_1] [i_7]) : (arr_7 [i_1 - 1] [i_7])));
                    var_34 = (min(var_34, ((((arr_15 [i_1 + 2] [i_1] [i_1 + 2]) ? (arr_15 [i_1 + 2] [i_1] [i_1 + 2]) : var_12)))));
                    arr_27 [i_1 + 1] [i_7] = ((var_12 / (arr_4 [i_1 - 1])));
                    arr_28 [i_1] [i_7] [i_1] = ((-(arr_21 [i_6] [i_1 - 1] [i_1 - 1])));
                }
                for (int i_8 = 1; i_8 < 15;i_8 += 1)
                {
                    arr_31 [i_1 - 1] [i_1 - 1] = ((var_15 ? (((arr_29 [i_4] [i_1] [i_6] [i_6] [i_4]) ? (arr_10 [i_1] [i_1] [i_6] [i_1]) : (arr_4 [i_6]))) : (~var_7)));
                    var_35 -= arr_17 [i_1] [i_1 + 2];
                }
                for (int i_9 = 0; i_9 < 16;i_9 += 1)
                {
                    var_36 = ((-(arr_21 [i_1 + 1] [i_1 + 1] [i_4])));
                    arr_34 [i_9] = ((var_0 ? (arr_4 [i_1 - 1]) : (arr_4 [i_1 + 1])));
                }
                for (int i_10 = 3; i_10 < 15;i_10 += 1)
                {
                    arr_37 [i_1 + 2] [i_4] [i_6] [i_6] = (((((~(arr_11 [i_4] [i_4] [i_4])))) ? (((arr_19 [i_10] [i_1] [i_1]) ? (arr_19 [i_1 + 2] [i_6] [i_10 - 2]) : var_0)) : (arr_20 [i_1 + 1] [i_4])));
                    var_37 = (((arr_19 [i_1 + 2] [i_10 - 1] [i_1 + 2]) - var_2));
                    var_38 = (((arr_17 [i_6] [i_10 - 3]) ? (arr_9 [i_1] [i_4] [i_6] [i_6]) : (arr_9 [i_1 + 2] [i_1 + 2] [i_6] [i_10 - 2])));
                }
            }
            for (int i_11 = 0; i_11 < 16;i_11 += 1) /* same iter space */
            {
                var_39 += max((((~(arr_9 [i_1 + 1] [i_4] [i_11] [i_11])))), (max(5526710609406008376, 22539)));
                var_40 = ((((~(max((arr_35 [i_1] [i_4] [i_4]), (arr_9 [i_1] [i_4] [i_1] [i_4]))))) == (arr_36 [i_1])));
            }
        }
        arr_40 [i_1] [i_1 - 1] = ((max(((var_0 ? (arr_6 [i_1 + 2] [i_1 + 2]) : var_5)), ((((arr_18 [i_1] [i_1] [i_1 + 2]) ? (arr_26 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1] [1]) : (arr_23 [i_1] [2] [i_1] [i_1])))))));
    }
    #pragma endscop
}
