/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122048
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_19 = 1;
        var_20 *= var_3;
        arr_2 [i_0] = (((((((-21 ? 4294967295 : 0))) ? ((2658879093 ? 16384 : (arr_1 [i_0]))) : ((-7092494478473270330 ? 40411 : 60098))))) ? (((~((4294967295 ? -1476386741 : 255))))) : (((arr_0 [i_0] [i_0]) ? 8881937449381826923 : 33853)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_21 = ((16 ? 1 : -var_4));
        var_22 = (max(var_22, (((((18710 ? 1 : 1))) ? 16 : 62723))));
        arr_7 [i_1] = ((var_1 ? var_10 : -var_12));
    }
    var_23 = var_7;
    #pragma endscop
}
