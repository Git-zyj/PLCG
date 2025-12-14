/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15295
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((-(((~-1894645135) & var_14))));
    var_18 = var_16;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                var_19 = (min(var_11, (((arr_2 [i_0 - 1] [i_1 - 1] [i_1]) | (arr_2 [i_0] [i_0 - 1] [i_1])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_20 += ((!(((203 ? -1894645144 : (arr_2 [i_0 + 1] [i_0 - 1] [i_3]))))));
                            var_21 = (max(var_21, (arr_0 [i_0])));
                            var_22 = (min(var_22, ((((((-(arr_4 [i_2])))) ? (min(var_8, 1894645115)) : (((~(arr_8 [i_1] [4] [i_1 - 1] [i_3] [i_3])))))))));
                            arr_11 [i_0] [i_2] [i_2] [i_2] [i_2] [i_2] &= ((var_7 ? ((max(var_13, (arr_8 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_1 + 3])))) : -1894645123));
                        }
                    }
                }
                var_23 = ((((-((-(arr_4 [i_0]))))) - ((var_16 ? (arr_8 [i_0 + 1] [i_0 - 1] [i_0] [i_1] [i_1 + 2]) : 162))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        {
                            arr_17 [i_0] [i_5] [i_4] [8] [i_1] = 1807491077;
                            var_24 -= ((-(((var_9 != (arr_2 [i_0] [14] [i_5]))))));
                            var_25 = ((var_8 ? (((arr_3 [i_0] [i_1] [i_0]) ? (~13246714575618165846) : ((min((arr_1 [i_0]), (arr_7 [i_4])))))) : ((((arr_8 [i_4] [i_4] [i_1 - 2] [i_1 + 3] [i_0]) ? (arr_8 [i_1] [i_1 - 1] [i_1 - 2] [i_1] [i_1]) : 1)))));
                            arr_18 [i_1] [16] [23] [i_1] = ((((min((max(var_16, var_9)), (((!(arr_12 [i_0 - 1] [i_5]))))))) ? (((!(arr_5 [i_1] [i_1 + 1] [i_1] [i_1])))) : ((var_10 - (arr_16 [8] [i_0] [i_0 - 1] [i_1 - 1] [i_1])))));

                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
                            {
                                var_26 = (arr_1 [i_0 + 1]);
                                var_27 = (((arr_0 [i_0 - 1]) ? 10 : 6604917230494379041));
                            }
                            for (int i_7 = 0; i_7 < 25;i_7 += 1) /* same iter space */
                            {
                                arr_26 [i_7] [i_1] [i_1] [i_0 - 1] = (min(105, -1993766391));
                                arr_27 [i_0] [i_1] [i_1] [i_5] [i_1] = max((max((arr_12 [i_1 + 2] [i_0 + 1]), var_10)), (min((arr_9 [i_0 - 1] [i_1 - 2] [i_1 - 2] [i_0 + 1] [i_7] [i_0 + 1]), (arr_12 [i_1 - 2] [i_0 + 1]))));
                            }
                            for (int i_8 = 0; i_8 < 25;i_8 += 1) /* same iter space */
                            {
                                var_28 = ((-var_11 ? (max(var_0, var_9)) : (((~(((arr_0 [i_8]) >> (((arr_4 [i_0]) - 192279662)))))))));
                                arr_30 [i_1] = var_6;
                                var_29 -= (0 * 89);
                                arr_31 [i_1] [i_5] [i_1] [i_0] [i_0] = (arr_16 [i_1 + 3] [i_0 - 1] [i_0] [i_0 - 1] [i_0 + 1]);
                                var_30 = (min((arr_16 [i_0] [i_1] [i_4] [i_5] [i_8]), (arr_28 [12] [i_1] [i_4] [i_5] [i_8])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
