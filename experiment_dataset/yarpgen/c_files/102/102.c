/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((0 ? ((68 ? var_11 : var_18)) : (((1 ? var_16 : 1))))));
    var_20 = ((1 ? 1 : (max(((var_7 << (-21 + 49))), (((1 >> (var_7 - 1995615411))))))));
    var_21 = (var_12 * 0);

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        var_22 = (arr_0 [i_0 + 1]);
        arr_2 [i_0] [i_0] = (((~var_4) ? var_14 : (((arr_0 [i_0 - 3]) / 1))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_23 = min((((var_13 & var_0) ? var_13 : (arr_5 [2]))), (((1 ? (arr_3 [i_1]) : var_12))));

        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            var_24 = (min(var_24, ((-var_4 ? 3607389074 : ((((~1) ^ 4)))))));
            var_25 = (var_5 ? (!98) : ((((((var_4 ? var_12 : var_8))) || (((arr_4 [i_1]) && 4))))));
        }
    }
    #pragma endscop
}
