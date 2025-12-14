/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147297
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_0] = (((((~(arr_1 [13])))) ? (((arr_2 [i_0] [i_1]) ? (arr_2 [i_0] [i_1]) : (arr_2 [i_0] [i_0]))) : ((~(arr_1 [i_0])))));
                arr_5 [i_0] = -var_1;
            }
        }
    }
    var_10 = (min(var_8, var_0));
    var_11 = -var_6;
    var_12 = (((var_5 ? (var_3 != var_5) : ((var_7 ? var_4 : var_4)))) * (var_1 & var_2));

    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        var_13 = 0;
        var_14 = (((min((!var_4), var_2)) ? (((arr_8 [i_2]) ? var_7 : (arr_8 [i_2]))) : var_4));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                {
                    arr_14 [i_2] [i_3] [i_2] [i_4] = (min((arr_9 [i_3] [i_3]), (((((var_8 ? (arr_7 [i_4]) : (arr_8 [i_2])))) ? ((max((arr_6 [i_3]), var_7))) : ((min((arr_6 [i_2]), (arr_10 [i_3] [i_4]))))))));

                    for (int i_5 = 1; i_5 < 18;i_5 += 1)
                    {
                        var_15 = (max(((((((arr_10 [i_3] [i_5]) ? (arr_9 [i_3] [i_5]) : var_5))) ? ((((arr_8 [i_2]) != (arr_10 [i_2] [i_2])))) : (arr_16 [i_5 - 1] [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 - 1] [i_5 - 1]))), (var_3 >> var_4)));
                        arr_17 [i_5] [i_3] [i_2] = ((((var_3 ? (arr_16 [i_2] [i_3] [i_4] [i_4] [i_5 - 1] [i_5 - 1]) : (arr_12 [i_2] [i_3] [i_4] [4]))) != (arr_16 [i_5] [i_5] [i_4] [i_3] [i_2] [i_2])));
                    }
                }
            }
        }
    }
    for (int i_6 = 1; i_6 < 1;i_6 += 1)
    {
        var_16 = (arr_18 [i_6 - 1]);
        var_17 |= ((~((-(arr_19 [i_6 - 1])))));
        /* LoopNest 3 */
        for (int i_7 = 1; i_7 < 17;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    {
                        arr_27 [i_6 - 1] [i_6] [i_8] [i_9] = (((((arr_23 [i_6] [i_6] [13] [i_9]) >= (min((arr_22 [i_7] [i_6]), var_0)))) ? var_4 : (arr_18 [i_7])));
                        var_18 *= ((((222 & (min(var_3, var_1)))) >> (((arr_19 [i_8]) - 91))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
