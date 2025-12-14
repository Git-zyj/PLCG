/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185633
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, (((var_15 ? ((var_2 ? var_11 : ((var_15 ? var_4 : 11123)))) : -20)))));
    var_17 = 554210226;
    var_18 = (min(var_18, (((+((-var_10 ? (~var_9) : 1283062466)))))));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        var_19 = 60452;
        arr_2 [i_0] [i_0] = ((var_8 * (arr_1 [i_0])));
        var_20 = var_9;
    }
    #pragma endscop
}
