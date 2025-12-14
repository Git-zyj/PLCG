/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133173
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        var_17 *= (((arr_8 [i_3 - 1] [i_3 - 1]) / (arr_8 [i_3 + 3] [i_3 + 1])));
                        var_18 = (((arr_4 [i_1]) | (arr_5 [i_1] [i_2] [i_3] [19])));
                        var_19 *= ((-(arr_5 [8] [i_1 + 2] [i_2] [i_3])));
                    }
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        arr_14 [i_1] = ((min((max(var_3, 18446744073709551615)), (arr_3 [i_2] [i_4]))) & (((((min(1, var_1))) ? 1 : 1))));
                        arr_15 [i_4] [i_1] [i_2] [9] [i_1] [6] = ((1 - (min(((var_11 ? 11417126283608044848 : (arr_1 [i_2]))), 1))));
                    }
                    var_20 = ((~((-(arr_6 [i_1 - 1] [i_1 + 1])))));
                }
            }
        }
        var_21 *= ((((!(!1))) ? (!var_0) : (((!(((0 ? var_4 : 1))))))));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 19;i_7 += 1)
                {
                    {
                        var_22 += ((((~(arr_12 [1] [i_5] [i_6] [i_7 - 2])))) ? (((var_3 | 39011) ? ((15382067148580336680 ? 5635756979342915743 : 1)) : -5265521848180520065)) : 1);
                        var_23 = min((((arr_18 [i_7 - 2]) ? (arr_18 [i_7 + 1]) : (arr_18 [i_7 - 2]))), 1);
                    }
                }
            }
        }
        arr_22 [i_0] &= ((max((arr_7 [i_0] [i_0] [2]), (((arr_20 [i_0] [i_0] [16]) | 12775331692189339819)))) & (((arr_7 [4] [i_0] [4]) ? (arr_10 [16] [i_0] [i_0]) : (arr_18 [i_0]))));
    }
    var_24 = (((((min(var_11, -3911010678014555243))) ? var_4 : var_8)));
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 13;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            {
                var_25 *= ((((((arr_17 [i_8] [i_9] [i_9]) >> (((arr_17 [i_8] [i_8] [i_9]) - 8637))))) || var_2));
                arr_28 [i_8] [i_9] = (((var_0 ? (arr_21 [i_8] [1] [i_8] [i_9] [i_9] [i_9]) : (arr_19 [i_8]))));
            }
        }
    }
    #pragma endscop
}
