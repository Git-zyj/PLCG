/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181231
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_12;
    var_18 = ((var_14 << (var_1 - 12950)));
    var_19 |= (var_6 ^ var_7);

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = ((((var_0 ? 16383 : ((var_4 ? var_6 : 13422621540996599025)))) - (((-(var_6 - 0))))));
        var_20 = 58256;
        arr_4 [i_0] [i_0] = (((((-2248 ? var_16 : (arr_1 [i_0] [i_0]))))) ? var_16 : (((((26600 ? var_7 : var_16))) ^ ((var_7 ? (arr_1 [8] [i_0]) : var_13)))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_21 = (((((var_7 ? (((var_11 ? var_15 : var_10))) : (arr_5 [i_1])))) ? ((58254 ? 16383 : 18446744073709551615)) : ((max(var_6, ((26607 ? var_1 : var_8)))))));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            var_22 = (min(var_22, ((((arr_9 [i_1] [i_1]) && (((var_11 ? 2699396038197799811 : var_10))))))));
            var_23 = (((var_0 != -3063994874267653231) ? var_0 : var_13));
            var_24 = (max(var_24, (var_8 * var_9)));
            arr_11 [i_1] [i_2] [i_1] = 16;
            arr_12 [i_1] [i_1] [i_2] = 60;
        }
        /* vectorizable */
        for (int i_3 = 1; i_3 < 18;i_3 += 1) /* same iter space */
        {
            var_25 |= (((58256 ? 3733353650 : 6016235736328720146)));
            arr_15 [i_3] = (((arr_14 [i_3]) ? var_0 : (arr_14 [i_3])));
            var_26 ^= var_14;
        }
        for (int i_4 = 1; i_4 < 18;i_4 += 1) /* same iter space */
        {
            var_27 = (arr_7 [i_4 + 2] [i_4 - 1]);
            var_28 |= ((var_16 ? (((var_6 < var_14) - (arr_8 [i_4 + 2] [i_4 + 2]))) : ((((var_12 < (arr_17 [i_4 - 1] [i_4 + 1])))))));
            arr_18 [i_1] [i_1] [i_4 + 1] = (((~52304) ^ (min((((4294967295 ? 28413 : var_14))), var_3))));
        }
        var_29 = (min(var_29, 38913));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_30 = 4103669319;
        arr_21 [i_5] = (i_5 % 2 == 0) ? ((2098073658 << (((arr_20 [i_5]) - 84)))) : ((2098073658 << (((((arr_20 [i_5]) - 84)) - 34161))));
    }
    #pragma endscop
}
