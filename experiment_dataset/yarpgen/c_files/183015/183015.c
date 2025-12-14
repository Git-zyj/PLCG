/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183015
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((var_0 ? var_8 : ((var_5 ? 5467055376865752053 : 67108864)))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_11 = (arr_0 [i_0]);
        arr_2 [6] [6] &= ((((((max(-5135, (arr_0 [i_0])))) ? -1556798311 : (((((arr_1 [i_0]) >= 15698))))))) ? (arr_1 [i_0]) : ((((((arr_0 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0])))) ? (~-1428341815659655310) : (((max((arr_1 [4]), (arr_1 [i_0]))))))));
    }
    var_12 -= min(var_0, (((67108874 ? -20888 : 1556798304))));
    #pragma endscop
}
