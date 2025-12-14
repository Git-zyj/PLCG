/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158304
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
                {
                    var_14 = (min(var_14, ((((arr_8 [i_0] [i_1]) >> (((~var_11) - 59)))))));
                    arr_9 [i_0] [i_1] [i_2] = (!5395790134739502939);
                    var_15 = (max(var_15, (((-(arr_0 [i_0]))))));
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                {
                    arr_13 [i_3] = (((arr_2 [i_0]) ? (((!(2305843009213693951 && var_4)))) : (((!(arr_12 [i_3]))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            {
                                var_16 = ((((max(1666250306, 0))) ? (arr_0 [i_3]) : ((-(arr_0 [i_0])))));
                                var_17 = ((!((((arr_4 [i_5] [i_3]) ? (arr_15 [i_0] [i_1]) : (arr_4 [i_0] [i_1]))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                arr_28 [i_3] [i_1] = (+(max((arr_27 [i_3] [i_3] [i_6 + 1] [i_6 - 2] [i_6 - 1] [i_6 + 1] [i_6]), var_2)));
                                var_18 = (~-21);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                var_19 = (max(var_19, (((((max((arr_29 [i_1] [i_3] [i_8] [i_9]), (arr_29 [i_8] [i_3] [i_1] [i_0])))) ? (((((arr_23 [i_0] [i_1] [i_3] [i_8] [i_9]) < var_5)))) : (arr_15 [i_0] [i_0]))))));
                                var_20 = (min(var_20, (((((((arr_16 [i_0] [i_1] [i_3] [i_8]) ? 14603410135340365645 : var_1))) ? var_12 : (~-5954932408468170960))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 18;i_11 += 1)
                        {
                            {
                                var_21 = (max((arr_30 [i_11] [i_3] [i_3] [i_1] [i_3] [i_0]), (((90 ? var_6 : (arr_27 [i_10] [i_1] [i_3] [i_10] [i_11] [i_10] [i_0]))))));
                                arr_38 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] [i_3] = (30720 != 77);
                                arr_39 [i_0] [i_3] [i_0] [i_0] [i_0] [i_0] = ((+((max((arr_25 [i_11] [i_10] [i_3] [i_1] [i_1] [i_0]), (arr_25 [i_11] [i_10] [i_3] [i_1] [i_0] [i_0]))))));
                            }
                        }
                    }
                }
                var_22 = arr_6 [i_0] [i_0] [i_0];
            }
        }
    }
    /* LoopNest 3 */
    for (int i_12 = 1; i_12 < 21;i_12 += 1)
    {
        for (int i_13 = 2; i_13 < 21;i_13 += 1)
        {
            for (int i_14 = 3; i_14 < 20;i_14 += 1)
            {
                {
                    arr_48 [i_12 + 2] [i_12 + 2] [i_12] = ((((((((4365364189389721738 ? var_8 : var_10))) ? ((122 - (arr_47 [i_13]))) : (arr_44 [i_12] [i_12 + 1])))) ? ((-(arr_43 [i_14 - 2] [i_12]))) : ((((var_0 | -110) < (max(-107, (arr_44 [i_12 - 1] [i_13]))))))));
                    var_23 = ((((((arr_42 [i_13 + 2] [i_13 - 1]) ? ((max(976944252901755837, -1627149064661804635))) : (50176 * 0)))) ? 16600 : (max((((var_10 / (arr_40 [i_12 + 1])))), 0))));
                }
            }
        }
    }
    var_24 ^= var_3;
    #pragma endscop
}
