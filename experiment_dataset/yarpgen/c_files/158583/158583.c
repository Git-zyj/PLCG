/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158583
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((!((17994 || (var_5 && var_10)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    arr_7 [i_0] [i_0] = (((1 ? (arr_5 [i_0] [i_0] [i_0] [i_0]) : (arr_3 [i_0] [i_0]))));
                    arr_8 [i_2] = ((-(((!(arr_1 [14]))))));
                    arr_9 [i_0] = 11648;
                }
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    arr_12 [i_0] = 1086404560;
                    arr_13 [i_0] [i_1] [i_3] [6] = var_0;
                    arr_14 [6] = var_0;
                    arr_15 [i_0] = 11645;
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        {

                            for (int i_6 = 0; i_6 < 19;i_6 += 1)
                            {
                                arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] = (!((((arr_18 [i_0] [i_1 + 3] [1] [i_5]) ? (arr_18 [i_0] [i_1 + 3] [i_0] [i_5]) : 3327245542817750181))));
                                arr_24 [i_0] [i_0] = (min(var_4, ((((min((arr_11 [i_6]), (-2147483647 - 1)))) ? (((arr_17 [i_6] [i_6] [i_4]) & var_10)) : ((min((arr_5 [i_0] [i_4] [i_5] [i_6]), 59654)))))));
                                arr_25 [i_5] [i_1] [i_1] [i_1] &= ((((max(-3847, (arr_10 [i_4] [i_1 + 3] [i_1 + 1])))) ? ((((((!(arr_10 [6] [i_5] [i_4])))) != ((~(arr_6 [i_5] [i_5] [i_6])))))) : (65535 && -1)));
                            }
                            arr_26 [i_0] [i_5] [i_1] [i_4] [i_5] [i_5] = ((var_4 ? ((((-var_8 == (arr_19 [i_1 + 3] [i_1 + 3] [i_1]))))) : (((-408287076 ? 864008991 : (arr_5 [i_0] [i_0] [i_0] [i_5]))))));
                        }
                    }
                }
                arr_27 [i_0] = (max(((((arr_3 [i_0] [i_0]) ? 2147483647 : (arr_10 [i_0] [i_1 + 3] [i_0])))), (((0 ? -1717269297 : 1736483618)))));
                arr_28 [i_0] [i_0] = (min(((var_5 >> ((((arr_0 [i_1]) || 10494))))), (max(((((arr_16 [i_0]) >= (arr_21 [i_0] [i_0] [i_0] [i_0])))), (~0)))));
                arr_29 [6] = ((max(((6491 ? 142 : 5881)), (arr_16 [12]))));
            }
        }
    }
    #pragma endscop
}
