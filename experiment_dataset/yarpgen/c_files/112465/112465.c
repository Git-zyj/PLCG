/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112465
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (var_3 ? (((~var_1) ? (~46587) : (~var_16))) : var_4);

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_20 = (((arr_0 [i_0]) & ((((!(arr_0 [i_0]))) ? ((-1 ? var_6 : 4018751385)) : -512))));
        var_21 = ((((2147483648 != (arr_1 [i_0]))) ? ((((((arr_0 [i_0]) ? var_11 : (arr_0 [i_0])))) ? ((204 ? var_16 : var_12)) : (arr_0 [i_0 - 2]))) : ((11969 ? (((127 ? 1 : -1))) : ((27 ? 15 : var_16))))));
        var_22 = ((var_18 ? (!511) : (arr_0 [i_0 - 1])));
    }
    var_23 = ((var_5 ? ((((((-23400 ? -31 : 27))) ? 18 : var_13))) : (max(-1, 2342144644))));
    #pragma endscop
}
