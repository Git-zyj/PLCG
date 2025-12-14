/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166863
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, (((var_6 >= (var_6 - var_9))))));
    var_18 = 62881;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0 + 3] = (var_13 / var_10);
        var_19 = (max(var_19, ((((234 != var_9) & 268431360)))));
        var_20 = -268431360;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_21 = (max(var_21, (10589923459165419411 || var_5)));
        arr_8 [i_1] = (7856820614544132205 ^ 10589923459165419411);
        var_22 += -268431378;
        arr_9 [i_1] = ((((-268431361 + 2147483647) << (((var_16 + 397650393) - 18)))));
        var_23 = var_1;
    }
    var_24 = var_15;
    #pragma endscop
}
