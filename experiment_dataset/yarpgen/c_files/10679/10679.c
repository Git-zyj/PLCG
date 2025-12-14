/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10679
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
                {
                    arr_9 [i_1] [i_1] [i_1 - 1] [i_2] = (arr_2 [i_1]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_15 = (max(var_15, ((max((max(7582604875751708867, 27)), ((((((min((arr_5 [i_2]), var_9)))) * (min(2790098904, 0))))))))));
                                var_16 = (min((max((arr_0 [i_0 - 2]), (arr_3 [i_1]))), (((!(arr_0 [i_0 - 2]))))));
                            }
                        }
                    }
                    arr_15 [i_0] [i_0 + 1] [i_1] = (33 | 8);
                }
                for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
                {
                    arr_19 [i_0 + 1] [i_1] [i_5] [i_1] = (min((min(var_1, (arr_3 [i_1]))), (((209 >> (1990727003 - 1990726976))))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 0;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            {
                                var_17 = (max(var_17, ((min((max((min((arr_11 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]), var_13)), (var_3 && var_1))), (arr_5 [i_5]))))));
                                var_18 ^= ((max(var_2, (arr_17 [i_7] [i_1 - 1] [i_6 + 1] [i_1]))));
                                arr_25 [i_1] = ((!((max((!var_12), (min((arr_10 [i_5] [i_5] [i_5] [i_5] [i_5]), (arr_22 [i_7] [i_6 + 1] [i_5] [i_1 - 1] [i_0]))))))));
                                arr_26 [i_1] [i_1] = (min((min((arr_22 [i_0] [i_0 + 1] [i_0 - 2] [i_1 - 1] [i_6 + 1]), (arr_22 [i_0 - 2] [i_0 - 2] [i_0 - 1] [i_1 - 1] [i_6 + 1]))), (((((((arr_22 [i_7] [i_6] [i_5] [i_1 - 1] [i_0]) || (arr_3 [i_1])))) <= var_0)))));
                                var_19 = ((-((-20466 ? (arr_12 [i_7] [i_1] [i_5] [i_1] [i_0 - 2]) : 9))));
                            }
                        }
                    }
                }
                for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
                {
                    arr_30 [i_1] [i_1] [i_1] [i_0] = ((var_9 && ((var_6 == (arr_1 [i_0 - 2])))));
                    arr_31 [i_1] = (max(((min(var_11, (arr_28 [i_8] [i_1] [i_0 - 1])))), (((((!(arr_18 [i_0 - 2]))) ? ((((arr_16 [i_0] [i_1] [i_8]) == (arr_21 [i_8] [i_1] [i_1] [i_1] [i_1] [i_0 - 1])))) : var_1)))));
                }
                arr_32 [i_1] = min((min((111 - 10416601265750639393), (~95))), (max((((var_0 && (arr_4 [i_1 - 1] [i_0])))), 10416601265750639406)));
            }
        }
    }
    #pragma endscop
}
