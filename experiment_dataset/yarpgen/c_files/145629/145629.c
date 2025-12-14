/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145629
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_12 = (((!(arr_8 [i_0] [i_0] [1] [17] [17]))));
                                var_13 |= ((1 ? (max(125, 1831183465)) : 125));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 1; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                arr_17 [16] [i_7] [i_6] [i_6] [i_0] [i_0] = (~-125);
                                var_14 ^= ((~(min((((arr_4 [i_7]) ? (arr_2 [i_1] [i_1] [i_6 + 1]) : (arr_0 [i_0]))), (((!(arr_5 [i_5]))))))));
                            }
                        }
                    }
                }
                var_15 *= ((((((((arr_12 [16] [16] [10] [i_0]) <= (arr_0 [i_0])))) != (min(1831183465, 1089346048))))) != (max((((arr_2 [i_0] [13] [13]) & -29663)), (arr_6 [i_0] [i_0] [i_0] [i_1] [i_1]))));
            }
        }
    }
    #pragma endscop
}
