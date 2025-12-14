/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103876
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= var_13;
    var_15 += (!0);
    var_16 = (min((((((max(22454, 2674824192))) >= ((var_13 ? var_1 : var_8))))), ((~(min(2674824192, 22435))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_17 = var_1;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_18 += ((((((((~(arr_7 [i_0] [i_0] [9] [2])))) ? ((min(-22452, 22435))) : (~var_8)))) & ((-32749 ? ((min(var_13, var_2))) : 1620143103))));
                                var_19 = (min((((!(arr_4 [i_3 - 1] [i_3 + 2] [i_4])))), 2653717163));
                            }
                        }
                    }
                }
                var_20 = ((min((arr_13 [i_0] [6] [i_0] [i_1] [i_1] [i_1] [i_1]), 7)));
            }
        }
    }
    var_21 = var_12;
    #pragma endscop
}
