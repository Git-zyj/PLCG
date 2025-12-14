/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188185
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        var_13 -= (((((var_9 % (arr_1 [i_0 - 2])))) ? (arr_1 [i_0 + 2]) : ((max((arr_1 [i_0 + 1]), (arr_1 [i_0 + 2]))))));
        var_14 = ((16153 ? 9223372036854775807 : 204));
        var_15 = (((((var_9 % ((255 ? (arr_2 [i_0]) : var_12))))) - (((arr_1 [i_0 - 2]) ? (var_4 & 9223372036854775807) : (((7 ? 161 : 255)))))));
    }
    var_16 *= ((var_5 ? 1 : ((-var_5 ? var_1 : var_7))));
    var_17 = (((max((var_11 < var_11), ((1 ? var_6 : var_7)))) & ((var_3 ? var_6 : var_11))));
    var_18 = var_0;
    #pragma endscop
}
