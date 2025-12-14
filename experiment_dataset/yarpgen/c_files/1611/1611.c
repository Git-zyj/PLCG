/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1611
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= 2199023255424;
    var_18 = 2609478739;
    var_19 ^= var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    arr_9 [i_2 + 1] [i_1] [i_0] = 56608;

                    for (int i_3 = 4; i_3 < 9;i_3 += 1)
                    {
                        arr_14 [9] [9] [i_2] [9] [i_3] = (((arr_5 [i_1 + 3] [i_1]) | (arr_13 [i_1] [i_1] [i_3 + 1])));

                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            arr_17 [i_0] [i_0] = ((((arr_11 [i_0] [i_2] [i_3]) / (arr_4 [i_0] [i_1 + 3]))));
                            var_20 = (arr_0 [i_2]);
                            var_21 *= ((((arr_2 [i_4] [i_3]) || (arr_16 [i_0] [i_1 - 1] [0] [i_0]))));
                        }
                        for (int i_5 = 1; i_5 < 9;i_5 += 1)
                        {
                            var_22 = (arr_20 [i_0]);
                            arr_21 [i_1] [i_1] [1] [1] [1] [i_1 + 4] [1] = (((((arr_0 [i_2]) || (arr_0 [i_2 - 1]))) || 25));
                        }
                        arr_22 [i_0] [i_1] [i_2] [i_3 + 2] = (((arr_3 [i_0]) ? (((arr_11 [i_0] [i_1 + 4] [i_2]) ? (arr_19 [i_0] [i_0] [i_0] [i_1] [i_0]) : (arr_20 [i_0]))) : ((((arr_0 [0]) | (arr_6 [5] [i_1] [1] [i_3]))))));
                        arr_23 [i_1] [i_2] [i_1] [i_0] = ((((arr_8 [i_0] [i_0] [i_0] [i_0]) ? (arr_12 [9] [9]) : (arr_3 [i_0]))));
                    }
                    arr_24 [i_0] [i_0] [i_0] [i_0] = (((arr_7 [i_0] [i_1] [i_2 - 1] [i_1]) ? (arr_19 [i_0] [i_1 + 4] [i_1] [i_2] [6]) : (arr_20 [i_1])));
                    arr_25 [i_0] [i_0] [i_2] = (((15 | 0) | (arr_20 [i_0])));
                    arr_26 [i_0] [i_0] [i_0] = ((((((arr_16 [i_1 + 4] [i_1 + 4] [i_1 + 4] [i_1 + 3]) * (arr_7 [i_0] [i_0] [i_1 - 1] [i_2 + 1])))) | (arr_16 [i_0] [i_0] [5] [10])));
                }
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 10;i_7 += 1)
                    {
                        for (int i_8 = 4; i_8 < 10;i_8 += 1)
                        {
                            {
                                var_23 *= (arr_4 [i_0] [i_0]);
                                var_24 = (((arr_30 [i_1]) || (((arr_29 [i_0]) || (arr_18 [i_0] [i_1 + 1] [i_6] [i_7] [i_1 + 1])))));
                                arr_35 [i_6] = (1685488551 | 51061);
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = (((574208952489738240 || 57) | 1457448873));
    #pragma endscop
}
