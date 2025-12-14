/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170814
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_1] = (((~var_18) < var_5));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_10 [i_0 - 1] [i_1 - 1] [16] [i_3] = 207112701;
                            arr_11 [i_0] [i_1] [i_2] [i_3] = (arr_9 [i_0 - 3]);
                            var_20 |= 0;
                            arr_12 [i_0] [i_1] [1] = var_3;
                        }
                    }
                }
            }
        }
    }
    var_21 &= var_18;
    var_22 |= var_11;
    /* LoopNest 3 */
    for (int i_4 = 4; i_4 < 8;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                {
                    arr_20 [i_4] [i_5] [i_6] = (arr_14 [i_4] [i_4 - 2]);
                    var_23 = (max(var_23, (((((((((arr_13 [i_4]) <= (arr_9 [9]))) ? (arr_19 [i_4] [i_5] [i_6] [i_6]) : var_2))) ? (~-470) : (arr_17 [i_4] [i_4] [9] [i_6]))))));

                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        var_24 *= -var_17;
                        arr_24 [i_4] [i_7] [i_6] [i_5] [i_4] |= (var_14 ? (((-(9568 * 1)))) : var_14);
                    }
                    arr_25 [i_4] [8] [i_6] = var_6;
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            {
                                var_25 &= (arr_0 [i_6]);
                                var_26 = var_18;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
