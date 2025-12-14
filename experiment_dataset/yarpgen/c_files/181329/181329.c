/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181329
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, (((((-30484 && (((var_4 ? var_11 : var_11))))))))));
    var_13 = (max((((((var_5 ? var_7 : var_3))) ? var_0 : var_8)), var_0));
    var_14 &= 30791081;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        var_15 -= (((arr_0 [i_0] [i_0 - 3]) >= (((arr_0 [i_0] [i_0]) ? (arr_1 [i_0]) : 3134597482044462620))));
        var_16 = ((-(arr_1 [i_0 - 3])));
    }
    #pragma endscop
}
