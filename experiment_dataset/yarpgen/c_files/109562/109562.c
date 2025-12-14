/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109562
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_2;
    var_12 ^= var_3;
    var_13 = (min(var_13, (~var_7)));
    var_14 = ((14103968985606186419 ? 4294967295 : 0));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 8;i_0 += 1) /* same iter space */
    {
        var_15 -= (((arr_0 [i_0 - 2] [i_0 - 1]) ? var_0 : var_8));
        arr_2 [i_0 + 1] = ((!(arr_1 [i_0 - 3])));

        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            var_16 = (+-10868635545450727473);
            arr_5 [i_0 - 1] [i_1 - 1] = (!(~49323));
        }
    }
    for (int i_2 = 3; i_2 < 8;i_2 += 1) /* same iter space */
    {
        var_17 -= (!536870911);
        var_18 = (max(var_18, (((!(~0))))));
        var_19 *= (((~1) ? ((7 ? 18446744073709551615 : (arr_7 [i_2 - 2]))) : (((3758096403 ? var_2 : var_6)))));
        arr_9 [i_2] [i_2 + 1] = ((~(!2033464748)));
    }
    #pragma endscop
}
