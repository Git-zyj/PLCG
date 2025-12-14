/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142067
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_16 = var_11;
                            arr_10 [i_0 - 3] [i_0 - 2] [i_0] [i_1] = (!var_11);
                            var_17 = (max(var_17, -1630972334));
                            var_18 += 3614136744;
                            arr_11 [i_0 - 4] [i_1] [i_2 - 1] [i_2 + 2] [i_1] = var_15;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 0;i_6 += 1)
                        {
                            {
                                arr_21 [i_0] [i_1 - 2] [i_1] = 1;
                                arr_22 [i_0] [i_0] [i_0 - 1] [i_1] [i_0] [18] [i_0] = 760106397;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 2; i_7 < 19;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 20;i_9 += 1)
                {
                    for (int i_10 = 2; i_10 < 20;i_10 += 1)
                    {
                        {
                            var_19 = (max(var_19, (((1799012449 ? 2495954834 : var_11)))));
                            var_20 = (((((var_7 ? 1 : var_10))) ? (~var_4) : 2103267942));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 23;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 23;i_12 += 1)
                    {
                        {
                            arr_39 [i_8] [i_11] [i_8] [i_8] = ((1 ? ((((1 ? 1 : var_7)))) : var_6));
                            arr_40 [i_7 + 3] [i_8] [i_11] [i_11] [i_11] = 22;
                            var_21 = 1;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
