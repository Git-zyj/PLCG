/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188531
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_20 = (min(var_20, (((((((arr_6 [i_2]) ? (arr_6 [i_2]) : (arr_6 [i_2])))) ? var_12 : ((((!(var_13 && var_0))))))))));
                    var_21 = (min(var_21, (((((min((arr_0 [i_1 - 1] [i_1 + 2]), (arr_0 [i_1 + 2] [i_1 + 1])))) ? (arr_0 [i_1 + 2] [i_1 + 1]) : (((arr_0 [i_1 + 1] [i_1 + 2]) ? var_8 : (arr_0 [i_1 + 2] [i_1 + 1]))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_22 = ((1501300549 ? 1076325383 : -52329677));
                                var_23 = (max((((var_9 >= var_16) ? var_2 : (min((arr_0 [i_0] [6]), var_8)))), ((((arr_10 [i_1] [i_4]) ? var_3 : var_8)))));
                                arr_14 [i_0] [i_4] [i_0] [i_3 + 1] [i_4] [21] [i_3] = min(var_10, ((-(arr_11 [i_1 - 1] [i_3 - 2]))));
                            }
                        }
                    }
                    var_24 = (min(var_24, ((max(((max(var_9, (arr_0 [i_1] [i_0])))), (((((var_9 ? var_5 : (arr_13 [i_0] [i_2] [i_0])))) ? ((var_19 ? var_12 : var_11)) : (((arr_11 [i_0] [i_0]) ? var_13 : (arr_5 [i_2]))))))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            {
                var_25 *= ((((((arr_13 [i_5 - 1] [i_6] [i_6]) ? (arr_13 [20] [i_6] [i_6]) : (((var_5 ? var_14 : var_9)))))) ? (arr_0 [i_5 - 1] [i_6]) : var_17));
                var_26 *= (((((((min(18446744073709551590, var_3))) ? (arr_17 [i_5] [i_5 - 1]) : ((var_1 ? (arr_10 [i_5] [i_6]) : var_10))))) >= ((((((arr_10 [i_5] [i_5]) ? (arr_0 [i_5 - 1] [i_6]) : (arr_3 [i_5 - 1])))) ? (((var_9 ? (arr_9 [i_5 - 1] [i_5] [i_5 - 1]) : (arr_8 [8] [i_5] [i_6] [i_6] [i_6] [i_6])))) : (max(var_16, var_4))))));
                var_27 = (max(var_27, (((((min((((!(arr_9 [i_6] [8] [i_5 - 1])))), (~var_4)))) ? ((((min((arr_3 [10]), var_2))) ? (((var_10 ? var_4 : (arr_16 [i_6])))) : (((arr_9 [i_6] [i_6] [1]) ? (arr_6 [i_6]) : (arr_11 [i_5] [i_6]))))) : (((((max(var_4, (arr_16 [i_5])))) ? (((arr_11 [i_5 - 1] [6]) ? (arr_0 [i_5] [i_6]) : (arr_8 [i_5] [i_5 - 1] [i_6] [i_5 - 1] [22] [10]))) : (((var_16 ? var_14 : var_15)))))))))));
                var_28 *= ((-((((((arr_16 [0]) ? (arr_15 [i_6]) : var_16))) ? (min(1, 1501300549)) : (min(var_11, var_8))))));
                var_29 = (((((~(arr_10 [i_5] [i_5 - 1])))) ? var_1 : (arr_1 [i_5 - 1])));
            }
        }
    }
    var_30 = var_2;
    #pragma endscop
}
