/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161683
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_20 *= (max((arr_0 [22]), (((~(((arr_0 [12]) ? -109 : 680)))))));
        arr_3 [i_0] = ((!(-127 - 1)));
    }
    var_21 = ((!(((((max(-5356468377781172547, var_3))) ? -var_16 : ((var_3 ? -5356468377781172564 : var_19)))))));
    var_22 = (min((((((max((-9223372036854775807 - 1), 2898043279))) || var_16))), (107 | 14)));
    var_23 = var_18;
    var_24 = (!274877906943);
    #pragma endscop
}
