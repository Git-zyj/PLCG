/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174295
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_13 = ((-(arr_2 [i_0] [i_0])));
        var_14 = (arr_2 [i_0] [i_0]);
        var_15 -= (((arr_0 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_0 [9] [i_0])));
        var_16 = (max(var_16, (((!(arr_2 [i_0] [i_0]))))));
        var_17 = (11329 ? (arr_2 [i_0] [i_0]) : var_10);
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            var_18 = 8386560;
            arr_10 [i_1] [11] [i_2] = (((var_5 ? var_9 : var_10)));
            var_19 = (min(var_19, ((min(((max((arr_8 [i_1] [i_2]), var_2))), (((arr_5 [i_1]) ? var_2 : 5825513994371128370)))))));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            var_20 = (((~(arr_4 [i_1]))));
            var_21 = var_2;
            arr_13 [i_1] [8] = (arr_9 [i_3] [i_1]);
        }
        /* vectorizable */
        for (int i_4 = 2; i_4 < 22;i_4 += 1)
        {
            var_22 = (arr_11 [i_4 + 2] [i_4 - 1]);
            var_23 = 11329;
            var_24 = (((arr_16 [i_4] [6] [i_4 + 1]) ? (arr_16 [i_4 + 2] [i_4 - 2] [i_4 + 1]) : 54218));
        }
        var_25 = (max(var_25, 18446744073709551611));
        var_26 &= arr_3 [i_1];
    }
    var_27 = ((~((~(~179891125)))));
    var_28 = var_7;
    #pragma endscop
}
