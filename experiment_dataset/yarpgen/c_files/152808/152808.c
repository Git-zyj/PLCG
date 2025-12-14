/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152808
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = max(((min(((var_1 ? var_2 : var_12)), (((var_14 ? var_12 : var_8)))))), ((32767 ? 11628575214754050447 : 1)));
    var_18 = ((((var_13 ? var_15 : var_6))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        var_19 = (((23211 ? 1 : 7915927227696760459)));
        var_20 = (max((max(((max(var_15, var_1))), ((-26319 ? var_8 : var_7)))), (((((arr_1 [2]) ? (arr_2 [i_0]) : var_3))))));
        var_21 *= ((1008806316530991104 ? (-32767 - 1) : var_13));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = ((((var_7 ? var_11 : 239))));
        var_22 = (max(((min((max(26323, -1)), ((min(58624, 1)))))), (min(((var_11 ? 26318 : var_16)), (((var_2 ? var_13 : var_13)))))));
        var_23 += ((min(((var_3 ? (arr_3 [i_1] [i_1]) : (arr_1 [i_1]))), ((min((arr_7 [i_1] [i_1]), 1))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
    {
        var_24 = (max(var_24, (((16606208466570195314 ? 1879048192 : 1126263191)))));
        var_25 = ((6911 ? -11161 : -86));
        var_26 = ((((arr_5 [i_2]) ? 12600909781223955670 : (arr_6 [i_2] [i_2]))));
    }
    #pragma endscop
}
