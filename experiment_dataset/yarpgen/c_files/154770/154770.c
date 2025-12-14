/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154770
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_15 += (min(((((((arr_2 [i_0] [i_0]) || (arr_1 [i_0] [i_0])))) + (arr_2 [i_0] [i_0]))), ((((!(arr_2 [i_0] [i_0])))))));
        var_16 ^= (max((arr_2 [i_0] [i_0]), (((arr_2 [3] [i_0]) ^ (arr_0 [i_0])))));
        var_17 ^= (((((~(arr_0 [i_0])))) ? (min((((arr_0 [12]) ? -2271425644594626395 : -2271425644594626386)), -19232)) : var_4));
        var_18 = ((((max((arr_2 [i_0] [i_0]), var_6))) ? (min((arr_2 [13] [i_0]), (arr_2 [i_0] [i_0]))) : var_1));
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {
        var_19 = ((((((max((arr_5 [i_1]), 0))) - ((1 ? (arr_5 [i_1]) : var_4)))) + ((((min(1, var_4))) + -29))));
        var_20 += (min(((-2271425644594626395 ? 22 : -7645735939148668965)), ((((arr_5 [i_1 + 2]) - (arr_3 [i_1 - 1]))))));
        arr_6 [i_1] = ((22 - (arr_5 [i_1])));
    }
    var_21 = -30;
    var_22 = (((((max(-3557907284034112802, var_12)) + ((33 ? 2271425644594626394 : 1)))) + (!var_5)));
    #pragma endscop
}
