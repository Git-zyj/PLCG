/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131031
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_13 [5] [i_3] [i_2] [i_3] [1] [8] = var_9;
                                arr_14 [i_4] [i_3] [i_2 + 2] [i_1] [i_0] = min(-3563, ((-(61955 <= var_9))));
                                arr_15 [i_0] [i_0] [1] [4] [2] = (min(((min((var_7 && 61955), 61973))), ((1 >> (61967 - 61956)))));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        arr_18 [i_5] [i_5] = ((var_11 <= (((var_7 <= (arr_11 [i_0 - 3] [i_1] [1] [i_5]))))));
                        arr_19 [i_5] [i_0] [i_2] [i_1] [i_0] |= ((((((13 || (arr_8 [i_2 - 1] [i_0 + 1] [i_0]))))) != (23 + var_0)));
                    }
                }

                for (int i_6 = 1; i_6 < 16;i_6 += 1)
                {
                    arr_22 [i_0] [i_1] [i_6 - 1] [i_6 + 1] = arr_17 [i_0] [i_6] [i_1] [i_0] [i_0 - 3] [i_0];
                    arr_23 [i_6] = (arr_12 [i_0] [8] [i_0] [i_0] [i_0]);

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        arr_26 [i_6 + 1] = (-(((arr_20 [i_0] [i_6 - 1] [i_7]) | var_8)));
                        arr_27 [i_6] = 62390;
                        arr_28 [i_7] = 61838;
                    }
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        arr_31 [i_0] [i_1] [10] [i_1] = var_0;
                        arr_32 [8] [2] &= (!var_1);
                        arr_33 [i_0] [i_8] = ((((!(arr_24 [i_0] [i_0] [i_0] [i_6 - 1] [i_0]))) ? ((-(arr_17 [i_0] [i_1] [i_6] [i_8] [i_8] [i_0]))) : ((((((var_3 ? (arr_7 [i_0] [i_1] [i_6] [i_1]) : var_3))) ? ((((arr_29 [4] [i_8] [i_6] [6]) < 2429168352))) : (var_1 <= 718190799))))));
                    }
                    for (int i_9 = 0; i_9 < 17;i_9 += 1)
                    {
                        arr_36 [3] [i_6] |= 18;
                        arr_37 [i_0] [i_1] [i_6 - 1] [i_9] = ((((-67 + 2147483647) >> (((5711197888585092961 % 15983) - 10198)))));
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 17;i_10 += 1)
                    {
                        arr_40 [i_0] [i_0] [i_0] [i_0] = var_7;
                        arr_41 [i_0] [i_1] [i_6] [i_6 - 1] [i_6 - 1] = (((-718190822 + 2147483647) << (var_8 - 1)));
                    }
                }
            }
        }
    }
    #pragma endscop
}
