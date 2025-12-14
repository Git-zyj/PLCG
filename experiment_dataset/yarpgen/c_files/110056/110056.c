/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110056
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        var_20 = (-(arr_1 [i_0 + 1]));
        var_21 ^= 0;
        var_22 = (arr_1 [i_0]);
        arr_3 [i_0 - 2] = (((var_5 != var_15) % (arr_0 [i_0 + 1])));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        arr_6 [i_1] = ((-(max((min(var_17, (arr_5 [i_1] [i_1]))), (arr_0 [i_1])))));
        var_23 &= (min(((((124 ? (-2147483647 - 1) : 0)) ^ var_7)), (arr_5 [i_1] [i_1])));
        var_24 += (((((((var_3 % (arr_1 [i_1])))) ? ((((arr_4 [i_1] [i_1]) < var_2))) : 0))) ? (max(var_17, (arr_1 [i_1]))) : var_4);
    }
    var_25 ^= ((var_2 ? ((var_3 ? var_14 : var_4)) : ((max(var_8, var_2)))));

    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        var_26 = (arr_8 [i_2]);
        var_27 -= (arr_1 [i_2 - 1]);
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_28 = (((arr_12 [1]) ? (((((var_1 ? var_9 : (arr_2 [i_3]))) > (max(var_2, (arr_11 [i_3] [6])))))) : (((arr_12 [i_3]) ? (var_10 || var_14) : (((arr_9 [i_3] [i_3]) | var_6))))));
        arr_15 [i_3] [i_3] = arr_11 [i_3] [i_3];
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        var_29 = ((!((((arr_1 [i_4]) ? (arr_0 [i_4]) : (arr_11 [i_4] [i_4]))))));
        arr_19 [i_4] = (((arr_0 [i_4]) ? var_8 : (~131071)));
        var_30 = (((var_0 ? (arr_9 [i_4] [i_4]) : (arr_18 [i_4]))));
        var_31 = ((var_6 >> (((arr_17 [i_4] [i_4]) - 2111728429))));
    }
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        var_32 *= (((((!(var_10 + var_5)))) >> (((var_8 && (arr_21 [i_5]))))));
        var_33 += (((((((min((arr_20 [i_5] [i_5]), (arr_20 [i_5] [i_5])))) ? (arr_20 [i_5] [i_5]) : (min(var_18, var_19))))) ? (((~var_16) & (arr_21 [i_5]))) : var_19));
    }

    for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
    {
        var_34 = (min(var_34, ((((((((var_11 + 2147483647) << (((((arr_10 [i_6] [i_6]) + 8830239310428332575)) - 25)))) <= 151)) ? -1 : (min(var_4, (arr_10 [i_6] [i_6]))))))));
        arr_26 [i_6] [i_6] = (arr_1 [i_6]);
        var_35 += ((!((var_11 >= (!var_4)))));
        arr_27 [i_6] = (((((((var_8 ? 3607414550 : var_12))) ? (((arr_9 [i_6] [i_6]) ? (arr_0 [i_6]) : (arr_22 [i_6]))) : (((var_3 ? (arr_9 [i_6] [i_6]) : var_2)))))) ? (((max(15571, (arr_20 [i_6] [i_6]))))) : (arr_23 [6]));
    }
    for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
    {
        var_36 ^= ((((min(((~(arr_10 [i_7] [i_7]))), (arr_30 [i_7] [i_7])))) ? (min(var_7, (min(var_2, (arr_10 [i_7] [i_7]))))) : (104 && 0)));
        var_37 = ((-var_17 - ((15 ? (var_3 || var_7) : var_17))));
        var_38 = (max(var_38, ((min((max((arr_20 [i_7] [i_7]), (arr_20 [i_7] [i_7]))), (arr_20 [i_7] [i_7]))))));
        var_39 = (min(984545396, var_14));
    }
    for (int i_8 = 0; i_8 < 22;i_8 += 1) /* same iter space */
    {
        var_40 = ((((min((var_8 & var_15), 32767))) ? (((((((arr_33 [i_8]) | var_15))) <= ((var_15 ? 262143 : (arr_23 [i_8])))))) : (((!(((0 ? (arr_10 [i_8] [i_8]) : var_5))))))));
        var_41 += (arr_32 [8]);
    }
    for (int i_9 = 0; i_9 < 22;i_9 += 1) /* same iter space */
    {
        var_42 = (arr_28 [i_9]);
        var_43 = (max(var_43, ((min(((-(arr_21 [i_9]))), ((((((arr_29 [i_9] [i_9]) ? (arr_28 [i_9]) : var_8)) < var_16))))))));
        arr_36 [i_9] [i_9] = ((-((~(arr_32 [i_9])))));
    }
    var_44 = (min(var_44, (-16 <= 1)));
    #pragma endscop
}
