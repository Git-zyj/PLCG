/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185089
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_13 = (((((((-35 + 2147483647) << (var_9 - 3538938814859072656)))) ? (min(var_3, var_2)) : (max(var_8, var_3)))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_7 [15] [i_0] = (min((max(-2888161425792330169, (arr_1 [i_0 - 1]))), (((!(arr_1 [i_0 + 1]))))));
            var_14 = (max(var_14, (((min((max(2888161425792330162, 2888161425792330164)), -6185997878256858409))))));
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        var_15 |= (((arr_1 [i_0 - 1]) ? ((max((arr_5 [i_0] [i_0 - 1] [i_0]), (arr_6 [i_2] [i_2])))) : (arr_5 [i_3] [11] [i_1])));
                        var_16 = (max(1466068311, 26806));
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
        {

            for (int i_5 = 2; i_5 < 15;i_5 += 1)
            {
                var_17 = ((var_8 ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 + 1])));
                arr_17 [i_0] [i_0] [i_5] = 1;
                var_18 -= var_6;
            }
            for (int i_6 = 2; i_6 < 17;i_6 += 1)
            {
                var_19 = 65528;
                var_20 = (arr_21 [i_0 + 1]);
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        {
                            arr_27 [i_4] [i_0] = (((((-1135006932 ? (arr_2 [i_0]) : (arr_11 [i_0] [i_0])))) ? (arr_25 [i_8] [i_6 - 2] [i_6 - 1] [i_0 - 1] [i_0 - 1]) : ((((arr_1 [i_4]) > var_12)))));
                            var_21 *= ((!(arr_18 [i_8] [i_6] [i_8])));
                            var_22 = -35;
                            arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_14 [i_0] [6] [6]);
                            arr_29 [i_0] = (var_5 ? -1466068311 : (((arr_10 [2] [2] [2]) << (-1466068328 + 1466068347))));
                        }
                    }
                }
            }
            arr_30 [i_0] = ((arr_10 [i_0 + 1] [i_0 + 1] [i_0 + 1]) <= (arr_10 [i_0 + 1] [i_0 + 1] [i_0 + 1]));
        }
        for (int i_9 = 0; i_9 < 18;i_9 += 1) /* same iter space */
        {
            var_23 = max((((max((arr_9 [9] [12] [i_0] [12]), (arr_23 [9] [9] [i_9]))) + (arr_32 [i_0] [i_9] [i_0 + 1]))), (((((max(27693, -2888161425792330164))) ? (min((arr_0 [i_9] [i_9]), var_8)) : (arr_8 [i_9] [i_0] [i_0] [i_0])))));
            arr_33 [i_0] = ((5 ? 1 : -2888161425792330175));
            arr_34 [15] [i_9] [i_0] = 1;
            var_24 = (max((arr_2 [i_0]), (max((arr_32 [i_0 + 1] [i_0] [i_0 + 1]), 128))));
        }
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            var_25 = var_1;
            arr_37 [0] [0] |= ((min((var_6 & -2888161425792330166), 14720)));
        }
    }
    for (int i_11 = 0; i_11 < 23;i_11 += 1)
    {
        arr_41 [i_11] = ((!((!(arr_38 [i_11])))));
        var_26 *= arr_38 [i_11];
        arr_42 [i_11] = max((~-1466068328), ((1767270994 >> ((((1 ? 4294967295 : 262142)) - 4294967285)))));
        var_27 = ((((max(((-5280307118589507362 ? var_12 : (arr_39 [i_11] [1]))), (((1466068314 > (arr_40 [i_11]))))))) ? ((max((~-1466068312), (max(var_11, (arr_40 [i_11])))))) : 243));
    }
    var_28 = (!(((((max(var_8, var_4))) ? var_8 : var_2))));
    #pragma endscop
}
