/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121711
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= var_6;
    var_15 = (((((((min(14190496487372603087, var_4))) ? var_3 : 28013))) / var_12));
    var_16 = (((var_12 * var_2) ? (var_12 * var_4) : ((max(-var_10, -var_8)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [9] = 4294967283;
        var_17 = (((arr_0 [i_0]) ? ((var_2 ? (arr_2 [0] [i_0]) : (arr_1 [i_0] [i_0]))) : (((arr_0 [i_0]) * (arr_1 [i_0] [i_0])))));
        var_18 = (((arr_0 [i_0]) == (arr_1 [i_0] [i_0])));
    }
    #pragma endscop
}
