/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183573
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= (max(((~((240 ? 0 : 0)))), ((-(!var_3)))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = (max(((((var_10 / 1) ? -7369879020649475639 : (arr_2 [i_0])))), var_16));
        var_18 = (min(var_18, ((max(((((((arr_2 [i_0]) ? 0 : 7369879020649475639)) * 4294967283))), 3442039737047992742)))));
    }
    var_19 = (max(-4, (((25 ? 18446744073709551598 : -2)))));
    #pragma endscop
}
