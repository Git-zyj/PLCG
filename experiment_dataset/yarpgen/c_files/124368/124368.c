/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124368
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
                arr_4 [i_0] = max((((((~(arr_0 [13] [1])))) ? 1425537778 : (((arr_2 [i_1]) % -1425537779)))), ((~((max((arr_0 [i_0] [9]), -80))))));
                var_14 = ((((((22739 ? -1425537779 : 2)) / 2054482932)) >> (((max(((~(arr_2 [12]))), (~-1425537779))) - 1425537777))));

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        arr_11 [i_0] [i_1] [i_1] [i_3] [i_3] = 253;
                        var_15 = (min(var_15, ((max(((0 ? (min(1425537778, 20947)) : 2)), ((-(arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
                        var_16 *= 1425537778;
                        arr_12 [i_0] [i_0] [i_0] [i_3] = (max((min((!-1425537779), (arr_6 [i_0] [i_1] [i_2] [i_3]))), ((-(max(var_8, (arr_6 [i_0] [i_1] [i_2] [i_3])))))));
                    }
                    arr_13 [3] [i_0] = ((0 | ((-158 ? (((arr_9 [i_0] [i_0] [i_0] [3] [i_2]) / 98)) : (arr_5 [i_0] [i_0] [i_2])))));
                }
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    arr_16 [i_4] [i_1] [i_0] [i_4] = ((-(((arr_6 [i_4] [i_4] [i_4] [0]) | 52118))));
                    var_17 = ((!((min(1, (arr_14 [i_4] [i_4]))))));
                    var_18 = ((~((1425537778 ^ (arr_8 [i_4])))));
                    var_19 = (arr_14 [i_4] [i_4]);
                }
                var_20 |= (arr_6 [1] [i_0] [12] [i_1]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            {
                arr_24 [4] &= ((-((-(arr_17 [i_5])))));
                var_21 = ((((min((arr_23 [i_5] [i_5]), 31795))) ? ((1425537778 ? (arr_23 [i_5] [i_5]) : (arr_23 [i_5] [i_5]))) : ((-(arr_23 [i_5] [i_5])))));
                arr_25 [i_5] [i_5] = (max((((arr_20 [i_5]) ? ((9134 ? 20771 : (arr_22 [i_5]))) : ((max((arr_20 [i_5]), var_4))))), (max(-80, 1425537779))));

                /* vectorizable */
                for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
                {
                    arr_30 [i_5] [i_6] [i_6] = ((((16 ? 1457168977 : (arr_20 [i_5]))) % (arr_22 [i_5])));
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 21;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 22;i_9 += 1)
                        {
                            {
                                arr_36 [i_5] [i_5] [13] [i_7] [i_7] [i_8] [i_9] = (((~22739) <= (~-20337)));
                                arr_37 [i_5] [i_5] [i_6] [i_7] [i_8] [i_5] = (((~var_11) == ((-23723 ? (arr_23 [i_7] [i_5]) : 624666060))));
                                var_22 += (arr_33 [i_9] [i_9] [i_9] [i_6]);
                            }
                        }
                    }
                    var_23 = (-1687860899 || 43297);
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 22;i_11 += 1)
                        {
                            {
                                var_24 = arr_31 [i_5] [i_6] [i_7] [i_10] [i_11] [i_11];
                                var_25 = ((((arr_23 [i_5] [i_5]) < (arr_33 [i_5] [i_6] [i_5] [i_11]))));
                            }
                        }
                    }
                }
                for (int i_12 = 0; i_12 < 22;i_12 += 1) /* same iter space */
                {
                    arr_46 [i_5] [i_5] [i_12] [i_5] = ((((min(94, (arr_42 [i_5] [i_5] [i_6] [i_6] [i_12]))))));
                    arr_47 [i_6] [i_5] [i_5] [6] = (max((min(-5767, ((2053583388 ? var_3 : (arr_27 [i_5] [i_5] [i_5] [i_5]))))), (((((min(var_2, 255))) || (~-22740))))));
                    var_26 = (5301 <= 486209214);
                }
                /* vectorizable */
                for (int i_13 = 0; i_13 < 22;i_13 += 1)
                {
                    var_27 = (!(((-(arr_33 [6] [i_5] [i_5] [i_5])))));
                    arr_51 [i_5] [i_6] [i_13] [i_5] = (arr_34 [i_5] [i_13] [i_13] [17] [i_6] [12]);
                    var_28 = (((!var_13) ? (arr_39 [i_5] [i_5] [i_6] [i_5]) : ((((arr_32 [i_5] [i_6]) >= (arr_22 [i_5]))))));
                }
            }
        }
    }
    #pragma endscop
}
