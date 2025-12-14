/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104982
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= 39005;
    var_16 = (var_9 ^ (((((max(-29865, var_5))) == var_11))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_0] = 29865;
                var_17 = (min(var_13, ((-(arr_1 [i_0] [i_0])))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    var_18 = (~26520);
                    arr_10 [i_0] [i_0] = (((arr_0 [i_0]) ? var_5 : 2059394547));
                }
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    var_19 = (((((arr_9 [i_0] [i_0] [i_3] [18]) ? (arr_9 [i_0] [i_0] [i_0] [i_3]) : (arr_9 [7] [i_0] [i_0] [i_0]))) % (max((arr_13 [12] [12] [12]), ((max(var_10, var_7)))))));
                    arr_14 [i_0] = (min((((arr_5 [i_0]) ? var_6 : (arr_12 [i_1] [i_0]))), ((min((arr_4 [i_0] [i_0] [i_3]), var_14)))));
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 20;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            {
                                arr_21 [1] [i_1] [1] [i_4] [i_0] [1] = (min(((~(arr_1 [i_4 + 1] [i_0]))), (((-(arr_12 [i_4 - 1] [i_5]))))));
                                var_20 = ((-120 ^ (((arr_13 [i_1] [i_4 - 1] [i_5]) + (((-120 ? var_12 : 16055)))))));
                                var_21 &= max((((max((arr_7 [i_3]), -8087677949028332973)) >> ((((max(var_7, (arr_5 [i_3])))) - 62055)))), ((max((((arr_18 [i_0] [i_0] [i_3] [i_4] [i_5] [i_3]) | (arr_19 [i_4]))), ((min(var_11, -29885)))))));
                            }
                        }
                    }
                    var_22 = (((arr_12 [i_0] [i_1]) ? (((max(26531, ((((arr_16 [i_1] [12] [i_1] [i_0]) < (arr_12 [i_0] [2])))))))) : (max((max(-2230181150298834018, (arr_18 [i_0] [0] [15] [i_0] [i_3] [i_3]))), (var_1 + -1)))));
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        {
                            arr_26 [i_1] [i_0] [1] [i_1] [i_1] [i_1] = max((((arr_24 [i_1] [i_0]) ? 3565934146052294763 : var_0)), ((((arr_17 [i_0] [i_1] [9] [i_1] [i_6] [i_6]) ^ -29880))));
                            var_23 = (~-1428922059);
                        }
                    }
                }
            }
        }
    }
    var_24 ^= ((var_2 ^ ((((var_10 ? var_3 : var_9)) * (1322888432 < 1)))));
    #pragma endscop
}
