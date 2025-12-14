/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107496
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_0] [i_3] [i_4] [i_1] [i_1] = ((~(arr_12 [4] [i_4 - 2] [i_4 - 2] [5] [i_4] [i_4 - 1])));
                                arr_14 [i_0] [i_0] [i_2] [14] [12] &= ((~(((arr_6 [i_4 - 2] [12] [i_4 - 2]) ? (arr_6 [i_4 + 1] [6] [i_4 - 2]) : (arr_6 [i_4 - 1] [4] [i_4 - 2])))));
                            }
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    arr_18 [i_0] [i_0] [i_1] [i_0] = ((1 >= (1 * var_4)));
                    arr_19 [i_0] = ((-(((arr_4 [i_5]) + 87))));
                }
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    var_17 = var_4;
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 1;i_8 += 1)
                        {
                            {
                                arr_29 [i_0] [i_1] [i_0] = (((((-(arr_0 [i_8 - 1])))) ? var_7 : 0));
                                arr_30 [i_0] [i_1] [i_6] [i_0] [i_8] = (!58);
                            }
                        }
                    }

                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        var_18 -= ((((arr_3 [1]) ? -1051990848 : (arr_2 [i_1] [i_9]))));
                        arr_33 [i_0] [i_0] = (arr_21 [i_9] [i_0] [i_0]);
                        var_19 = (arr_23 [i_0]);
                        var_20 = (min(((-(arr_12 [i_0] [i_1] [i_6] [i_9] [i_1] [5]))), ((-var_13 ? var_16 : ((~(arr_4 [6])))))));
                    }
                }
            }
        }
    }
    var_21 = (max(58, 4095));
    var_22 += (((min(var_7, var_12)) != (((!((min(var_3, var_6))))))));
    #pragma endscop
}
