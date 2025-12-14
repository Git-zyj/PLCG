/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156148
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_5;
    var_13 = var_1;
    var_14 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_10 [i_0] = ((!(1 <= 0)));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_16 [i_2] [i_3] [i_0 + 1] [i_3] [i_4] [i_1 - 2] |= max(718237749, -718237722);
                                arr_17 [i_0 - 1] [i_0] [i_0 + 3] [i_0] [i_0] = ((-(((arr_7 [i_4] [i_3 + 3] [i_1]) ? 718237722 : ((39337901 ? var_2 : -115))))));
                                arr_18 [i_0] = (!((((arr_7 [i_0 + 1] [i_0 - 1] [i_0 + 1]) ? (arr_7 [i_0 + 2] [i_1 - 3] [i_2]) : (arr_7 [i_0] [i_0] [i_2])))));
                                var_15 = (max(var_15, (arr_5 [i_0 - 1] [i_1])));
                                arr_19 [13] [9] [i_2] [i_1 + 2] [12] &= min(((-(arr_1 [i_1 + 4] [i_0 + 3]))), (~var_8));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_26 [i_6] [0] [i_6] [i_5] [i_6] = (2219294618700126880 != 138);
                                var_16 ^= ((-(((!(arr_13 [i_0 - 1] [i_0 + 2] [i_0 + 1] [9]))))));
                                var_17 ^= (max((arr_12 [i_1 + 1] [i_0 + 3] [i_0 - 1] [i_5]), (min((arr_12 [i_1 - 3] [i_0] [i_0 + 1] [i_2]), var_10))));
                                arr_27 [i_1] [i_6] [i_2] [i_6] [i_0 + 1] = (718237722 ? 4294967291 : 718237747);
                                arr_28 [i_1] [i_6] = (arr_20 [i_6] [i_6] [i_6] [i_6] [i_6] [13]);
                            }
                        }
                    }

                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        var_18 ^= (!-32);
                        var_19 = var_0;
                        var_20 = (min(var_20, ((((((-(arr_14 [i_0 + 2] [i_0 + 3] [i_0 - 1] [i_0 + 2] [i_0 + 2])))) && (arr_14 [i_1 - 3] [i_2] [i_1 - 3] [i_1 - 3] [i_0 + 2]))))));
                        arr_32 [i_0] [i_1] [7] [i_2] [i_7] [i_7] = ((((arr_8 [i_7] [i_7] [6]) ? (arr_11 [i_0] [i_2]) : (arr_8 [i_7] [i_2] [i_0 + 1]))));
                        arr_33 [i_0 + 2] [i_0 + 2] [i_2] [i_7] = var_2;
                    }
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        var_21 = -var_5;
                        var_22 = var_1;
                    }
                }
            }
        }
    }
    var_23 = var_4;
    #pragma endscop
}
