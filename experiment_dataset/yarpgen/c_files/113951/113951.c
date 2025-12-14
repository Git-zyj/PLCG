/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113951
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((((var_3 ? 5762 : 86))) ? (~var_2) : -15400))) ? (((((min(-15400, var_13))) ? ((min(25918, var_3))) : ((min(53797, -25919)))))) : var_16));
    var_20 = ((((((((-32746 ? 0 : 23))) ? 9223372036854775801 : (((min(15394, -15402))))))) - var_11));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_21 += (arr_0 [i_0]);
        arr_3 [i_0] = (arr_0 [i_0]);
        var_22 = (max(var_22, (!0)));
    }
    #pragma endscop
}
