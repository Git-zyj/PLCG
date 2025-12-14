/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181260
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= var_11;

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_13 = ((((((arr_1 [i_0]) ^ (var_10 ^ 134)))) ^ (-13999 ^ 9223372036854775807)));
        var_14 = ((var_5 ? (((((-14017 ? -76 : var_10))) ? ((var_11 ? (-9223372036854775807 - 1) : var_5)) : (arr_0 [i_0] [i_0]))) : var_7));

        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            var_15 |= (((arr_2 [i_0]) ? ((((((arr_0 [i_0] [i_1]) ^ (arr_4 [i_0])))) ^ (min(var_6, var_1)))) : (!var_2)));
            var_16 = var_6;
            arr_6 [i_0] = var_4;
        }
        arr_7 [i_0] = var_7;
        var_17 = (((var_2 ^ 32044) ? ((((var_2 ? (arr_3 [i_0]) : var_5)) ^ var_7)) : var_3));
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] [i_2] &= ((((min(-14002, 60))) ? (((-32767 - 1) ^ (-9223372036854775807 - 1))) : (7286 ^ var_11)));
        var_18 = var_8;
    }
    var_19 -= var_11;
    var_20 = (max(var_20, var_11));
    #pragma endscop
}
