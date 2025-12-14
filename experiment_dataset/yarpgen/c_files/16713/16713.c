/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16713
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= -759887056;

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_11 = (max(26981, (((~-3488191879372305667) | 9223372036854775807))));
            var_12 = var_8;
        }
        var_13 = (min(var_13, ((min((arr_1 [i_0 - 2]), (((var_5 - 67104768) ? 9223372036854775807 : (min(9223372036854775807, var_6)))))))));
        arr_4 [i_0 - 3] = (arr_0 [i_0]);
    }
    for (int i_2 = 1; i_2 < 19;i_2 += 1)
    {
        var_14 = -27998;
        arr_8 [i_2 - 1] [i_2 + 1] = ((~(var_8 & var_6)));
    }
    #pragma endscop
}
