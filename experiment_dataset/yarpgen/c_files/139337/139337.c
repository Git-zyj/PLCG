/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139337
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((!(((42297 ? 1659079557 : 58591)))));
    var_14 = var_8;

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_15 = ((((min((arr_1 [i_0 + 1]), var_3))) ? (min((58591 / var_1), (var_12 / var_6))) : (max((max(58571, var_1)), (var_4 / 45)))));
        var_16 ^= (((max(14088301153597572474, -1732826399)) - ((((arr_0 [i_0]) * (arr_0 [i_0 + 1]))))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_17 = (min(17479, 2558425497990311825));
        var_18 -= 24600;
        arr_4 [i_1] = (min(2492588047, 1537442757));
        arr_5 [i_1] = ((min(211, (arr_2 [i_1]))));

        for (int i_2 = 1; i_2 < 13;i_2 += 1)
        {
            var_19 = -4432470155180164281;
            var_20 *= var_3;
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
    {
        var_21 *= ((~(var_8 ^ var_5)));
        var_22 |= -var_12;
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
    {
        arr_14 [i_4] [i_4] = var_4;
        var_23 = (22023 || var_11);
        var_24 = -1732826378;
    }
    #pragma endscop
}
