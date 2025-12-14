/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108353
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [i_0] [i_2] [i_1] = var_0;
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = var_4;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_18 = (((!var_12) * (((((~var_5) + 2147483647)) << (((~var_15) - 7204884966812512347))))));
                                arr_18 [i_0] [i_1] [i_2] [i_2] [i_0] = var_9;
                                arr_19 [i_0] [i_0] [i_1] [i_2] [i_5] [i_2] [i_0] = ((-var_3 + (!var_11)));
                            }
                        }
                    }
                    arr_20 [i_0] [i_0] [i_0] = ((-(-var_2 >= var_13)));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 18;i_8 += 1)
                        {
                            {
                                var_19 = (((14609549388746756631 * 0) > var_14));
                                arr_26 [i_0] [i_1] [i_0] = (~var_14);
                            }
                        }
                    }
                    var_20 = (min(var_20, var_14));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 11;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 11;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 11;i_11 += 1)
            {
                {
                    arr_35 [i_9] [i_10] [i_11] &= ((~((~(~var_9)))));
                    arr_36 [i_11] = var_12;
                    var_21 = ((var_4 != (((var_15 & var_1) - var_9))));
                }
            }
        }
    }
    var_22 = ((((-(var_7 & var_4))) <= var_9));
    #pragma endscop
}
