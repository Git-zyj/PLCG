/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178333
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((~(var_5 - 1199461197)))) ? (((var_18 && (((9597436995892165991 ? var_2 : 0)))))) : 0));
    var_20 &= ((((((8849307077817385640 && var_5) ? ((4031020596241907724 ? 232 : var_18)) : (var_15 && var_6)))) ? var_0 : var_18));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (var_6 - -2109067996);
        arr_3 [i_0] = (((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [6])));
        arr_4 [i_0] = (((arr_1 [i_0]) ? -1587197561 : (arr_0 [i_0] [i_0])));
        arr_5 [i_0] = (arr_0 [i_0] [i_0]);
    }
    #pragma endscop
}
