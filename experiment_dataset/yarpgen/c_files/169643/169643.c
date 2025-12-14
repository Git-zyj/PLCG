/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169643
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_2;
    var_12 = var_10;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_13 = 12586;
        var_14 = (((arr_2 [i_0]) ? 122 : ((var_6 ? 10782002588678470739 : 7664741485031080876))));
        arr_4 [i_0] = (((arr_3 [i_0]) != (arr_3 [i_0])));
        var_15 = (((arr_0 [i_0] [i_0]) % 1));
    }
    var_16 = 127;
    var_17 = ((var_5 && (((var_5 << ((((139 ? var_0 : 10782002588678470739)) - 228977009)))))));
    #pragma endscop
}
