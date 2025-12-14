/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126825
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= (min(((224 ? 15 : var_5)), var_12));
    var_16 = (min(var_16, var_13));
    var_17 = (48 ? (max(-11, (var_4 || var_3))) : ((((26 || (((var_11 ? 864793371 : var_11))))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_18 = (((arr_1 [i_0]) ? -864793357 : ((((arr_1 [i_0]) != (arr_1 [i_0]))))));
        arr_2 [i_0] [i_0] = 917719180;
    }
    #pragma endscop
}
