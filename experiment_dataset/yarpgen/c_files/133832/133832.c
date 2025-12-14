/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133832
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_12 ? var_15 : var_0));
    var_18 = (min(var_18, var_2));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_19 -= (+-7349692372652911568);
        var_20 = (max(var_20, ((((var_1 * var_1) ? (((-13049 - var_10) ? ((min(13048, 13048))) : (-13061 & var_14))) : (((-13049 == ((13033 ? -13033 : (arr_0 [i_0])))))))))));
    }
    var_21 = (max(var_21, var_14));
    #pragma endscop
}
