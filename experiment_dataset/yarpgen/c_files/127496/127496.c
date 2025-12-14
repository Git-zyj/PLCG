/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127496
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((var_3 / (var_4 / 27070)))) ? (max((((38448 ? 268435424 : var_11))), ((var_10 ? 18446744073709551615 : var_16)))) : ((min((max(var_8, var_1)), var_1)))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_19 -= ((-(max((arr_2 [i_0]), (max(27057, (arr_2 [i_0])))))));
        var_20 = (((((!(arr_1 [i_0])))) - (min((arr_2 [i_0]), (arr_3 [i_0])))));
    }
    #pragma endscop
}
