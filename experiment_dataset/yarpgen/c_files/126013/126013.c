/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126013
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += (min(var_6, (var_6 && var_2)));
    var_12 ^= (((((var_1 + 2147483647) << (var_6 - 35292)))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_13 -= (((((min(6463820386680989130, 30)))) ? (min((arr_0 [13] [i_0]), (arr_1 [i_0]))) : (((arr_2 [i_0]) ? var_1 : (arr_2 [i_0])))));
        var_14 -= var_7;
        arr_3 [i_0] = ((((((((26667 ? (arr_0 [i_0] [i_0]) : 1))) ? ((var_5 ? 6942459530107147337 : var_10)) : 1))) ? (((arr_2 [i_0]) & (arr_2 [i_0]))) : ((((((var_6 ? var_5 : -6463820386680989132))) && 6463820386680989131)))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = (((((arr_2 [11]) / (arr_2 [i_1]))) * (arr_1 [i_1])));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
        {
            var_15 = ((var_0 ? -6463820386680989132 : 125));
            arr_9 [15] [i_1] [i_1] = (((((1 ? (arr_8 [i_1] [i_1] [i_1]) : (arr_7 [i_1])))) ? var_0 : (175 || var_9)));
            arr_10 [i_2] [i_1] = (--58);
        }
        for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
        {
            arr_15 [i_1] &= ((1 ? (arr_5 [i_3]) : ((80 ? (arr_5 [i_1]) : var_9))));
            arr_16 [i_1] [i_1] = (min((var_4 && 0), (arr_12 [i_3])));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
        {
            var_16 ^= ((-7841584187156566658 ? -117 : 6463820386680989132));
            arr_20 [1] [i_1] [8] = (arr_18 [i_1] [i_4]);
            arr_21 [i_4] = ((59 ? 7841584187156566658 : 1396219482972773358));
        }
    }
    #pragma endscop
}
