/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170837
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_12 ^= (arr_4 [i_0]);

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    arr_9 [i_0] [i_1] [i_1] [i_0] = ((!((((arr_5 [i_2] [i_0]) ? var_10 : (arr_8 [i_0]))))));
                    arr_10 [i_0] [15] [i_1] [i_0] = var_10;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_13 = (((((573812952082057819 + var_11) + var_3)) >= (min((arr_13 [i_0] [5] [i_2] [i_2] [i_4] [1]), (arr_13 [i_0] [i_1] [i_2] [i_3] [i_3] [3])))));
                                arr_17 [i_0] [i_1] [i_2] [i_0] = (min((((-7 ? (arr_14 [i_0] [i_0] [i_0] [13] [i_0]) : (arr_1 [i_0])))), (((arr_5 [i_0] [i_0]) ? (arr_8 [i_0]) : (arr_5 [i_0] [i_0])))));
                                var_14 = (((max(1, (min(var_0, 511222183381837699))))) ? ((-(!var_11))) : 1);
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    var_15 = (min(var_15, (((min(((max((arr_16 [10] [10]), 183))), (min(var_9, 2305843009213661184))))))));

                    for (int i_6 = 1; i_6 < 21;i_6 += 1)
                    {
                        var_16 += (((-392 & -16174) >= ((((var_2 <= 4743450784448505148) >= var_1)))));
                        arr_23 [i_0] [i_6] [i_6 + 2] [i_0] [i_1] [i_0] = ((((min(6819, var_7))) + var_6));
                    }
                    var_17 = ((!((max((max(4743450784448505156, 72)), -70)))));
                    var_18 = ((!(4743450784448505158 > -67)));
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    arr_27 [1] [i_0] [i_7] = ((((((arr_2 [i_0]) ? var_9 : var_2))) ? (var_2 > var_4) : ((var_10 ? -43 : 1055478082))));
                    arr_28 [i_0] [i_0] [i_0] [22] = (arr_3 [i_7]);
                }
                var_19 ^= min((((!20794) + (arr_7 [i_0] [20] [i_1]))), 6819);
                var_20 = (max(var_20, (((((((arr_25 [i_0] [i_1] [i_1]) | (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) ? var_7 : ((((6824 ? 268435454 : 183)) + var_6)))))));
            }
        }
    }
    var_21 = var_0;
    var_22 ^= (min((max(var_7, var_1)), (((var_9 >> (var_9 - 3710118050))))));
    /* LoopNest 3 */
    for (int i_8 = 2; i_8 < 14;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 15;i_10 += 1)
            {
                {
                    var_23 = (max(((-67 ? (((arr_36 [i_8 - 2] [i_8 - 2] [i_8 - 2] [i_8]) ? (arr_19 [19] [i_9] [i_9]) : 4743450784448505140)) : (!7024337066152300978))), (((7368865158183728064 >= (arr_8 [i_8]))))));
                    arr_40 [i_8] = (i_8 % 2 == zero) ? (((((arr_35 [i_8] [i_8 - 1] [i_8 + 1]) >> (((arr_35 [i_8] [i_8 - 2] [i_8 - 1]) - 997428838)))))) : (((((arr_35 [i_8] [i_8 - 1] [i_8 + 1]) >> (((((arr_35 [i_8] [i_8 - 2] [i_8 - 1]) - 997428838)) + 957508050))))));
                    arr_41 [i_8] = (((min(((var_0 ? 20779 : -4743450784448505158)), var_11)) >= ((min((((var_10 ? (arr_18 [18]) : var_5))), (min((arr_11 [i_8] [i_8] [i_10] [i_10] [5]), (arr_8 [i_8]))))))));

                    for (int i_11 = 0; i_11 < 15;i_11 += 1)
                    {
                        arr_44 [i_11] [i_10] [i_8] [i_8] [i_8] = ((((max(-20779, (max((arr_0 [i_8] [i_10]), (arr_2 [i_8])))))) ? ((((arr_24 [21] [i_8]) ? (arr_2 [i_8]) : (arr_24 [i_9] [i_8])))) : ((((min(82, 32767))) ? (0 / 67108608) : ((~(arr_13 [i_8] [5] [i_8] [i_10] [i_10] [9])))))));
                        var_24 = (max(var_24, ((max(var_5, ((~(arr_24 [i_8 + 1] [i_10]))))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
