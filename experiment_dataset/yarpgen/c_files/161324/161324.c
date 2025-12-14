/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161324
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 17;i_0 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_4 [i_1] [3] = 7;
            arr_5 [i_1] [i_0] [i_0] = ((((18803 <= (arr_2 [i_0 - 1] [i_0 + 1] [i_1])))) | 201);
        }
        var_18 = (min(var_18, var_2));
        var_19 &= 975441024;
        arr_6 [i_0] = (arr_1 [i_0]);

        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            arr_11 [i_0] = -965626777;
            var_20 = (max(var_20, ((((arr_7 [i_0 + 1]) * (arr_7 [i_0 - 2]))))));
            arr_12 [i_2] [i_0] [i_0] = (((((-8 ? var_2 : (((arr_8 [i_0 - 1] [i_0]) / (arr_3 [i_0])))))) ? ((((min((arr_7 [i_0 - 2]), (arr_10 [i_2] [4])))) ? (arr_3 [i_0]) : (var_11 ^ -9108936351587894752))) : ((min(var_15, ((var_15 ? var_9 : 3319526272)))))));
        }
    }
    for (int i_3 = 3; i_3 < 17;i_3 += 1) /* same iter space */
    {
        var_21 = (min(((max(var_1, 2046))), var_10));
        arr_15 [i_3] = 18446744073709551615;
        arr_16 [i_3] [i_3] = ((var_10 || ((83 && (arr_10 [i_3] [i_3 + 1])))));
        arr_17 [i_3] = ((var_11 - (min((((!(arr_7 [5])))), 9223372036854775807))));
    }
    for (int i_4 = 3; i_4 < 17;i_4 += 1) /* same iter space */
    {
        arr_22 [i_4] = (((arr_7 [i_4]) * ((18828 ? (max((arr_2 [8] [i_4 - 1] [8]), var_13)) : ((max(var_11, var_14)))))));
        var_22 -= ((-5836 ? (((arr_0 [i_4 - 3]) ? 975441035 : (((max((arr_2 [i_4] [i_4] [i_4]), (arr_9 [5] [10]))))))) : var_11));
        var_23 = (((min(0, 255))));
        var_24 ^= max((((((arr_14 [i_4 + 1]) + 2147483647)) >> (var_7 - 876202606))), (max((9 & 6), (((arr_10 [i_4] [17]) ? 1 : var_10)))));
    }
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        var_25 &= (((min((arr_23 [i_5]), (arr_23 [i_5]))) ^ -8));
        arr_26 [i_5] |= var_11;
        var_26 += ((((arr_23 [i_5]) & var_6)));
        var_27 &= ((((max(((min(var_15, 64))), (max((arr_13 [i_5]), 0))))) ? (((((1126251207248751052 && (arr_23 [11]))) || ((min(var_0, var_9)))))) : (((((var_2 ? (arr_0 [2]) : 228))) ? 12 : (arr_13 [i_5])))));
        arr_27 [5] [i_5] = (((arr_18 [i_5]) / ((max((arr_0 [i_5]), var_12)))));
    }
    var_28 = ((((((28 >= -14927) >> (var_15 - 3386)))) + (((((var_8 ? var_8 : var_0))) ? var_6 : var_1))));
    var_29 = -3283;
    var_30 &= (min((min((max(var_9, 1)), var_1)), var_3));
    #pragma endscop
}
