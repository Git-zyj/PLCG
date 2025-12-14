/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153628
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_15 = (arr_0 [i_0]);
        var_16 ^= (((((!(arr_0 [i_0])))) << (((((((var_8 % (arr_1 [i_0])))) ^ 1572864)) - 1572858))));
        var_17 = (min(var_17, ((((min((arr_1 [i_0]), var_14)) > (((((arr_1 [i_0]) >= (((arr_0 [i_0]) >> (var_0 + 47))))))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_18 |= arr_2 [i_1];
        var_19 = (arr_1 [i_1]);
    }

    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        var_20 ^= (arr_5 [i_2] [i_2]);
        arr_8 [i_2] = (18446744073709551615 | 1572864);

        for (int i_3 = 2; i_3 < 11;i_3 += 1)
        {
            var_21 = (max((arr_7 [i_2] [i_2]), var_12));
            arr_11 [i_2] [i_2] = (arr_10 [i_2] [i_2]);
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            var_22 = var_12;
            arr_14 [i_4] [i_2] = (((arr_13 [i_2] [i_4]) | var_4));
        }
    }
    var_23 = (max((max(var_13, (max(var_12, var_0)))), (((-122 / var_12) & var_11))));

    for (int i_5 = 1; i_5 < 22;i_5 += 1)
    {
        var_24 = var_6;
        arr_18 [14] |= var_13;
        var_25 -= (arr_16 [4]);
        var_26 = var_2;
    }
    #pragma endscop
}
