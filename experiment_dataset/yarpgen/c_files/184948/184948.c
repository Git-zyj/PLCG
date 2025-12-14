/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184948
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = min((((var_4 ? var_2 : var_10))), var_15);
    var_17 = min(var_13, var_15);

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_18 = min((min(58966, 48)), (min(var_13, 11219)));
        arr_2 [i_0] [i_0] = var_6;
        var_19 = (((((var_14 * var_9) <= ((min(36615, 43365))))) ? (((((var_9 ? 39991 : var_4))) ? (var_10 / 21026) : var_13)) : (((min(55019, 19714))))));
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        var_20 = (min(var_20, (((((min((max(var_5, var_5)), 48313))) ? ((max((min(var_6, 56023)), (max(56087, var_5))))) : ((max((min(var_12, 64555)), var_6))))))));
        var_21 = 8225;
    }
    var_22 *= min(55019, var_12);
    #pragma endscop
}
