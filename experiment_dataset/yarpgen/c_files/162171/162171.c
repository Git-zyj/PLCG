/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162171
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((((((var_5 ? var_0 : var_16))) ? ((min(-37, -542751585))) : ((var_18 ? var_12 : 4294967283))))) ? ((7265036641918143131 ? var_16 : 2606189032294175971)) : ((var_9 & ((var_9 ? var_15 : 9223372036854775807))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    var_21 = (((!-var_5) % (((((arr_4 [i_0] [i_2]) ? var_19 : var_13)) + 723042644))));
                    arr_9 [i_0] [i_0] [i_1] [i_0] = (((((((var_7 ? 7 : 6))) ? var_5 : ((min((arr_0 [i_1]), var_9)))))) ? (((+((max((arr_1 [i_0] [i_1]), 46)))))) : (arr_2 [i_0 + 1] [i_0 + 1] [14]));
                }
            }
        }
    }
    var_22 = (max(2731998782366018575, (((9223372036854775807 ? var_8 : (var_2 + var_5))))));
    var_23 = ((1 ? -71 : ((((min(var_9, var_10))) ? (~-78) : var_13))));

    for (int i_3 = 3; i_3 < 16;i_3 += 1)
    {

        /* vectorizable */
        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            arr_14 [1] [i_4] = (((((~(arr_13 [9] [i_4] [i_4])))) ? 9 : (arr_6 [i_3] [i_3 + 2])));
            var_24 = (min(var_24, (arr_10 [i_4])));
            var_25 += (arr_2 [9] [9] [9]);
            var_26 = (max(var_26, (arr_12 [i_3 + 1] [i_3 + 1])));
        }
        var_27 = (arr_7 [i_3 + 1] [i_3] [11] [i_3]);
    }
    for (int i_5 = 3; i_5 < 19;i_5 += 1)
    {
        var_28 += (((arr_16 [i_5]) ? (min((arr_15 [i_5 + 1]), ((var_5 ? 120 : 23401)))) : (((-var_13 + 2147483647) << (130 - 130)))));
        var_29 = (min((((arr_15 [i_5 + 4]) ? 723042633 : (arr_15 [i_5 + 2]))), (((!(arr_15 [i_5 - 2]))))));

        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
        {
            var_30 = var_3;
            arr_19 [i_6] = 18446744073709551615;
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
        {
            var_31 = (arr_15 [i_5]);
            var_32 = ((var_14 ? ((-1 ? (arr_18 [i_7]) : 9223372036854775807)) : ((var_12 ? var_5 : (arr_21 [i_5 + 1] [i_7])))));
            var_33 = ((117 ? -4779548064910337349 : (arr_20 [i_5 - 1] [i_5 + 1])));
        }
        arr_22 [i_5] [i_5] = ((((((var_11 < (arr_20 [i_5] [i_5]))))) ^ (((arr_18 [6]) ? (arr_18 [22]) : (arr_15 [i_5 - 2])))));
    }
    #pragma endscop
}
