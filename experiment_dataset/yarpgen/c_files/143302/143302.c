/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143302
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_18 *= 117;
        var_19 = ((((~(arr_1 [i_0])))) ? 100 : (((16256 + 100) ? (var_15 ^ var_16) : ((((arr_0 [i_0]) ? (arr_1 [i_0]) : -6909384846103933231))))));
        var_20 -= var_14;
        arr_3 [i_0] [13] = (max(var_6, var_17));
        var_21 = (min(var_21, var_3));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_22 = (max(var_22, (((119 ? 100 : 3020618442206852991)))));
        arr_7 [i_1] = min(((((arr_2 [i_1]) | var_5))), (min(-1, var_15)));
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
    {
        var_23 = ((min((((~(arr_8 [i_2]))), (arr_5 [4])))));
        var_24 *= (15083629987690397885 / 11824);
        arr_10 [i_2] [i_2] = (min((arr_1 [i_2]), (((~(((var_14 < (arr_4 [i_2])))))))));
        var_25 = ((~((-371 ? (((arr_9 [i_2] [i_2]) ^ -6909384846103933231)) : (((min(-113, 187))))))));
    }
    var_26 = var_1;
    #pragma endscop
}
