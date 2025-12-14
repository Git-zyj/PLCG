/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126354
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((var_13 ? var_6 : 1)))) ? ((((~var_17) ? ((var_11 ? var_18 : 1)) : ((min(1, var_18)))))) : (max((((var_12 ? var_13 : 181))), -1579060779))));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        var_20 = (min(var_20, ((((arr_1 [14]) ? ((~(arr_2 [i_0] [13]))) : (((!(arr_1 [i_0])))))))));
        arr_3 [i_0] = ((!(!var_10)));
        var_21 -= (!1);
        var_22 = (~1);
    }
    #pragma endscop
}
