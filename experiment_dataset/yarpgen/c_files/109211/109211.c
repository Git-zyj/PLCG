/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109211
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_5 ? (((var_11 ? 0 : -9045262502601996856))) : ((9223372036854775807 ? 118 : (max(9045262502601996856, 9045262502601996855))))));
    var_18 = ((((((var_9 | var_12) ? 95 : var_7))) ? (min(((min(var_13, var_0))), var_1)) : ((((!(((-9045262502601996864 ? -9045262502601996869 : 9045262502601996834)))))))));
    var_19 = (((max(2147483620, var_3)) >> (((max((127 & var_7), (-127 - 1))) - 4294967138))));
    var_20 -= (var_2 > var_15);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_21 ^= (arr_1 [i_0]);
        var_22 = 9045262502601996856;
    }
    #pragma endscop
}
