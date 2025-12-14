/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123314
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] = -1580031530;
        var_17 = (~4922227080802739047);
        arr_4 [i_0] [i_0] = 944630857;
        arr_5 [i_0] = 65535;
    }
    var_18 *= 18446744073709551615;
    var_19 = (max(var_19, ((((var_2 ^ var_3) && ((((120 ^ 74) >> (-6034 + 6048)))))))));
    var_20 = ((~(max(-1, var_11))));
    #pragma endscop
}
