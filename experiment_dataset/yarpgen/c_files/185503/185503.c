/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185503
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= ((((max(var_4, var_3))) ? (87 * var_0) : var_8));
    var_13 &= var_4;
    var_14 = var_5;
    var_15 = (min(var_15, 123));

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_16 -= ((~(((!(((var_2 ? var_7 : var_1))))))));
        var_17 = (max(var_17, ((((arr_0 [10]) ? var_6 : ((((!(((-(arr_1 [20])))))))))))));
        var_18 = 3;
    }
    #pragma endscop
}
