/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14154
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((~(max((min(var_3, var_0)), (!17163091968)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_15 ^= (min((!var_10), ((-(arr_1 [i_0 - 3])))));
                var_16 = var_12;
            }
        }
    }

    for (int i_2 = 2; i_2 < 11;i_2 += 1)
    {
        var_17 *= (((~((min(var_5, (arr_1 [i_2])))))));
        var_18 = (max(var_18, ((max((((arr_0 [i_2 + 2] [i_2 + 3]) ? (arr_0 [i_2 + 2] [i_2 + 3]) : var_12)), ((~(!var_11))))))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        var_19 &= (~3539953141599591285);

        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            var_20 += (!var_8);
            var_21 = (((var_5 ? (arr_7 [7] [i_4]) : 18)));

            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                var_22 -= var_12;
                var_23 = (max(var_23, (arr_6 [i_3] [i_3])));
                var_24 = (max(var_24, (arr_8 [i_3])));
            }
            var_25 = (63 != -8618930199521931073);
        }
    }
    #pragma endscop
}
