/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138362
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += var_12;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 6;i_0 += 1)
    {
        var_21 = (((((3111415339 ? (arr_1 [i_0] [i_0]) : 1183551956))) ? (var_15 >= var_15) : ((var_11 ? (arr_0 [5]) : -637075776))));
        var_22 = (!1);
        var_23 = (+((((arr_2 [i_0 + 2] [i_0 + 3]) == var_19))));
        arr_3 [i_0 - 2] = (((arr_1 [i_0 + 3] [2]) < (((!(arr_2 [i_0] [i_0]))))));
    }
    #pragma endscop
}
