/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104788
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_2] [i_0] [i_2] [i_4] = (max(((((max(var_2, var_5))) ? var_6 : var_8)), ((max(var_1, (~var_4))))));
                                var_13 = ((max(((min(var_5, var_3)), var_8))));
                                var_14 = (min(((-(~var_5))), var_7));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_15 = (max(((((~var_12) ? (~var_4) : (!var_3)))), (max(((var_6 ? var_2 : var_10)), (!var_5)))));
                                var_16 = ((((max(var_5, var_6))) ? ((min(var_3, var_3))) : (~var_4)));
                            }
                        }
                    }
                    var_17 = (min(var_8, (((~((max(var_0, var_9))))))));
                    var_18 = ((~((~(min(var_1, var_4))))));
                }
            }
        }
    }
    var_19 = ((-(min((~var_12), ((var_0 ? var_6 : var_10))))));
    /* LoopNest 3 */
    for (int i_7 = 4; i_7 < 11;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 13;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 12;i_9 += 1)
            {
                {
                    var_20 = (max(var_20, ((max(((max(var_9, var_2))), (max(var_10, (max(var_1, var_2)))))))));
                    var_21 = (min(var_21, ((max(var_4, var_1)))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 14;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 12;i_11 += 1)
                        {
                            {
                                arr_30 [i_11] = ((-(max(var_6, var_4))));
                                arr_31 [i_11] [i_11] [i_11] = (~-var_9);
                                arr_32 [i_7] [i_8] [i_11] [i_10] [i_11 + 2] = -var_5;
                                var_22 = ((+(min((~var_2), var_4))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 3; i_12 < 10;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 14;i_13 += 1)
                        {
                            {
                                arr_37 [i_7] [i_7] [i_9] [i_12] [i_7] = ((max((min(var_1, var_11), ((min(var_6, var_0)))))));
                                var_23 = (((((-(max(var_7, var_2))))) ? ((min(((min(var_0, var_11))), (min(var_0, var_9))))) : ((min(var_3, var_2)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
