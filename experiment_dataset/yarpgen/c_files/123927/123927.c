/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123927
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] [i_1] [i_2] = var_2;
                            arr_12 [i_2] [i_2] [i_2] [i_3] = (((arr_2 [i_0 + 1] [i_0 + 1] [7]) || (((var_3 ? 18446744073709551615 : (arr_5 [i_0] [i_1] [i_3]))))));

                            for (int i_4 = 1; i_4 < 9;i_4 += 1) /* same iter space */
                            {
                                arr_15 [i_0] [i_3] |= var_8;
                                arr_16 [i_2] [i_1] [i_2] = (((max((var_2 < var_9), (arr_14 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [i_0] [i_0 + 1]))) - (((var_1 ? ((max((arr_9 [i_3] [i_2] [i_2] [i_4] [i_4] [i_1]), var_5))) : (var_7 >= var_0))))));
                                arr_17 [i_0 + 1] [i_2] [i_2] [i_3] [i_4] = ((min(1, 469762048)));
                            }
                            for (int i_5 = 1; i_5 < 9;i_5 += 1) /* same iter space */
                            {
                                arr_20 [i_0] [i_1] [i_1] [i_1] [i_5 - 1] &= (max((max(var_8, (arr_8 [i_0] [i_0] [i_1] [i_2] [i_3] [i_2]))), (arr_4 [i_5 - 1] [i_3] [i_2] [i_1])));
                                arr_21 [i_2] [i_0] = (((((var_2 ? (min(-469762049, var_6)) : -1))) ? (arr_13 [i_0] [i_5] [i_2] [i_2] [i_2] [i_3] [i_3]) : (((-(min(var_1, -469762049)))))));
                                var_13 = arr_0 [i_1];
                            }
                            for (int i_6 = 0; i_6 < 1;i_6 += 1)
                            {
                                var_14 += (arr_3 [i_0] [i_1] [i_1]);
                                arr_24 [i_6] [i_3] [i_3] [i_0] &= (min((min((arr_3 [i_0 + 1] [i_2] [i_2]), var_11)), (var_9 / var_6)));
                                var_15 = (max(var_15, (max(26332, (arr_18 [i_6] [i_1] [i_1] [i_0 + 1])))));
                                var_16 = ((min(var_7, (-231190040 ^ 26332))));
                                var_17 = (((((~((max(238, var_1)))))) < (((469762070 & (arr_19 [i_0] [i_2] [i_2 - 2] [5] [i_2]))))));
                            }
                            for (int i_7 = 0; i_7 < 10;i_7 += 1)
                            {
                                arr_28 [i_0 + 1] [i_1] [i_2 - 1] [i_3] [i_2] = (max((arr_4 [i_0] [i_1] [i_2 - 1] [i_7]), (arr_8 [i_0] [i_0 + 1] [i_2] [i_3] [i_7] [i_2])));
                                var_18 = (((min((min(18, var_3)), var_8))) && ((((((arr_2 [i_7] [i_2] [i_0]) / var_2)) * (!var_11)))));
                                arr_29 [i_0] [i_2] [i_3] [i_3] [i_7] = var_3;
                            }
                            var_19 = (((((((!(arr_14 [i_3] [i_3] [i_2] [i_0] [i_0] [i_0] [i_0]))) ? var_3 : (arr_6 [i_2] [i_2 - 1] [i_0 + 1])))) ? (max(-17620, 469762066)) : ((((((arr_8 [i_0] [i_1] [1] [i_3] [i_0] [i_3]) ? var_0 : (arr_0 [i_0 + 1])))) ? var_6 : (!var_4)))));
                            var_20 = min((((var_9 >= var_1) + ((var_6 ? (arr_4 [i_0] [i_1] [i_2] [i_3]) : 204)))), ((4653483034582949618 ? (arr_22 [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1]) : (var_12 <= var_1))));
                        }
                    }
                }
                var_21 = (max(var_21, ((max(((((arr_23 [i_0]) || var_11))), var_3)))));
            }
        }
    }
    var_22 = var_12;
    var_23 = (min(((~(~var_9))), (var_2 << var_1)));
    var_24 = max(((((var_12 ? var_7 : var_1)) >> (((max(var_2, var_4)) - 146)))), var_1);
    #pragma endscop
}
