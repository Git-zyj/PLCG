/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168974
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        var_18 -= (max((((1595965429134935546 != 1430699545) >> ((var_3 ? var_14 : (arr_1 [13]))))), (~8)));
        var_19 = var_14;
        var_20 = (max(var_20, ((max(((-(arr_1 [i_0 + 4]))), ((min((arr_1 [i_0 + 4]), (arr_1 [i_0 + 1])))))))));
        arr_2 [0] [i_0] = (arr_1 [i_0]);
    }
    var_21 |= ((((((216172782113783808 ? 5786613866312123905 : 8))) ? (((min(var_12, var_4)))) : 70334384439296)));
    #pragma endscop
}
