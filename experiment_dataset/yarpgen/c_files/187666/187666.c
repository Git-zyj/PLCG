/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187666
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= (min((((((0 ? 50404 : var_0)) * ((var_16 ? var_3 : 1))))), (((min(var_11, var_12)) * (((max(1, 1))))))));
    var_19 = var_13;
    var_20 = var_11;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            arr_4 [i_1 - 1] [i_0] = -72;
            arr_5 [i_0] [8] = max(((~(arr_2 [i_0] [i_1 + 1] [i_1 - 1]))), (max((arr_2 [i_0] [i_0] [i_1 + 1]), (arr_1 [i_0]))));
            var_21 = ((((max(((((arr_1 [3]) ? (arr_0 [i_1 + 1]) : 195))), (min(26214, var_8))))) ? (max((var_11 ^ 52), (arr_2 [i_0] [4] [i_1 - 2]))) : (arr_1 [i_0])));
        }
        var_22 = 15142;
        arr_6 [i_0] [i_0] = ((max((arr_3 [i_0] [i_0] [i_0]), 1)) + (max((arr_2 [i_0] [i_0] [i_0]), (arr_2 [i_0] [i_0] [i_0]))));
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {

        for (int i_3 = 1; i_3 < 16;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 16;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_6 = 1; i_6 < 13;i_6 += 1)
                        {
                            var_23 = (~60);
                            arr_21 [i_2] [4] [4] [4] [i_3] = (((arr_19 [i_2] [i_3] [i_4] [i_3] [i_2]) >> ((~(arr_20 [i_3] [i_3 - 1] [i_3] [i_4] [i_5] [i_5] [0])))));
                        }
                        arr_22 [i_4] [i_3] [i_3] [i_4 - 1] = 11005371888171368904;
                        var_24 = (max(var_24, (arr_16 [10] [10] [i_4] [i_4])));
                    }
                }
            }
            arr_23 [1] |= -187;
            var_25 = ((((max((arr_15 [i_3 + 1] [i_3 + 1] [i_3 + 1]), (arr_9 [i_3 + 1])))) ? (((arr_16 [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_3 - 1]) + var_6)) : (arr_19 [i_2] [i_3] [i_3] [i_2] [i_2])));
        }
        for (int i_7 = 2; i_7 < 15;i_7 += 1)
        {
            var_26 -= ((~((min((!var_8), 11935)))));
            arr_26 [i_7 - 1] = (min((~-1), ((9223372036854775807 ? var_2 : (var_5 | var_1)))));
        }
        arr_27 [i_2] = var_17;
        var_27 = (((((var_16 ? (max((arr_16 [i_2] [i_2] [i_2] [i_2]), 1)) : ((((-9223372036854775807 - 1) + var_3)))))) ? 15143 : (((!(arr_15 [i_2] [i_2] [i_2]))))));
        var_28 = (arr_16 [i_2] [i_2] [i_2] [i_2]);
    }
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 13;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 0;i_10 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 13;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 1;i_12 += 1)
                        {
                            {
                                var_29 = 65535;
                                arr_42 [i_8] [i_10] [i_8] [i_11] [i_12] = 11425;
                            }
                        }
                    }
                    var_30 = (max(-var_16, 9223372036854775807));
                }
            }
        }
    }
    #pragma endscop
}
