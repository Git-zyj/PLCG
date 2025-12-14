/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105477
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_1] = ((8 ? 4 : 15397));

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    var_10 = (min(((9223372036854775807 ? 1845310767 : 9223372036854775807)), 18446744073709551615));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_11 = ((18446744073709551607 ? (arr_9 [i_4 + 1] [i_4 + 1] [i_4] [i_4 - 3] [i_4]) : (arr_2 [i_0])));
                                var_12 = (((arr_0 [i_4 - 2]) ? ((((arr_10 [i_0] [i_1] [i_1] [i_3] [i_4 - 3]) ? ((31 ? (arr_7 [i_0] [i_0] [i_4 - 1]) : (arr_7 [i_0] [7] [i_0]))) : (arr_13 [i_4 - 3] [i_4 + 2] [i_4 + 2] [i_4 - 2] [i_4 - 3] [i_4 - 3])))) : 72));
                            }
                        }
                    }
                }
                for (int i_5 = 3; i_5 < 8;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 0;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            {
                                arr_25 [i_0] [i_1] [i_5] [8] [i_0] &= (+-252);
                                arr_26 [i_1] [i_1] [i_5] [i_5] [i_5] [i_1] [i_5] |= (18446744073709551615 * 248);
                                var_13 = (((((((252 ? 247 : 4)) | (((arr_8 [i_0] [i_1] [i_5 - 2] [i_7]) | (arr_3 [i_6 + 1])))))) ? (min(((((arr_3 [0]) / (arr_3 [1])))), (((arr_8 [i_0] [i_5] [i_6] [10]) ? 3349339184649523756 : (arr_14 [i_0] [i_1] [6] [i_6] [i_7]))))) : (4294967295 > 3349339184649523756)));
                                arr_27 [i_1] [i_0] [i_0] [i_0] |= (~-9223372036854775796);
                            }
                        }
                    }
                    arr_28 [i_5] [i_5] = ((20 & ((((min((arr_22 [i_0] [i_0] [i_1] [i_5] [i_5]), -7090256511359009775)) != (arr_21 [i_0] [i_5 - 3] [i_5] [i_0]))))));
                    arr_29 [i_1] [i_5] [i_5 - 3] = (arr_22 [i_5 - 3] [i_5 + 1] [i_5 + 3] [8] [i_5 - 2]);
                }
                arr_30 [i_0] [i_1] [i_1] &= -9223372036854775807;
            }
        }
    }
    var_14 = (min(var_14, ((-((~((var_6 ? var_9 : var_7))))))));
    /* LoopNest 2 */
    for (int i_8 = 1; i_8 < 20;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 24;i_9 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_10 = 2; i_10 < 22;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 24;i_11 += 1)
                    {
                        {
                            var_15 = ((1 ? 0 : 18446744073709551601));
                            arr_44 [i_8] [i_8] [i_8 - 1] [i_8] &= (((max((arr_42 [i_8] [i_8] [i_8] [i_8] [i_8]), (~1166793422))) == 255));
                            arr_45 [i_11] [7] [i_8] [i_8] = (!255);
                        }
                    }
                }
                var_16 = (min(var_16, (((~(((!(arr_33 [i_8 + 3])))))))));
            }
        }
    }
    #pragma endscop
}
