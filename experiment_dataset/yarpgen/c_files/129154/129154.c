/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129154
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_15;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            var_21 = ((((((!var_18) >> (2147483647 - 2147483646)))) ? (((!(((var_10 ? 1 : (arr_0 [i_0] [i_1]))))))) : (((max((arr_0 [i_0] [i_1]), 6446))))));
            arr_4 [i_0] [i_0] = ((((max((arr_3 [i_0] [i_1 + 2] [i_1 - 2]), var_7))) || var_19));
        }
        var_22 ^= (arr_2 [i_0] [i_0] [i_0]);
        var_23 = (arr_0 [i_0] [i_0]);
        var_24 = ((((var_5 ? var_17 : var_8))) ? var_14 : (arr_0 [i_0] [i_0]));
    }
    var_25 = var_18;
    var_26 = var_0;
    #pragma endscop
}
