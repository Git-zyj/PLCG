/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170241
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (~(arr_1 [1]));
        arr_3 [i_0] = ((0 ? (arr_1 [i_0]) : (arr_1 [i_0])));
        arr_4 [i_0] = 16504;
        var_19 = (max(var_19, (~1912984891)));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_20 = (max(var_20, 1));
        var_21 = (((((((arr_0 [i_1]) ? var_7 : 2298834239177681064)) < ((min(197867890, (arr_1 [i_1])))))) ? (min((min(0, 4517609843478146677)), (((-8 ? 2381982405 : 1912984891))))) : (arr_0 [i_1])));
    }
    var_22 = ((((min(((min(1, 0))), (max(var_2, var_7))))) < ((~((0 ? -71 : var_9))))));
    #pragma endscop
}
