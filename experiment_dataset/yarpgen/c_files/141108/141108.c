/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141108
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 7838180135390280649;
    var_19 = (min(var_2, (-var_8 * 12615)));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = (-5263 ? (min((max(var_11, var_6)), ((min(var_15, (arr_1 [i_0 - 1] [i_0 - 1])))))) : ((((((arr_1 [i_0] [i_0]) ? var_14 : var_7))) ? (min((arr_0 [i_0 - 1]), var_16)) : ((min(-18, -26))))));
        var_20 = (min(var_20, ((((((var_3 % -125) ? (min((arr_2 [i_0 - 1]), var_3)) : var_10))) ? (min((min(2097151, 179)), ((((arr_1 [6] [i_0 - 1]) % (arr_0 [i_0 - 1])))))) : ((min(((-26 ? var_12 : var_8)), (arr_0 [i_0 - 1]))))))));
        var_21 = ((455178937 ? (max(-455178937, (arr_0 [i_0 - 1]))) : 28427));
    }
    #pragma endscop
}
