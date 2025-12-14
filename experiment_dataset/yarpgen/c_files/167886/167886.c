/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167886
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_12 = 288225978105200640;
                                var_13 = ((min(((var_7 << (458752 - 458740)), (!var_4)))));
                                var_14 -= ((var_1 && ((max(-70, var_3)))));
                                var_15 &= var_5;
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 10;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            {
                                var_16 = var_6;
                                var_17 = ((~((var_0 ? (arr_17 [i_6 + 1] [i_0] [i_0] [i_1 + 2]) : 4294508573))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = (min(-70, ((((var_1 ? var_1 : var_2)) - ((((-2147483647 - 1) ? -710721046 : 1)))))));
    var_19 = var_9;
    #pragma endscop
}
