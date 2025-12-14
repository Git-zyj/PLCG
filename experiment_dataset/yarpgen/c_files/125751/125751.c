/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125751
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, var_5));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_17 = (min(4294967284, ((((arr_12 [i_4]) < 11)))));
                                arr_13 [i_0] &= (arr_12 [i_0 - 1]);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 22;i_6 += 1)
                    {
                        {
                            var_18 = var_6;
                            var_19 = ((var_0 ? 817987337 : ((max((arr_18 [i_1 + 1] [i_5] [i_6] [i_6 - 2] [i_6 - 1]), (arr_8 [i_1] [i_6]))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 4; i_7 < 21;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        {
                            var_20 *= (arr_7 [i_0] [6]);
                            var_21 -= (arr_21 [i_7 + 1] [i_7 - 2] [i_7 + 2]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 23;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        {
                            var_22 = (var_14 ? (min((((arr_6 [i_1 + 1] [i_1 - 3]) ^ 3387658294)), (arr_14 [i_0] [i_1 - 2] [i_9] [0]))) : var_9);
                            var_23 = 511;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
