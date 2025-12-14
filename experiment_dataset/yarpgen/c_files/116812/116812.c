/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116812
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= ((((((-68 ? var_4 : var_8)) / (min(var_3, var_5)))) >> (((min(((var_4 ? var_1 : 22385)), (1992340268 | 10681))) - 38382))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    var_11 = 15621363188240033470;

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_12 |= -6095097505216319198;
                        var_13 = (((((arr_1 [i_2]) ? (arr_4 [i_3] [i_3] [4] [i_3]) : 44811074932773531)) / var_4));
                    }
                    var_14 = (((((var_5 ? (arr_8 [i_1] [15] [4] [4]) : 131))) || (arr_1 [i_0 + 1])));
                    var_15 -= (((arr_5 [i_0 - 1] [i_0] [i_0]) ? (arr_3 [i_0] [i_0]) : (arr_5 [i_0 + 2] [i_0] [11])));
                    var_16 = -6095097505216319198;
                }

                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    var_17 *= (((((arr_8 [i_4] [15] [15] [i_0]) || 55633)) ? (arr_5 [i_0 + 2] [i_0 + 2] [i_0 + 2]) : (arr_11 [0])));
                    var_18 = (min(var_18, ((((((-((-6095097505216319198 ? var_7 : (arr_11 [i_0 - 3])))))) ? (arr_12 [i_4] [i_1] [i_0]) : (max((arr_9 [i_0 - 2] [15] [i_4]), ((-1 ? (arr_11 [i_4]) : var_9)))))))));
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        {
                            var_19 *= (arr_7 [i_1] [i_5] [i_1] [9] [i_0]);

                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 17;i_7 += 1)
                            {
                                arr_21 [i_5] [11] [16] [i_7] [16] = ((~(arr_20 [i_0 - 3] [i_0 - 3])));
                                var_20 -= ((~(arr_0 [i_0])));
                                var_21 = arr_5 [i_0 + 1] [i_0 + 1] [10];
                                arr_22 [i_0] [i_6] [i_5] [i_1] [i_6] [i_0] &= ((-(arr_17 [i_7] [i_5])));
                            }
                            arr_23 [i_0] [i_5] = ((var_2 + (min(-72, (max(119, 6047059068659132184))))));
                            arr_24 [i_1] [i_5] = (((!var_7) ? (~-3653387910640314680) : (arr_2 [i_0] [i_0] [i_5])));
                        }
                    }
                }
                var_22 = (max(var_22, (arr_3 [i_0] [2])));
                var_23 = ((((max((arr_12 [i_0 - 3] [i_0 - 3] [i_0 - 3]), (arr_11 [i_0 - 2])))) ? (((arr_12 [i_0 - 1] [i_0 - 1] [i_0]) ? (arr_12 [i_0 - 3] [i_1] [i_1]) : (arr_12 [i_0 - 2] [i_0 - 2] [i_0 - 2]))) : var_7));
            }
        }
    }
    #pragma endscop
}
