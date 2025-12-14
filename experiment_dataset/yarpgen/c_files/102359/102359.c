/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102359
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= var_8;

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_18 |= (((((var_2 >> (((arr_0 [12]) - 200))))) == (((((var_4 ? 63 : var_2))) ? ((((!(arr_0 [0]))))) : var_11))));

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_19 += (arr_3 [i_0] [6]);
            var_20 += (((arr_5 [i_0]) ? (min((arr_2 [i_0 + 3]), var_14)) : (((var_5 + var_13) ? (arr_4 [2] [2]) : ((var_8 ? 30 : var_7))))));
            var_21 = (min(var_21, (187 <= 232)));
        }
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        var_22 = (min(var_22, var_4));
        arr_9 [i_2] |= (arr_7 [i_2] [i_2]);
    }
    for (int i_3 = 1; i_3 < 9;i_3 += 1)
    {
        var_23 ^= ((((min(var_12, 68))) ? var_9 : ((max(var_10, (min((arr_0 [12]), var_0)))))));
        var_24 -= (-var_12 != var_10);
    }
    var_25 ^= ((((((var_0 == var_14) ? (var_13 ^ var_5) : (min(1379333933, var_14))))) || (~var_5)));
    #pragma endscop
}
