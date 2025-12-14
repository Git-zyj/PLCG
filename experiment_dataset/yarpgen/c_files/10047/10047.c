/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10047
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (-var_11 && var_2);
    var_18 = (max(((-1626500899 ? 7238432996122844068 : var_16)), var_10));
    var_19 = var_9;

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        arr_3 [7] = -var_11;
        arr_4 [i_0] = ((((min((((125 & (arr_0 [i_0])))), (((arr_1 [i_0]) & 18446744073709551596))))) ? (min((-9223372036854775807 - 1), 4172353740)) : ((max(((-(arr_2 [i_0]))), var_9)))));
        var_20 = (arr_2 [11]);
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = (((min((!2466676551), -9223372036854775807)) > (max((min(9223372036854775807, (arr_5 [i_1]))), ((max(252380091, 8)))))));
        arr_8 [1] = (((((arr_5 [i_1]) + 2147483647)) << (((min((arr_2 [i_1]), (arr_6 [i_1]))) - 694640140))));
    }
    var_21 = min((((59 / ((var_11 ? var_11 : var_1))))), (min(-var_12, 216804242)));
    #pragma endscop
}
