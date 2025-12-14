/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147064
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_19 = ((~((15582292357092911867 ? (((var_18 ? var_1 : 1))) : (arr_0 [i_0])))));
                                var_20 = ((~(((arr_7 [i_0] [i_0] [i_0]) ? (((-(arr_7 [i_3] [i_3] [i_3])))) : (((arr_8 [i_0] [i_0] [i_0] [i_3]) ? var_6 : (arr_11 [i_1] [0] [i_3] [i_3])))))));
                                var_21 &= ((var_2 ? (((arr_0 [i_3]) ? ((-3 ? var_16 : 124)) : (arr_5 [i_0] [i_0] [7] [12]))) : ((((~var_2) + ((var_0 ? 10754 : 119)))))));
                                var_22 = ((((3105683928 ? (((arr_9 [19] [i_3] [i_2] [i_2] [i_0] [i_0]) ? var_4 : var_8)) : -15582292357092911867)) * (((-(181 * 63))))));
                                var_23 = ((var_0 ? 133 : ((((max(var_3, (arr_14 [i_0] [i_1] [i_2] [i_3] [i_4])))) ? 15582292357092911867 : (arr_11 [i_0] [i_0] [6] [i_3])))));
                            }
                        }
                    }
                    var_24 -= ((((arr_0 [21]) >= var_1)));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                var_25 = -1023;
                                var_26 -= ((max(195, (arr_11 [i_0] [i_1] [22] [i_0]))));
                                var_27 = (min(-15582292357092911879, (((-(arr_18 [i_6] [i_5] [i_5] [i_5] [i_2] [i_1] [22]))))));
                                var_28 = (min(((min((((!(arr_9 [i_6] [i_1] [i_2] [i_5] [1] [i_6])))), (arr_1 [i_0] [19])))), ((-(arr_6 [i_0])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            {
                                var_29 *= (arr_22 [i_0] [i_2] [0] [22]);
                                var_30 -= (min(2682004174798421683, ((((((76 ? 4294966273 : (arr_1 [i_0] [i_7])))) ? (((var_0 ? 112 : (arr_19 [i_0] [i_1] [i_1] [i_2] [i_1])))) : (arr_4 [i_0] [i_1]))))));
                            }
                        }
                    }
                    var_31 = (max(var_31, (arr_12 [i_0] [i_0] [i_0] [i_0])));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 24;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 24;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 24;i_13 += 1)
                        {
                            {
                                var_32 = (((((arr_25 [i_11]) == (arr_6 [11])))));
                                var_33 -= ((-105 & (((arr_8 [i_12] [2] [i_11] [i_13]) ? (((arr_21 [i_13] [i_10]) * var_2)) : var_8))));
                                var_34 = ((((25154 ? ((max(4095, 185))) : 44)) == (arr_15 [i_13] [i_12] [i_9] [15] [i_9])));
                                var_35 = ((((~(arr_18 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] [i_13])))) & var_6);
                            }
                        }
                    }
                }
                var_36 = 1;
                var_37 = var_15;
            }
        }
    }
    #pragma endscop
}
