/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165686
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 4729685188686729016;
    var_18 |= (min((((var_16 ? var_3 : (-4729685188686729015 & 65535)))), ((var_12 ? (((min(1, 1)))) : (var_6 + var_5)))));
    var_19 = ((735195848 ? 119 : 4095));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_20 = var_5;
        arr_3 [i_0] = 137436856320;
        arr_4 [i_0 + 1] |= 4193280;
        arr_5 [i_0] |= arr_0 [i_0 + 1] [i_0];
    }
    #pragma endscop
}
