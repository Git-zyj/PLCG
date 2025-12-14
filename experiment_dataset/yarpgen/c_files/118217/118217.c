/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118217
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_15 = ((((max(var_7, var_3))) ? (min(0, var_3)) : (max((!var_0), ((236 << (var_0 - 11899458276131638926)))))));
        arr_2 [i_0] = (min((((var_6 ? var_9 : var_7))), ((var_3 / (max(1, -5699932747227263381))))));
        arr_3 [i_0] &= 114;
        arr_4 [i_0] [i_0] = 1;
    }
    for (int i_1 = 2; i_1 < 13;i_1 += 1)
    {
        var_16 = (max(var_16, (((~((+(((arr_6 [i_1] [i_1]) / 20)))))))));

        /* vectorizable */
        for (int i_2 = 1; i_2 < 14;i_2 += 1)
        {
            var_17 = var_9;

            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                arr_12 [i_3] [i_3] [i_3] [i_2] = 37381;
                var_18 &= ((-(arr_5 [i_1 - 2])));
            }
        }
        arr_13 [i_1] [i_1] = ((-26113 ? 10967 : 0));
    }
    var_19 = ((((min(var_1, ((3 ? var_8 : var_4))))) || (((var_6 ? (1 != var_9) : (10966 << 15))))));
    var_20 = ((-var_10 ? (((min(var_8, var_11)) >> (var_6 - 134))) : var_8));
    var_21 = var_14;
    var_22 = ((-((((1 - var_1) <= 18446744073709551615)))));
    #pragma endscop
}
