/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129101
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((min(((var_16 ? 107 : 0)), 18446744073709551615)));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_21 |= min((min(var_6, (min((arr_0 [i_0 - 1] [i_0 - 1]), (arr_0 [i_0 - 1] [i_0 - 1]))))), (arr_0 [i_0] [i_0 - 1]));
        var_22 = ((((-9223372036854775807 - 1) ? (arr_2 [i_0]) : (arr_1 [i_0]))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = (min(((114 ? (arr_1 [4]) : (min(0, 1)))), (((var_16 ? ((var_8 ? var_6 : (arr_0 [i_1] [1]))) : 3490)))));
        var_23 = (max(var_23, (arr_2 [4])));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        var_24 |= var_16;
        var_25 |= ((15360 ? (arr_6 [i_2] [i_2]) : (0 + 1)));
        var_26 = 2897022984481655663;
    }
    var_27 = 94713281;
    #pragma endscop
}
