/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132792
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_16 = (!41);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_17 = var_3;
                                arr_13 [i_4] [i_1] [i_1] [10] = (arr_12 [i_4] [i_4 + 1] [i_4 + 1] [i_3 - 1] [i_4] [i_4] [i_3 - 1]);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                var_18 = (min(((((~(arr_6 [i_5] [i_8] [7]))) / (max(-903780322750638098, (arr_7 [i_5]))))), (arr_15 [i_6 - 1] [i_6 + 1])));
                                arr_26 [i_5] [i_6 - 1] [i_7] [i_8] [i_8] = ((~(((max(var_2, (arr_4 [i_8] [1] [i_6 + 1])))))));
                                arr_27 [i_5] [i_5] [4] [i_8] = (max(102, (arr_2 [i_5])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 20;i_11 += 1)
                        {
                            {
                                var_19 = (max(10878037792887896810, 1));
                                arr_35 [i_11] = (max(((((arr_19 [i_5] [2] [i_7] [i_10]) ? (105 / var_7) : var_3))), ((-13745495442247231570 * ((max(var_2, (arr_15 [i_11] [i_11]))))))));
                                arr_36 [i_5] [i_5] [i_7] [i_10] [i_10] [i_11] [i_11] = (min(-5201975799683710390, -22722));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_12 = 1; i_12 < 9;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 11;i_13 += 1)
        {
            for (int i_14 = 2; i_14 < 10;i_14 += 1)
            {
                {
                    arr_45 [i_12] = -67;
                    /* LoopNest 2 */
                    for (int i_15 = 0; i_15 < 11;i_15 += 1)
                    {
                        for (int i_16 = 0; i_16 < 11;i_16 += 1)
                        {
                            {
                                arr_52 [i_12 + 1] [i_12] [i_12] = (arr_20 [i_12 + 2]);
                                arr_53 [i_12] [i_13] [6] [i_15] [i_15] = (max(7970493645567428651, 1787189647));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
