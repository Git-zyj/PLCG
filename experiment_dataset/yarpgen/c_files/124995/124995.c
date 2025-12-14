/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124995
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (((!(var_11 < var_10))))));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        var_15 = (min(var_15, -0));
        var_16 ^= (((arr_1 [15]) | (arr_1 [i_0])));
        var_17 |= 18446744073709551615;
        var_18 = (arr_2 [i_0] [i_0 - 3]);
    }
    for (int i_1 = 4; i_1 < 17;i_1 += 1)
    {
        var_19 = (arr_1 [i_1]);
        var_20 *= ((-(arr_1 [i_1])));
    }
    var_21 = (max((((((max(var_4, var_13)))) ^ var_0)), ((((!65523) >= (max(31, 1281773355)))))));
    var_22 = (((var_3 * var_4) && var_1));
    var_23 = var_9;
    #pragma endscop
}
