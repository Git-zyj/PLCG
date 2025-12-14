/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133319
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_18 = (((((arr_1 [i_0 - 1]) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 - 1]))) + 58025));
        var_19 = (min(2147483635, 58005));
        var_20 = ((((((arr_1 [i_0]) >= 10)) ? 58024 : ((min(var_0, (arr_2 [i_0 + 4] [i_0 + 3])))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_21 = (arr_0 [i_1]);
        var_22 = 58003;
    }
    for (int i_2 = 3; i_2 < 15;i_2 += 1)
    {
        var_23 ^= ((((((4998925017501699172 ? 1 : var_12)))) <= 4));
        var_24 = (((arr_5 [i_2 - 2] [i_2 + 2]) ? 1059125485 : 0));
    }
    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        var_25 = 9223372036854775807;
        var_26 *= (((arr_13 [i_3] [i_3]) ? (max((min(var_2, (arr_13 [i_3 - 1] [i_3 - 1]))), (((3469346264 ? -25488 : (arr_2 [i_3] [i_3 - 1])))))) : 3));
        var_27 = (min(var_27, var_13));
    }
    var_28 = (max(((var_16 ? var_2 : var_15)), var_4));
    var_29 = var_8;

    for (int i_4 = 4; i_4 < 8;i_4 += 1)
    {
        var_30 ^= (((arr_17 [i_4 + 2] [i_4 + 2]) ? (max(-3282, 824892676)) : (((var_9 > ((var_0 ? (arr_17 [i_4] [i_4]) : var_13)))))));
        var_31 = (max((203755333 ^ var_9), var_16));
        var_32 = (min(32750, var_16));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {

        for (int i_6 = 2; i_6 < 22;i_6 += 1)
        {
            var_33 = ((((((arr_18 [i_5]) ? (arr_18 [i_5]) : (arr_18 [i_5])))) ? -2149365669 : 65531));
            var_34 = var_16;
        }
        var_35 = ((((((arr_18 [i_5]) * (arr_22 [i_5] [i_5])))) ? ((var_15 << (arr_18 [i_5]))) : ((~(arr_22 [i_5] [i_5])))));
        var_36 = (min(3469346263, 1));
    }
    #pragma endscop
}
