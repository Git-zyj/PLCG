/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157449
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_7;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_18 -= (max((((((var_1 ? var_9 : var_6))) ? (arr_0 [i_0] [i_0]) : (((var_11 ? var_10 : 4294967295))))), ((+(((arr_0 [i_0] [i_0]) + var_12))))));
        arr_2 [i_0] = (~var_8);

        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            arr_6 [9] [i_1] [i_1] = ((!((((!var_7) ? ((((arr_0 [i_0] [i_0]) ? var_9 : var_7))) : (max((arr_0 [i_0] [i_1]), var_3)))))));
            var_19 += var_4;
            var_20 = (((11 ? 1 : (-2147483647 - 1))));
        }
        var_21 ^= (~var_16);
    }
    var_22 = (min(var_22, ((max((((var_5 ? var_12 : var_2))), (-var_10 + var_11))))));
    #pragma endscop
}
