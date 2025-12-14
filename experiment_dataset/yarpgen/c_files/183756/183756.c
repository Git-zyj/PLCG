/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183756
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {
                arr_6 [i_0] = var_11;
                var_16 = (~(min((~var_7), 9223372036854775797)));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 24;i_4 += 1)
                            {
                                var_17 |= var_9;
                                var_18 = (((-(arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                            }
                            for (int i_5 = 1; i_5 < 21;i_5 += 1)
                            {
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_3] [i_0] = (arr_16 [i_3]);
                                arr_18 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((((((min(111, 111))) && ((min(var_15, 9223372036854775797))))) ? (((17319 ? var_2 : var_14))) : ((min((arr_1 [i_1 - 2] [i_2 + 1]), (max(-2762104391195521273, (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
                                arr_19 [i_0] [i_0] [i_3] [i_0] [i_0] = (arr_12 [i_0] [i_3] [i_0] [i_3] [i_0]);
                            }
                            for (int i_6 = 2; i_6 < 22;i_6 += 1)
                            {
                                var_19 += (((((var_13 ? (arr_15 [i_0] [i_0] [i_6]) : -2762104391195521273))) && (((var_12 ? (arr_12 [i_0] [i_6] [i_6] [i_0] [i_6]) : -659730516661219300)))));
                                arr_24 [i_2] [i_2] [i_2] [i_3] = (~var_1);
                            }
                            arr_25 [i_3] [i_3] [i_0] [i_3] [i_0] = (arr_3 [i_0] [i_0] [i_0]);
                        }
                    }
                }
                var_20 -= (max(((-((659730516661219306 ? -10724 : var_4)))), ((-659730516661219298 ? -659730516661219295 : 659730516661219294))));
            }
        }
    }
    var_21 = 252;
    #pragma endscop
}
