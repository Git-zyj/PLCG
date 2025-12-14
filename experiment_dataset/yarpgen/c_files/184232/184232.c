/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184232
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((arr_1 [i_0 - 1] [i_0 + 2]) ? (((arr_1 [i_0] [i_0 + 2]) >> (var_10 - 697962031))) : 15));
        var_15 = (min(var_15, ((((arr_0 [i_0 - 2] [i_0 + 2]) != (arr_0 [i_0 + 2] [i_0 + 1]))))));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        var_16 = (arr_0 [i_1] [i_1 - 1]);
        var_17 = var_4;
    }
    for (int i_2 = 4; i_2 < 8;i_2 += 1)
    {
        arr_9 [i_2] = (max(((var_6 ? (max(-1005140500, (arr_7 [i_2 - 2]))) : (arr_7 [i_2]))), ((-(var_7 != var_10)))));
        var_18 = (arr_8 [i_2]);
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                {
                    arr_17 [i_2 + 2] [i_3] = ((max((arr_10 [i_2 - 4] [i_2 - 4]), (arr_10 [i_2 + 2] [i_3]))));

                    for (int i_5 = 1; i_5 < 11;i_5 += 1)
                    {
                        arr_20 [i_2] [i_3] [i_5] = 65;
                        arr_21 [i_2 - 1] [i_5] [i_5] = 89;
                        var_19 = ((-(min(var_0, (((arr_13 [i_2] [i_2] [i_2]) ? (arr_12 [i_3] [i_3]) : (arr_7 [i_2])))))));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        var_20 = (65 != (arr_16 [i_2 + 2] [i_2 + 2] [i_4] [i_2 + 2]));
                        arr_24 [i_4] &= (((((var_10 ? 2 : 167))) ? var_0 : (arr_10 [i_2 + 4] [i_2 + 4])));
                    }
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        arr_27 [i_2] [i_3] [i_4] [i_4] &= ((((((min((arr_8 [i_7]), (arr_8 [i_3])))) ? ((max((arr_18 [i_4] [i_3]), 87))) : 88))) ? ((-(arr_11 [i_2 - 1] [i_2 + 2]))) : (((var_5 ? 65 : (arr_16 [i_2] [i_2] [i_2] [i_7])))));
                        arr_28 [i_2] [i_2] [i_7] [i_2] [i_2] = ((((((((var_3 ? 77 : var_12))) ? var_9 : (min((arr_12 [i_7] [i_4]), 65))))) ? 74 : 92));
                        arr_29 [i_2] [i_2] [i_4] [i_7] [i_7] = 88;
                        arr_30 [i_2 - 4] [i_7] [i_4] [i_7] = max(41, (max(((var_7 ? (arr_18 [i_7] [i_4]) : 181)), (arr_10 [i_2 - 3] [i_2 - 4]))));
                    }
                }
            }
        }
        var_21 = (max(var_21, (((((~(((!(arr_13 [i_2] [i_2] [i_2 - 3])))))) ^ (arr_11 [i_2] [i_2]))))));
    }
    var_22 = ((36 ? -var_12 : 93));
    var_23 = (max(var_23, var_12));
    #pragma endscop
}
