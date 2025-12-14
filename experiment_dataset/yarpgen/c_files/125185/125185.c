/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125185
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, ((((var_5 != 1) ^ 4611650834055299072)))));
    var_11 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    arr_9 [i_2] |= (1 > 1);
                    var_12 = (arr_8 [i_2]);
                }
                for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
                {
                    arr_12 [20] [i_0] [i_0] [i_0] = (-199441618 * 1);
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            {
                                var_13 = (arr_10 [i_0] [i_1] [i_1] [i_0]);
                                arr_17 [i_5] [i_0] [i_1] = (arr_5 [i_0] [i_0] [i_3] [i_4]);
                                var_14 = 1;
                                arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] = var_8;
                                var_15 = ((1 << (-8791915736230282669 + 8791915736230282681)));
                            }
                        }
                    }
                    var_16 = 8791915736230282669;
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            {
                                var_17 = (1 % 1);
                                var_18 = (arr_7 [i_1 + 4] [i_1 + 4] [15]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 2; i_9 < 20;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 20;i_10 += 1)
                        {
                            {
                                var_19 = (-127 - 1);
                                var_20 |= 1;
                                arr_29 [i_0] [i_0] [i_0] [i_0] [i_9] [i_10] = (-16 | 1);
                                var_21 = (((0 + (arr_14 [i_1] [1] [i_1]))));
                            }
                        }
                    }
                    var_22 |= var_2;
                }
                var_23 += ((-8791915736230282676 ? -8791915736230282661 : -8791915736230282670));
                arr_30 [i_0] = 686828486;
            }
        }
    }
    #pragma endscop
}
