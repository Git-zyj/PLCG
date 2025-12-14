/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176724
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] = (!524287);

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            var_20 = ((((((((86 >> (240 - 239)))) ? 135 : 31))) ? var_3 : (arr_6 [i_1])));
            var_21 = ((!(((-((var_0 / (arr_3 [i_0] [9]))))))));
            var_22 = (((arr_2 [i_0]) ? (((arr_0 [i_0]) ? ((-(arr_0 [i_0]))) : (arr_6 [i_1]))) : (((arr_2 [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])))));
        }
        var_23 = var_11;
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        var_24 = var_18;

        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            var_25 = ((var_17 ? (arr_7 [i_2] [i_3]) : var_6));
            arr_12 [i_2] [i_2] = (arr_8 [i_3]);
            var_26 = (((arr_10 [i_2] [i_3]) ? (((!(arr_9 [i_3])))) : ((var_18 ? (arr_9 [i_2]) : (var_10 ^ var_6)))));
            var_27 = ((((15 ? 222 : 7358395377659701327)) | (arr_8 [i_2])));
            arr_13 [i_3] [i_3] [i_2] = arr_8 [i_2];
        }
        var_28 = (((!var_12) ? 1 : (((0 ^ 124) ? 24124 : (18446744073709551597 ^ 19)))));
        arr_14 [i_2] = var_16;
        var_29 = (((((+(((arr_7 [i_2] [i_2]) - var_17))))) ? (((~var_0) ? ((var_18 ? (arr_11 [i_2]) : var_18)) : (~var_6))) : (arr_7 [i_2] [i_2])));
    }
    var_30 = (((~var_8) | var_17));
    var_31 = (min(var_31, (!-var_8)));
    var_32 ^= (240 * 9770809924071626405);
    var_33 = var_13;
    #pragma endscop
}
