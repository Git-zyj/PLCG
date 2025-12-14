/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129945
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, ((!((max(-var_15, var_10)))))));
    var_19 ^= (var_1 != 30);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_20 = (min(var_20, ((max(((~(((arr_4 [i_0] [i_0]) ? var_15 : 0)))), -23)))));
                var_21 = (min(var_21, ((max((((arr_5 [i_1]) ? (arr_3 [20]) : (arr_3 [10]))), ((4 ? var_4 : (arr_5 [i_0]))))))));

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((~((((arr_0 [i_1 + 2] [i_1 + 1]) != var_9)))));
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((-(min(((var_9 ? var_8 : var_0)), 1))));
                }
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (((arr_0 [i_1 - 1] [i_1 - 1]) ? ((-79958132 ^ (arr_4 [i_1 + 1] [i_1 + 1]))) : var_6));
                                arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (var_5 ? (max((min(var_14, -1853023607933589608)), 7)) : (((~(arr_10 [i_0] [i_0] [i_0] [i_0])))));
                                var_22 = (((arr_5 [i_0]) | 26));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 0;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_23 = (max(var_23, ((max(-126, (((((1575904041 << (-42 + 55)))) ? 3658375995 : 29740)))))));
                                var_24 = (((((~5022285873968759517) + 9223372036854775807)) >> ((((var_12 ? var_13 : -64)) - 3357447045))));
                                arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] = (((((!(((-(arr_19 [i_0] [i_0] [i_0] [i_0]))))))) | -2008407026));
                            }
                        }
                    }
                    arr_26 [i_0] [i_0] [i_0] = ((var_12 != (arr_19 [i_0] [i_0] [i_0] [i_0])));
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 23;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 24;i_9 += 1)
                        {
                            {
                                var_25 = (((min(var_5, (((arr_23 [i_0]) ? -118 : var_15))))) ? 1424553804 : var_12);
                                arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((var_7 / ((391177472 ? (arr_21 [i_0] [i_0]) : 193740851))));
                                var_26 = (min(var_26, ((((((max(1940173125, var_15)) / (((arr_3 [8]) - var_6)))) >> (((arr_5 [i_1 + 2]) ? (arr_5 [i_1 + 2]) : var_12)))))));
                            }
                        }
                    }
                }
                arr_33 [i_0] [i_0] [i_0] = 4294967284;
            }
        }
    }
    #pragma endscop
}
