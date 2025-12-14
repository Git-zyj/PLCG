/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    var_16 = ((-((((((arr_6 [i_0] [i_0] [i_0]) / 4292695082))) ? -2272214 : (arr_5 [i_0] [i_0] [i_0])))));
                    arr_9 [i_2] [0] [i_0] [i_2] = ((!((!(arr_4 [i_0] [i_1] [i_2])))));
                    var_17 = (((arr_6 [i_0] [i_0] [10]) ? ((((((2272229 | (arr_8 [i_0] [i_2] [1])))) ? (arr_3 [i_2]) : (arr_3 [i_2])))) : 4292695056));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            {
                                var_18 = ((8388606 == (arr_15 [i_0] [i_1] [i_4])));
                                var_19 = (77 & 176);
                            }
                        }
                    }
                    var_20 = (((arr_15 [i_0] [i_0] [i_0]) == (arr_15 [i_0] [i_0] [i_0])));
                    var_21 = 208;
                }
                var_22 = ((((-(arr_10 [i_0] [i_0]))) * ((-(arr_10 [i_0] [i_1])))));
                var_23 = (~(((((4292695066 / (arr_13 [i_0] [i_0] [4] [i_1])))) ? 9456131866107266957 : 1954501418)));

                for (int i_6 = 1; i_6 < 10;i_6 += 1)
                {
                    var_24 = (max(var_24, (arr_1 [i_0])));
                    arr_18 [i_6] [i_6] = ((639108316 ? (arr_12 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_1] [8] [i_0]) : ((((((-(arr_1 [1]))) >= ((-(arr_17 [i_6])))))))));
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    arr_21 [i_0] [i_1] [i_0] = ((arr_0 [i_0] [i_7]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            {
                                var_25 = (((arr_3 [i_1]) ? (arr_14 [i_0] [i_0] [i_1] [i_7] [i_8] [i_9]) : (arr_3 [i_0])));
                                var_26 = ((arr_10 [i_1] [i_1]) ? (arr_10 [i_7] [i_9]) : (arr_24 [i_0] [i_0] [i_0] [i_0]));
                                arr_28 [i_0] [i_0] [i_0] = (arr_12 [i_9] [1] [i_0] [i_1] [i_0] [i_0]);
                                arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] = (((arr_3 [i_9]) & (arr_7 [i_7] [i_1] [i_7])));
                                var_27 = ((1592400904 ? (((arr_3 [i_0]) ? (arr_16 [i_0] [i_7] [2]) : -639108323)) : (arr_6 [i_9] [4] [i_9])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_28 = var_12;
    var_29 = ((~var_14) ? var_3 : var_2);
    #pragma endscop
}
