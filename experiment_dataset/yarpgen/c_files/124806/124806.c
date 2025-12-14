/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124806
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((((var_16 ? var_14 : 107)))) ? (max((var_2 ^ var_14), (((var_3 >> (-2668424021665750433 + 2668424021665750454)))))) : ((((!(!var_16)))))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_18 ^= (((((max((arr_1 [i_0] [i_0]), var_12))) ? (max(28, 16365782472518385984)) : (!-22))));

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_19 = ((((-((var_7 ? var_2 : (arr_1 [i_0] [i_0]))))) >> ((((((255 ? 1074037872 : 11843175325258255450)) / 36193)) - 29671))));
            var_20 = (min(var_20, ((max((((!(((var_10 ? 32607 : var_0)))))), ((30940 ? var_4 : (-23833 >= 114))))))));
            var_21 = ((~((29344 ? var_14 : (max((arr_0 [i_0] [i_0]), var_7))))));
            var_22 |= (arr_2 [i_1] [i_1]);
            var_23 = (max(36193, (((!(arr_5 [i_0]))))));
        }
        arr_6 [i_0] = (max((max(29343, -var_10)), -var_15));
        var_24 = ((max(var_10, (arr_3 [i_0] [i_0] [i_0]))));
        arr_7 [i_0] [i_0] = 25;
    }
    #pragma endscop
}
