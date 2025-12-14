/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178741
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, var_13));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_21 = (arr_1 [i_0] [i_0]);

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_22 = (11961422802962654414 ? (((((arr_0 [i_1] [i_0]) + 2147483647)) >> (var_13 + 1038933147))) : (arr_1 [i_0] [i_0]));
            var_23 = var_9;
            arr_4 [i_1] [i_0] = ((0 ? 1 : (arr_1 [i_1] [i_0])));
        }
        for (int i_2 = 1; i_2 < 17;i_2 += 1)
        {
            var_24 = 2199019061248;
            var_25 = (((arr_6 [i_2] [i_2 + 1]) | var_18));
            arr_8 [i_0] = ((arr_1 [i_0] [i_2 + 1]) ? (arr_6 [i_0] [i_2 + 1]) : ((((arr_6 [i_0] [i_0]) > 6485321270746897214))));
        }
        for (int i_3 = 0; i_3 < 0;i_3 += 1)
        {
            var_26 = (var_3 * (arr_7 [i_3 + 1]));
            var_27 = (var_8 ? (arr_5 [i_3 + 1]) : 2122567313);
        }
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            var_28 ^= (arr_2 [i_0]);
            var_29 = (max(var_29, ((((arr_11 [i_0] [i_0] [i_4]) || 18446744073709551615)))));
        }
    }
    for (int i_5 = 1; i_5 < 1;i_5 += 1)
    {
        var_30 = var_14;
        var_31 = ((((arr_5 [i_5]) ? 1 : 1)) & -1);
        var_32 = (max((arr_12 [i_5] [i_5] [i_5]), -6485321270746897184));
        arr_17 [i_5] = (arr_15 [i_5]);
        var_33 = ((((((15190 ? (arr_2 [i_5]) : (arr_0 [i_5] [10]))))) ? (arr_2 [i_5 - 1]) : 55123));
    }
    #pragma endscop
}
