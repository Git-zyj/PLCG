/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= (((~(min(1, 18446744073709551615)))));

    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        var_15 *= ((!(arr_2 [8])));
        arr_3 [0] |= (((min((20 - -20), 1147324752))) || ((max((arr_1 [10] [10]), -1))));
        var_16 = (((arr_1 [i_0 + 2] [i_0]) ? (1200654032 <= 1200654032) : 96));
    }
    var_17 = var_1;
    #pragma endscop
}
