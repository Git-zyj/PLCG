/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182320
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= ((1 && ((((min(var_11, -16))) < 3390780138696378955))));
    var_15 = var_13;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (((arr_2 [6]) ? var_4 : var_4));
        var_16 = (((arr_0 [i_0]) ? var_2 : var_8));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_17 = (max(var_17, (arr_5 [i_1])));

        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            var_18 *= (((arr_1 [i_2]) >> 11));
            var_19 = var_12;
        }
        arr_10 [i_1] = (var_13 ^ var_11);
        arr_11 [i_1] = ((var_0 >> ((((-19 ? -3778281550422006548 : 130560)) + 3778281550422006553))));
    }
    #pragma endscop
}
