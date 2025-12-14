/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163090
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 12;i_2 += 1)
            {
                {
                    var_20 |= (((!var_17) ? 2877893459711674839 : -var_8));
                    var_21 &= (((var_15 ? ((var_0 ? (arr_2 [i_2]) : var_18)) : var_15)));
                    var_22 = var_11;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                var_23 &= (~(224 * 0));
                                var_24 = (((arr_6 [i_0 + 2]) | ((~(max((arr_10 [i_0] [i_0] [i_2] [i_2 + 2] [2]), var_0))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 17;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 19;i_9 += 1)
                        {
                            {
                                var_25 = -22;
                                var_26 = (arr_14 [i_5] [i_6]);
                            }
                        }
                    }
                    var_27 = (max((arr_21 [i_5] [i_6]), var_3));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 15;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 15;i_11 += 1)
        {
            {
                var_28 &= (((((+(min((arr_23 [1] [i_11] [i_10] [i_11] [i_10]), var_12))))) ? ((max((var_8 - var_3), (arr_16 [i_10])))) : ((-(arr_19 [10] [i_11])))));
                var_29 = (min((max(4294967276, 235)), (!var_1)));
                var_30 = (((arr_15 [i_10]) % (min((arr_14 [i_10] [12]), (arr_21 [4] [i_10])))));
            }
        }
    }
    #pragma endscop
}
