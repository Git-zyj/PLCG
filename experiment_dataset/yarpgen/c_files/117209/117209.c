/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117209
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_0] [i_0] [i_0] = ((((min(((var_5 ? 240 : (arr_6 [1] [7] [i_2]))), (((!(arr_11 [i_0] [8] [i_0]))))))) && ((min((arr_3 [i_0 + 1] [i_0]), (arr_3 [i_0 + 1] [i_0]))))));
                            var_10 = (max(var_10, (!-260096)));
                        }
                    }
                }
                arr_13 [i_0] [i_1] [i_0] = min(((~((260096 & (arr_3 [i_0] [i_0]))))), (arr_10 [i_0] [i_0] [i_0] [i_0] [i_1]));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 11;i_5 += 1)
        {
            {
                var_11 = (((260097 / 536870912) ? (max(-536870891, (((arr_15 [i_4] [i_5]) ? var_1 : -2490449025029765084)))) : ((536870400 / (arr_17 [i_4])))));

                for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 10;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 11;i_8 += 1)
                        {
                            {
                                var_12 = (arr_22 [i_4] [i_4] [i_6] [11]);
                                arr_25 [i_4] [i_5] [i_4] [i_7] [i_8 - 2] = ((~(3403004085202639121 || 33554432)));
                                arr_26 [i_4] = (((((var_0 ? (max(-5765525485191928580, var_3)) : (max((arr_18 [i_4] [i_6] [i_4]), 1065353216))))) ? ((min(-5765525485191928574, 5765525485191928570))) : (((+((((arr_14 [7]) > (arr_22 [i_4] [i_4] [i_4] [i_7])))))))));
                                var_13 = 4261412857;
                            }
                        }
                    }
                    var_14 -= (((!-2014639297) ? 36028797018947584 : ((min((5765525485191928579 / 493337327), (arr_19 [i_5] [i_5] [i_5 - 1]))))));
                }
                for (int i_9 = 0; i_9 < 12;i_9 += 1) /* same iter space */
                {
                    arr_29 [i_4] [i_5 + 1] [i_9] = (~var_3);
                    var_15 = (((max(493337311, 1)) / (((arr_19 [i_4] [i_5 - 1] [i_5 - 1]) | (arr_19 [i_4] [i_5 + 1] [i_5 + 1])))));
                }
            }
        }
    }
    var_16 = 32;
    #pragma endscop
}
