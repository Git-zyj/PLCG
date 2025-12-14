/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185601
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((min(((max(105, 102))), 20474))) ? 1 : -97));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_21 = (arr_2 [i_0]);
        var_22 *= ((var_3 || var_0) ? (arr_1 [i_0]) : 432657999);
        var_23 = ((~((var_1 ? 145 : 36978))));
        var_24 &= (arr_2 [14]);
    }
    var_25 = ((((max(var_18, (max(var_12, var_17))))) ? ((((max(var_7, var_19))) ? (max(var_12, 116)) : -var_18)) : (((var_19 ? var_17 : -var_14)))));
    var_26 ^= 56;
    #pragma endscop
}
