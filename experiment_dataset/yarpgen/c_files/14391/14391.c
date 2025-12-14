/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14391
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_11;
    var_17 = 589718751;
    var_18 = 613770901257508308;
    var_19 = (var_13 < var_12);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_2] = (+(((min((arr_11 [i_0] [i_0] [i_2] [i_3] [i_2]), (arr_10 [i_0] [i_1] [i_2] [i_2] [0] [i_2]))) | ((max(16383, -589718766))))));
                                arr_14 [i_0] [i_2] [i_2] [i_0] [i_4] = (589718741 + -16359);
                                arr_15 [i_1] [i_0] [2] [i_1] [i_0] [i_1] = ((589718736 / (min((((arr_6 [i_1] [i_1]) ? (arr_4 [10] [i_1]) : var_7)), (arr_3 [i_1] [i_1] [i_3])))));
                            }
                        }
                    }
                }
                arr_16 [i_0] [10] [i_1] &= 930203339;
                arr_17 [i_0] [i_1] [i_1 - 1] = 3301458597;
                arr_18 [14] [i_1] [i_1] = ((((((!(arr_6 [i_0] [22]))))) < var_8));
            }
        }
    }
    #pragma endscop
}
