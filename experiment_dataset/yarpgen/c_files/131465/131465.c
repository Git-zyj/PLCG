/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131465
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_10 || ((max(((var_1 ? 2190104539 : var_5)), var_6)))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_12 = ((-743653639069358095 - (((-var_2 + (((arr_1 [9] [9]) ? (arr_0 [i_0]) : 3420821967)))))));
        arr_2 [i_0] = ((+(((arr_1 [i_0] [i_0]) >> (arr_1 [i_0] [1])))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_13 = (max(var_13, ((((1 > 1) ? 183 : ((-(arr_0 [i_1]))))))));
        var_14 = (min(var_14, ((((arr_1 [i_1] [i_1]) - ((var_7 ? (var_9 + var_7) : (var_5 + var_3))))))));
        var_15 = (min(var_15, ((min(var_5, ((~(arr_4 [i_1]))))))));
        arr_5 [10] = (var_3 + 0);
    }
    #pragma endscop
}
