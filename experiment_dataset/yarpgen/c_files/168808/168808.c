/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168808
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [8] &= (65525 < 7);
        arr_3 [i_0] = ((arr_0 [i_0]) < (var_12 - -1));
        var_16 *= ((!(((var_14 << (arr_1 [i_0] [4]))))));
    }
    var_17 = ((((!(var_14 || var_5))) ? ((((!var_4) || (1 && 1)))) : (((((21 ? var_6 : var_6))) ? (var_10 && var_2) : ((1 ? 1 : -1))))));
    var_18 = ((((65529 ? 1 : 1))) ? (1 == var_1) : (((-var_0 < ((65528 ? 1 : -1))))));
    var_19 = (~120);
    #pragma endscop
}
