/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143092
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_14, var_10));
    var_20 = ((((min(((max(96, var_15))), ((1 ? 127 : var_14))))) ? (((((var_13 ? var_15 : -95))) ? -1 : (max(30, -1540454261)))) : var_7));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_21 = (((((((arr_1 [i_0]) || var_3)))) == (4294967290 - 122)));
        var_22 = (!-7719701322778875479);
        var_23 = (~64011);
        arr_2 [i_0] = (!64033);
    }
    #pragma endscop
}
