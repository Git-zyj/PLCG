/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171286
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_4;
    var_14 = 2086647902;
    var_15 = ((((((~-124) ? 1 : 16907))) || (((~((var_12 ? var_10 : var_5)))))));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_16 ^= (max((arr_0 [i_0 - 1]), ((10580 ? (((!(arr_3 [7])))) : ((min(1, 83)))))));
        var_17 = 748658358;
        var_18 = (((arr_3 [i_0 - 1]) ? ((max(122, var_8))) : ((127 ? (arr_0 [i_0]) : var_8))));
    }
    #pragma endscop
}
