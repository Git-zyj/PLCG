/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178593
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    arr_8 [i_2] [i_2] [i_2] [1] = arr_3 [i_0] [i_0] [i_2];
                    arr_9 [i_2] [i_1] [i_1] [i_0] |= (((var_10 && (arr_5 [i_2 + 1]))) ? (max(var_13, (arr_0 [i_2 + 1]))) : (arr_7 [i_2 - 1] [i_2 + 1] [i_2 - 1]));
                }
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    arr_13 [i_0] [i_0] [i_1] [i_3] = var_12;
                    var_17 -= (((~var_5) ? (((arr_6 [i_0] [i_0]) ? (arr_6 [i_3] [i_1]) : (arr_6 [i_0] [i_3]))) : (~2585)));
                    arr_14 [i_0] [i_0] [i_0] [i_3] = (((min(0, 0)) == (((arr_4 [i_1]) ? var_5 : 18446744073709551613))));
                    arr_15 [i_3] [i_1] [i_0] [i_0] = ((((12128448934840135169 ? -2114970985492125021 : 0)) - (max((18446744073709551615 | 2566558818219255349), (((var_16 ? var_1 : (arr_12 [7] [i_1] [7]))))))));
                    var_18 -= (arr_1 [i_0]);
                }
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    arr_20 [i_0] [i_0] [2] = ((+((-(((arr_5 [4]) / (arr_19 [i_0] [i_1] [i_4] [10])))))));
                    arr_21 [i_1] = ((((!(arr_7 [i_0] [i_1] [i_4]))) ? var_9 : (max((((~(arr_6 [i_0] [4])))), (max(-3643112464173173583, 1))))));
                    arr_22 [11] [0] [i_4] [i_4] = (-180162679 ? ((-(arr_7 [i_0] [i_1] [i_4]))) : ((-(arr_7 [i_0] [i_1] [i_4]))));
                    arr_23 [i_0] [i_0] = (((~16) | 4294967295));
                }
                for (int i_5 = 1; i_5 < 13;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            {
                                var_19 = ((!((!((((arr_29 [i_0] [i_1] [i_5] [i_5] [i_7]) ? (arr_30 [i_0] [i_7] [i_5] [i_0] [i_5]) : var_9)))))));
                                arr_32 [i_0] [i_1] [i_7] [i_6] = (arr_2 [i_1] [i_5 + 1]);
                                arr_33 [i_7] = 4294967287;
                                var_20 = (~-12);
                            }
                        }
                    }
                    var_21 = (min(var_21, ((((arr_6 [i_1] [i_1]) ? (-2147483647 - 1) : (((max((arr_30 [i_0] [i_1] [i_5] [i_5] [i_1]), (arr_31 [i_5] [i_1]))) << (((arr_0 [i_5 + 1]) - 16011577789097127287)))))))));
                }
                arr_34 [i_0] [i_0] [i_0] = (((arr_5 [i_0]) >= (max(-427663051, (((var_4 ? var_12 : var_4)))))));
            }
        }
    }
    var_22 = var_1;
    #pragma endscop
}
