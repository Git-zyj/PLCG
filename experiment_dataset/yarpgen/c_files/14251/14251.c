/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14251
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= (((((var_10 ? var_15 : var_2))) ? (~-30497) : var_12));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_20 = (min(var_20, ((((~1410659760) ? (min((arr_0 [0] [i_0]), (((arr_1 [i_0] [i_0]) ? 4503599627370495 : (arr_0 [i_0] [3]))))) : (((((((arr_0 [i_0] [i_0]) ? 18442240474082181110 : (arr_0 [i_0] [i_0]))) != (((var_12 ? 74 : 189805114))))))))))));
        var_21 |= ((((max((arr_0 [i_0] [i_0]), 710085897))) ? ((117 / (arr_0 [i_0] [i_0]))) : (6608087809352987085 <= -29)));
    }
    #pragma endscop
}
