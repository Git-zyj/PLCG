/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119941
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((var_1 <= var_6) * (min(var_12, ((127 ? var_8 : var_1))))));
    var_15 = (((((((var_4 ? var_13 : -123)) * (var_13 / var_7)))) ? (~1) : (((var_1 ^ var_11) + ((var_11 >> (var_13 - 17961772692044741846)))))));

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        arr_3 [10] [10] |= (min(((var_4 ? 1 : (min(var_5, var_10)))), ((((min(var_4, var_8)) >> (var_12 - 11224))))));
        var_16 = ((1 >> (105 - 98)));
        var_17 = ((~(min(var_4, ((var_7 << (((arr_0 [i_0 - 1]) - 112621680561583876))))))));
    }
    var_18 = (max(var_18, (((!39758) ? var_7 : (((((var_7 ? 5117 : var_9))) - (var_4 + var_6)))))));
    #pragma endscop
}
