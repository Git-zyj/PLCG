/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166214
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            {
                var_16 = -33;
                var_17 |= (min((((arr_5 [8]) + (arr_5 [1]))), (((arr_5 [12]) << (var_6 - 1550)))));
                arr_6 [i_0] [i_1] [i_0] = ((((27 ? (arr_1 [i_1 + 1]) : (arr_1 [i_1 + 2]))) >> (!var_13)));
            }
        }
    }
    var_18 = (min(var_18, (((~var_10) | var_0))));
    var_19 = var_4;

    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {

        for (int i_3 = 2; i_3 < 12;i_3 += 1)
        {
            var_20 |= -33;
            var_21 *= (~(((arr_12 [i_3 - 1] [i_3 - 1] [i_2 - 1]) ? 2769811952 : var_14)));
            var_22 = (max(var_22, (arr_1 [i_2])));
        }
        var_23 = ((max(1, ((18446744073709551615 ? 1 : 1627432536)))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        arr_15 [i_4] = (3 ? (((32 ? 33 : 4294967295))) : 17827771231930330700);
        var_24 = (((arr_8 [i_4]) || (arr_9 [12])));
        var_25 = (((arr_10 [i_4] [8] [8]) ? 30 : (arr_0 [i_4])));
        arr_16 [i_4] [i_4] &= -18446744073709551589;
    }
    var_26 = 18446744073709551611;
    #pragma endscop
}
