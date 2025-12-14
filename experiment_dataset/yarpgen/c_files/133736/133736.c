/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133736
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_9 >= (!-1779238519)));
    var_17 = var_15;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = (((arr_0 [i_0]) - var_6));
        arr_3 [i_0] = -1779238519;
        var_18 = (min(var_18, ((((1 ^ 1779238514) ? -1531 : ((var_14 ? (arr_0 [i_0]) : (arr_1 [i_0] [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_19 = (min(var_19, (((!(!var_13))))));
        arr_6 [i_1] = (((min(var_10, ((var_6 << (244 - 221)))))) ? ((((arr_0 [i_1]) ? (-2147483647 - 1) : -7))) : ((1779238519 ? 9 : 1)));
        var_20 = var_0;
        var_21 = (!-1779238498);
        arr_7 [i_1] [i_1] |= ((var_9 ? var_8 : ((var_7 ? 1779238498 : ((max(var_10, (arr_1 [i_1] [19]))))))));
    }

    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        arr_10 [i_2] = ((((1779238519 ? -1779238519 : (87 % -2060256329))) % -87));
        var_22 *= (min(var_0, var_1));
        var_23 = ((((((arr_0 [i_2]) << ((((min(var_1, 104))) - 103))))) ? (((-19387 ? -4977 : 243))) : (((((81 ? 2 : 5043814988305466909))) ? (arr_9 [i_2]) : ((((arr_0 [i_2]) >= var_15)))))));
    }
    #pragma endscop
}
