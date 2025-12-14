/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138170
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(7015252079668689608, 7015252079668689605));
    var_14 = var_0;
    var_15 = (((((var_1 ? var_4 : (((0 ? var_1 : var_5)))))) >= ((var_10 / ((var_0 ? var_12 : var_8))))));
    var_16 |= (1 * 7015252079668689608);

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_17 = (min(((~(((arr_0 [i_0 + 1] [i_0]) & var_10)))), 1));
        var_18 = ((-(min(((max(1, (arr_1 [i_0])))), (min(1, -2038666195))))));
        var_19 |= (arr_0 [i_0] [i_0]);
    }
    for (int i_1 = 3; i_1 < 13;i_1 += 1)
    {
        var_20 += (min((((((((arr_4 [i_1]) && 1)))) % (max((arr_1 [2]), 1702757696635449180)))), ((((((1 == (arr_1 [1]))))) + ((var_8 ^ (arr_2 [i_1] [i_1])))))));
        var_21 = ((((0 + (((arr_3 [i_1]) ? 739819908 : 1)))) / ((((((~(arr_0 [i_1] [i_1]))) + 2147483647)) << ((((-(arr_3 [i_1]))) - 3514012445))))));
    }
    #pragma endscop
}
