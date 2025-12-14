/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141932
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= ((!(var_3 >= var_14)));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0 - 1] = (((arr_0 [i_0]) ? ((18446744073709551615 ? ((18446744073709551610 ? 0 : 127)) : 1)) : ((((arr_0 [i_0 - 1]) / -16384)))));
        arr_3 [i_0] = (max(((-18446744073709551608 ? (~18446744073709551610) : var_13)), ((1 ? 1 : 5))));
        arr_4 [i_0] = (((((0 >> 0) == ((1 ? 65535 : 18446744073709551615)))) ? (((((!(arr_0 [i_0]))) || (2047 + 18446744073709551610)))) : 0));
    }
    #pragma endscop
}
