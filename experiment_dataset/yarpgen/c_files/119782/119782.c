/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 63;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_11 = ((((((arr_1 [i_0]) + (arr_0 [i_0] [i_0])))) ? -63 : ((-63 ? 11152626097404032135 : 18446744073709551615))));
        var_12 = (min(var_12, (max(((1873575267944972043 ? 127 : 14713689376263101365)), (((-32767 - 1) ? var_7 : 18446744073709551615))))));
    }
    #pragma endscop
}
