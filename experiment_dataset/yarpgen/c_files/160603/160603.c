/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160603
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (-127 - 1);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_19 = (min((4925521793050446557 - 1), (((~(1 < 1))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_20 = (arr_5 [i_1] [i_0]);
                            arr_10 [i_0] [i_0] [i_0] [i_0] = (arr_4 [i_0] [i_2] [i_3]);
                            var_21 = (((((768 >= 159) && var_5)) ? (((((33 << (((arr_5 [i_0] [i_0]) - 1541343949))))) | (max(4294967295, var_5)))) : (((((max(1, 89))) ? (90 < 1) : (((!(arr_0 [i_1] [i_1])))))))));
                            var_22 = (((((arr_3 [i_0] [i_0]) ? (arr_0 [i_1] [i_1]) : -1997951533)) - (((((var_1 ? 197 : 1))) ? 1 : ((21962 ? 3392563738 : (arr_0 [i_1] [i_1])))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 4; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_17 [i_0] [i_0] [i_0] [i_1] [i_1] [i_5] [i_6] = 1;
                                var_23 = 4294967295;
                                arr_18 [i_0] [i_1] = (((((44155 ? (arr_12 [i_0]) : (arr_2 [i_5 + 1] [i_6])))) ? ((max((arr_3 [i_0 - 1] [i_0 - 1]), (arr_4 [i_0 - 1] [i_0 + 1] [i_0 - 1])))) : 197));
                            }
                        }
                    }
                }

                /* vectorizable */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    var_24 = (var_16 + 1808887794128230559);
                    arr_21 [i_0] [i_1] [i_1] [i_1] = 5;
                    var_25 = (((var_10 % var_16) ? (arr_3 [i_0 + 1] [i_1 + 1]) : ((var_16 ? 1 : 0))));
                    var_26 = var_4;
                    var_27 = (min(var_27, (arr_5 [i_0 + 1] [i_0 - 1])));
                }
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    var_28 = (2711255716724116913 ^ -2051973246643712623);
                    var_29 += var_1;
                    var_30 = (min((arr_9 [i_1 + 3] [i_1 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]), (!162)));
                }
            }
        }
    }
    var_31 = ((var_12 ? (((~var_7) - var_2)) : ((((223 < var_10) ? 47 : var_13)))));
    #pragma endscop
}
