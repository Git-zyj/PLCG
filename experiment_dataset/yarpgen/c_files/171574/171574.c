/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171574
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((~(var_8 != var_10))) + ((min(var_4, var_1)))));
    var_18 = var_12;

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
        {
            arr_7 [i_0] |= var_4;
            var_19 = (min((((((var_9 ? var_15 : 243))) ? ((min(var_12, (arr_0 [i_0])))) : (var_8 * var_3))), ((((max(var_16, var_15))) ? var_12 : (arr_5 [i_0 + 4] [i_0] [i_0 - 1])))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
        {
            arr_10 [i_0] = (arr_8 [i_0 - 1]);
            var_20 = (((arr_0 [i_0 + 2]) ? var_6 : var_6));
            var_21 = (arr_6 [i_0 + 1]);

            for (int i_3 = 1; i_3 < 16;i_3 += 1) /* same iter space */
            {
                var_22 *= (arr_1 [i_0]);
                var_23 *= (((arr_11 [i_0] [i_0] [i_3 - 1] [i_3 - 1]) < (arr_11 [i_3] [1] [i_3 - 1] [i_3])));
            }
            for (int i_4 = 1; i_4 < 16;i_4 += 1) /* same iter space */
            {
                var_24 = (var_12 ? var_8 : (arr_15 [i_4 + 1] [i_4 + 1]));
                arr_16 [i_0] [i_2] [i_2] [i_4] = (!162);
                var_25 = (min(var_25, ((((arr_11 [i_4] [i_4 - 1] [i_4 - 1] [i_4]) / var_3)))));
                var_26 = var_3;
                var_27 = ((((((arr_12 [i_0 - 1] [i_2] [i_4 + 1] [i_0 + 4]) ^ var_1))) ? (((arr_12 [i_0 + 1] [i_2] [i_4 + 1] [i_2]) ? (arr_5 [i_0] [i_2] [i_0]) : var_13)) : (arr_5 [i_4 - 1] [i_0 + 4] [i_0 - 1])));
            }
        }
        for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
        {
            var_28 += ((~((var_4 ? (arr_15 [i_0 + 1] [i_0 + 1]) : (arr_15 [i_0 + 2] [i_0 + 2])))));
            var_29 = ((-(((~var_4) ? ((((arr_0 [i_0]) << (var_11 - 7634311016176295454)))) : (((arr_14 [i_0] [i_5] [i_0 + 2] [16]) ? (arr_8 [i_0]) : (arr_2 [3] [3])))))));
            var_30 = ((var_2 ? (arr_15 [i_0 + 3] [i_0 + 2]) : ((((arr_14 [i_0 + 3] [i_5] [i_5] [i_5]) <= (max(var_6, 1136005489)))))));
            arr_19 [9] = (max(((((-9208390973942033268 ^ var_9) == (arr_17 [i_0 + 1] [i_0 + 3] [i_0 + 2])))), ((~(arr_3 [i_0 + 3])))));
            var_31 = var_5;
        }
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            var_32 = (((~var_13) ? (((-(arr_17 [i_0 + 1] [i_6] [i_0])))) : (max((arr_13 [i_0 + 4] [i_6]), (arr_17 [i_0 - 1] [i_6] [i_0 - 1])))));
            arr_22 [i_0] [i_6] = 0;
            var_33 += ((~((var_10 ? (arr_2 [i_0 + 3] [i_0 - 1]) : (arr_17 [i_0 + 2] [i_0 + 2] [i_0])))));
            var_34 = (max(var_34, (((!((max(var_12, (arr_1 [i_0 + 4])))))))));
        }
        var_35 = max((((arr_5 [i_0 + 2] [0] [i_0 + 3]) ? (arr_5 [i_0 + 2] [i_0 + 2] [i_0]) : (arr_5 [i_0 + 1] [i_0 + 1] [i_0 - 1]))), ((~(arr_5 [i_0 + 4] [i_0 + 3] [i_0 + 3]))));
    }
    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {

        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            var_36 = max(((min((arr_26 [i_7] [i_7] [i_7]), (var_16 >= var_14)))), (((((arr_24 [i_8]) >= var_3)) ? (((var_12 ? 9208390973942033268 : var_0))) : (max(var_10, var_6)))));
            var_37 = ((((var_16 ? (arr_23 [i_7] [2]) : (arr_26 [i_7] [i_8] [i_8]))) >= (((~(arr_24 [i_8]))))));
            var_38 = (arr_26 [i_8] [i_8] [i_8]);
        }
        for (int i_9 = 3; i_9 < 17;i_9 += 1)
        {
            var_39 = (max(var_39, (arr_28 [i_9])));
            var_40 -= ((max(255, (arr_25 [i_9 - 3] [i_9 - 3] [i_9 - 3]))));
        }
        var_41 = (var_8 ? (max((max(var_16, 1575436986)), (arr_28 [i_7]))) : ((((((-7464730949641424099 ? var_10 : 0))) ? ((~(arr_23 [i_7] [i_7]))) : (((min((arr_26 [i_7] [16] [14]), var_8))))))));
        var_42 = var_8;
    }
    for (int i_10 = 0; i_10 < 20;i_10 += 1)
    {
        var_43 = (!-1575436986);
        var_44 = (var_1 ? ((((max(var_7, var_2))) ? (arr_29 [i_10]) : (min(0, (arr_30 [8]))))) : (((arr_30 [i_10]) ? (arr_30 [i_10]) : (arr_30 [i_10]))));
    }
    var_45 = var_12;
    #pragma endscop
}
