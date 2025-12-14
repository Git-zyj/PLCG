/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141898
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((((var_16 ? -54 : 4158153304608773801))) ? var_3 : (min(var_2, var_4))))) ? ((max(var_7, var_4))) : var_16));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_20 = (((var_2 ? var_18 : 1)));
        arr_4 [i_0] [11] = (((((arr_1 [i_0 + 1] [i_0]) ? 1386738388 : -4158153304608773801)) & (((~(arr_3 [i_0]))))));
    }
    #pragma endscop
}
