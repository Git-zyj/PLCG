/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += ((var_10 * (((max(var_1, var_8))))));
    var_14 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_15 = (((((!var_5) ? (arr_2 [i_1 + 1] [1]) : ((((arr_0 [i_0]) != (arr_1 [3])))))) + (-112 < var_1)));
                var_16 = (((((arr_5 [i_1 + 1]) + (arr_1 [i_1 - 1])))) ? ((-(arr_7 [i_1 + 1]))) : ((((-118 >= (arr_4 [i_1 - 1]))))));
                var_17 = (max(var_17, (((+(max((var_7 / 887559939623276647), (((-(arr_1 [10])))))))))));

                for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
                {
                    var_18 = var_11;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_19 = (min(var_19, ((min(((var_6 ? 48 : (arr_6 [i_2])), ((min(var_6, -110)))))))));
                                arr_15 [i_0] [i_2] [i_0] [i_0] [i_0] = (max(((!(arr_13 [i_1 + 1] [i_2]))), ((var_6 && (arr_13 [i_1 + 1] [i_2])))));
                                var_20 = (min(var_20, (((-(arr_4 [i_4 - 1]))))));
                                var_21 = (max(var_21, (((((((-((((arr_11 [i_0] [i_1] [i_3] [i_0] [7] [1]) != (arr_3 [i_0] [i_0])))))) + 2147483647)) >> (((((var_1 ? var_12 : (arr_10 [i_0] [6] [i_2] [i_2])))) ? ((((arr_3 [i_0] [6]) || var_11))) : var_6)))))));
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                {
                    var_22 -= (min(51574, 12284812272840159509));
                    var_23 = (min((((((arr_12 [i_5] [i_1] [8] [i_1] [8] [i_1]) + 21981)) >> (((((arr_3 [i_1] [7]) ? 3836278535 : (arr_5 [i_0]))) - 3836278511)))), (max(((min(var_10, 583728879))), (arr_6 [i_1 - 1])))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            {
                                var_24 -= (min(((-(arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))), -6773));
                                arr_23 [i_0] [i_0] [i_5] [i_0] [i_0] = var_10;
                                var_25 *= ((((max((min(-117, 1)), (((108 > (arr_17 [i_7] [i_0] [i_0] [i_0]))))))) & -583728880));
                                var_26 *= ((-((((!(arr_7 [i_7]))) ? (((-887559939623276648 ? (arr_20 [i_0] [i_1] [9] [9] [i_1]) : var_8))) : 104))));
                            }
                        }
                    }
                    arr_24 [i_0] [i_1] [i_5] [i_5] = var_1;
                }
                var_27 = (((((~(((arr_8 [i_1] [i_0] [i_0]) ? 12010 : (arr_19 [4] [i_0] [i_0] [i_0])))))) ^ (var_7 | var_2)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 14;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            {
                var_28 |= min(192, 11071092391350174560);
                var_29 *= (min((min(var_2, (((arr_25 [i_9]) ? var_1 : (arr_27 [i_9] [i_8]))))), (((var_8 <= (arr_30 [10] [i_8] [i_8]))))));
            }
        }
    }
    #pragma endscop
}
