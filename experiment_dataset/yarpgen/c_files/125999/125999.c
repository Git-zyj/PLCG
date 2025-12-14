/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125999
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [i_0] = max((max(232, 112)), (((52 > (var_16 ^ 229)))));
                arr_5 [i_0] = max((min(233, var_8)), ((min((arr_1 [i_0]), (arr_1 [i_0])))));

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {

                    for (int i_3 = 4; i_3 < 19;i_3 += 1) /* same iter space */
                    {
                        arr_12 [i_0] [i_0] [i_1] [i_3] [i_2] |= ((((((arr_1 [i_1]) | (arr_1 [i_1])))) ? ((max((min(var_5, 196)), (arr_11 [i_0] [i_0] [i_0] [i_0])))) : (arr_11 [i_3 - 1] [i_3] [i_3 - 2] [i_3 - 2])));

                        for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
                        {
                            arr_17 [i_0] = (((var_8 != var_2) >> var_10));
                            arr_18 [1] [i_0] [i_3] [i_0] [i_4] [i_4] = (((max(var_16, (arr_13 [i_2] [i_2] [i_2] [i_2] [i_2]))) % (((((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]) || (arr_0 [i_0] [i_3 - 4])))))));
                            var_17 = (max((((!((204 <= (arr_3 [i_4] [i_4])))))), ((0 ^ ((max((arr_14 [i_0] [i_3] [i_0] [i_0] [1] [i_0]), 248)))))));
                            var_18 += (min(var_15, (((!(arr_8 [i_3 + 1] [i_3] [i_3 + 3] [i_3 - 4]))))));
                            var_19 -= (min((max((arr_9 [i_2] [8]), var_10)), 204));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
                        {
                            var_20 = ((113 ? (arr_13 [i_3 + 1] [i_3] [i_3] [i_3 + 2] [i_3 - 3]) : (((255 * (arr_11 [15] [i_1] [i_2] [i_5]))))));
                            arr_21 [i_3] [i_0] [i_0] = 172;
                            arr_22 [i_0] [i_1] = ((21 ? 4240717969 : 20));
                            arr_23 [i_1] [i_0] = ((0 >= (arr_13 [i_0] [i_1] [i_2] [i_2] [i_2])));
                            var_21 = 65534;
                        }
                        arr_24 [i_0] [i_0] [i_2] [i_3] = (max((((((3449351055 ? var_8 : 1306296482))) ? var_5 : 1510509194)), ((max(((var_1 ? (arr_2 [i_2]) : var_13)), (((arr_20 [i_0] [i_0] [i_1] [i_2] [i_3] [i_3]) + (arr_3 [i_0] [i_3]))))))));
                    }
                    for (int i_6 = 4; i_6 < 19;i_6 += 1) /* same iter space */
                    {
                        arr_27 [i_0] [i_0] [i_0] = 33;
                        var_22 = (max(var_22, (2988670814 ^ 52)));
                    }
                    arr_28 [i_1] &= max(127, var_14);
                    arr_29 [i_0] [i_1] [i_1] = (((max((arr_13 [i_0] [i_2] [i_2] [i_2] [i_1]), (arr_13 [i_0] [i_0] [i_2] [i_0] [i_0]))) < (var_6 | 3937076745)));
                }
                arr_30 [i_0] [i_0] = (min((((var_13 - var_12) - (max(4294967295, 121)))), 29));
            }
        }
    }
    var_23 = var_3;
    var_24 |= max((max(var_0, -3937076745)), ((max(var_5, ((0 ? 114 : 127))))));
    #pragma endscop
}
