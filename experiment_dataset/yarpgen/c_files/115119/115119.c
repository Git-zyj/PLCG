/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115119
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= (((min((1 & 2373), ((min(-2374, 1))))) | ((6536 ? (32755 | 1) : var_1))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 = (((((min(-111, 1))) * ((1 ? -1 : -20063)))));
        arr_2 [3] = 8937543915179067178;
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_12 *= ((min(-1310695882549438006, 0)));

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_13 = (((((((min(1, -6608))) % 2566))) ? ((max((min(1, 65535)), 1))) : ((min(29867, 1)))));
            arr_7 [i_2] = ((max(-99797750081670892, (((51818 ? 0 : 62969))))));
        }
    }
    var_14 = 65535;
    var_15 *= (max((((-6373 || 32744) ? ((max(65535, 61592))) : ((max(47027, 1))))), (max(((26444 ? 38258 : 1)), 10))));
    var_16 -= (((((-((max(-18795, 26777)))))) ? 65535 : 255));
    #pragma endscop
}
