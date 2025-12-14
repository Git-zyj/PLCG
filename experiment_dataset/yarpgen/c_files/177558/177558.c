/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177558
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                var_20 &= var_4;
                var_21 = 8927324970080402726;

                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    var_22 = ((55350 ? 10185 : 10205));
                    arr_8 [i_0] [i_1] [i_1 + 1] [i_2] = 1;
                    var_23 += 55349;
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_24 = var_16;
                                arr_16 [i_1] [i_1 + 2] [i_1] [i_1 - 3] = (((~1) ? (((55350 && 1) ? ((1 ? var_14 : 0)) : ((0 ? (-2147483647 - 1) : 1)))) : 1));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 2; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 11;i_7 += 1)
                        {
                            {
                                var_25 = ((((((0 << (var_10 - 38859))))) << 0));
                                var_26 = var_9;
                                var_27 = var_11;
                                arr_28 [i_0] [i_1] [i_0] [i_1] [i_0] &= ((1 ? 0 : 1));
                            }
                        }
                    }
                }
            }
        }
    }
    var_28 = var_8;
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 18;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 18;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 15;i_10 += 1)
            {
                {
                    var_29 = 1;
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 18;i_12 += 1)
                        {
                            {
                                var_30 ^= ((((1 * var_2) << 1)));
                                var_31 &= 65523;
                                arr_43 [i_10] [i_12] [i_11] [i_10] [i_9] [i_10] = (((((~((var_13 ? var_14 : var_17))))) ? var_1 : (1 || var_5)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
