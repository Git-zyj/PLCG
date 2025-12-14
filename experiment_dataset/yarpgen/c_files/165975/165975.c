/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165975
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += (max(var_8, ((min((max(var_12, var_13)), ((max(var_1, var_0))))))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_16 = (max((min((arr_0 [i_0] [i_0]), var_6)), (min(((var_6 ? (arr_1 [i_0]) : (arr_0 [i_0] [i_0]))), ((((arr_1 [i_0]) ? var_3 : var_12)))))));
        var_17 = ((((var_9 ? (min(var_1, var_0)) : (arr_1 [i_0]))) * (min(3254529665, -19489))));
        var_18 = (min((max(((min(19488, (arr_1 [i_0])))), (max(var_11, var_12)))), ((max(-1039475718, 1)))));
        var_19 = (min((max((min(var_4, (arr_1 [i_0]))), (max(var_11, (arr_0 [i_0] [i_0]))))), (arr_0 [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 14;i_1 += 1)
    {
        var_20 = (((127 & (arr_3 [i_1] [i_1]))));
        arr_4 [i_1] = (((((var_5 ? var_12 : var_12))) ? (((arr_2 [i_1] [i_1]) ? var_11 : var_10)) : (arr_1 [i_1 + 2])));
        arr_5 [i_1] = arr_0 [i_1 - 1] [i_1];
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            var_21 ^= (((var_7 * var_10) != ((((19489 < 32767) ? ((((arr_6 [i_2]) == (arr_8 [i_2] [i_2])))) : (max(var_5, (arr_8 [i_2] [i_2]))))))));
            var_22 = (max(var_22, (arr_9 [i_3])));
            var_23 = (51 % var_8);
        }
        for (int i_4 = 3; i_4 < 21;i_4 += 1)
        {
            var_24 = (max((((arr_8 [i_2] [i_2]) ? var_14 : (var_7 | var_11))), (((((max((arr_6 [i_4 - 1]), var_0)))) | (9452756396271891565 ^ 1)))));
            arr_13 [i_2] [i_2] = (max(1, 65535));
            var_25 = ((((max((min((arr_12 [i_4 + 1]), var_2)), (arr_6 [i_2])))) ? ((((var_11 && ((((arr_7 [i_2] [i_4]) ? var_11 : var_4))))))) : (((arr_11 [i_4 - 2] [i_4 - 2] [i_4 - 3]) ? ((min((arr_6 [i_4]), (arr_8 [i_4] [i_2])))) : (min((arr_12 [i_2]), var_1))))));
        }
        var_26 = ((((arr_8 [i_2] [i_2]) ? (arr_8 [i_2] [i_2]) : (arr_8 [i_2] [i_2]))));
        var_27 = ((min((arr_9 [i_2]), var_11)));
        var_28 = (((-127 - 1) <= 348074565));
        var_29 = (max(18446744073709551613, (arr_12 [i_2])));
    }
    #pragma endscop
}
