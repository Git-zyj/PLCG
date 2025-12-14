/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154629
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_5;
    var_17 += (((-((var_4 ? var_2 : var_1)))) & (((-2147483647 - 1) | var_2)));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = ((max(-2761108999276753991, (min(2147483637, 36024398972452864)))) + (((min(var_14, -2761108999276754006)) & (var_4 & 2147483647))));
        var_19 = var_5;
        var_20 *= ((((max(((-382132740 ? (arr_2 [i_0]) : var_11)), ((54381 ? 1 : (arr_2 [i_0])))))) ? ((~(arr_2 [i_0]))) : ((((-13237228026053344885 == (arr_2 [19])))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = (((135480960 && -1849917771) ? (39713 != -382132742) : (~382132739)));

        for (int i_2 = 3; i_2 < 23;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                var_21 ^= ((var_9 ? -3655670017612081985 : (((arr_12 [i_1] [i_1] [i_1]) - 3))));
                arr_13 [i_1] [i_1] |= (((arr_10 [i_3] [12]) ? (arr_10 [i_2 - 2] [i_1]) : 1971026850));
            }
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                arr_16 [i_2] [i_2 - 2] = (382132739 || -1361634938);
                var_22 = 2147483647;
                var_23 = (4384737193104542033 | -453124848);
            }
            var_24 = var_2;
        }
    }
    #pragma endscop
}
