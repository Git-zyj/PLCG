/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178936
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_7;
    var_17 = var_13;
    var_18 = var_1;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_19 = (((((136 ? var_15 : var_12)) == (!var_11))) ? ((max(1, 23651))) : ((207 ? -9389 : 56)));
        arr_2 [i_0] &= ((((((((var_4 ? 48909 : 211411431))) ? -9394 : ((((arr_0 [i_0]) == 903802834)))))) || ((max(207, ((var_9 ? (arr_1 [i_0] [i_0]) : var_14)))))));
        var_20 = (min(var_20, (arr_1 [i_0] [i_0])));
    }
    #pragma endscop
}
