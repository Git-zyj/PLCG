/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139965
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(((min(var_5, var_5))), (min(var_1, (((var_10 ? 0 : var_6)))))));
    var_13 = ((min(((var_9 ? 65515 : 65535)), var_5)) & var_10);

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = (((~(~1))));
        arr_4 [i_0] = var_4;
    }
    var_14 &= ((var_9 ^ ((var_0 ? (min(var_1, 18446744073709551615)) : var_6))));
    #pragma endscop
}
