/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134334
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] = (arr_3 [i_1 + 1]);
                    arr_8 [i_2] [i_1] [9] = ((max(var_13, 28)));
                    arr_9 [i_1] [i_1 + 2] = 27;
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        var_17 = (max(var_17, ((min((((arr_2 [i_3]) ? var_1 : var_6)), (((var_0 || (arr_0 [i_3])))))))));
        var_18 = (min(var_18, (~7815976379219343919)));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 0;i_7 += 1)
                        {
                            {
                                arr_22 [i_3] [8] [i_3] [0] [i_7] = (((((-((7815976379219343919 ? 7815976379219343926 : (arr_10 [i_3])))))) ? ((max(-7815976379219343919, var_6))) : (((43 / 66) ? var_11 : -1789218860322211287))));
                                arr_23 [i_3] [i_3] [i_5] [i_6] [4] = ((min(29109, (arr_21 [i_5] [i_5] [i_7 + 1] [i_7 + 1] [i_7]))));
                                var_19 *= var_11;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 9;i_9 += 1)
                        {
                            {
                                arr_29 [i_3] [4] [i_3] = -1789218860322211287;
                                arr_30 [i_8] [i_8] [i_8] [i_8] [i_8] [7] = (((2980817685360713584 - var_13) > (-1789218860322211300 * var_12)));
                                var_20 = -1395724920;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
