/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188270
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_14;
    var_18 = var_13;

    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        var_19 -= ((((((max(-32624, var_14))) > ((17770393282893578804 ? var_14 : 21)))) ? ((((var_3 ? 676350790815972812 : (arr_1 [i_0]))) / 2862196387)) : ((((arr_1 [i_0 + 1]) ^ (min((arr_1 [1]), var_15)))))));
        var_20 ^= (min((max(var_4, (arr_0 [i_0 - 1] [i_0 - 1]))), (((arr_0 [i_0 - 2] [i_0 - 2]) + 13))));

        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            var_21 = (min(var_21, (((45631 ? 14317 : 676350790815972811)))));
            arr_5 [1] [i_1] [i_1] = (max((((min((arr_2 [i_0]), var_5)) << (((arr_1 [i_0]) + 1654725589014797002)))), 7002947152468545217));
            arr_6 [1] [i_1] [i_0] = ((-var_11 ? (((((arr_2 [i_0 - 2]) >= 9895503958309735712)))) : var_16));
        }
    }
    for (int i_2 = 2; i_2 < 8;i_2 += 1)
    {
        arr_9 [i_2] = ((min((arr_2 [i_2 + 1]), var_14)));
        arr_10 [i_2] = (((((var_12 >= var_16) / var_10)) ^ (((~((max(var_8, 0))))))));
    }
    /* vectorizable */
    for (int i_3 = 3; i_3 < 8;i_3 += 1)
    {
        var_22 *= (-10 + var_1);
        var_23 = (!1432770908);
    }
    for (int i_4 = 1; i_4 < 16;i_4 += 1)
    {
        var_24 = (arr_16 [i_4] [i_4]);
        arr_17 [i_4] = 3577688315;
    }
    var_25 &= ((var_4 ? var_15 : ((var_4 ? (max(18446744073709551590, var_9)) : var_13))));
    #pragma endscop
}
