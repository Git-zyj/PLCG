/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16017
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_2;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_12 = (min((arr_1 [6] [6]), ((((arr_0 [i_0]) < (arr_2 [i_0]))))));
        arr_3 [9] = (min(((var_0 ^ ((7 ? (arr_1 [i_0] [7]) : var_5)))), (((min((arr_2 [i_0]), var_4))))));
    }
    for (int i_1 = 3; i_1 < 14;i_1 += 1)
    {
        arr_6 [i_1] = ((((-(((arr_4 [13]) ? var_8 : 9223372036854775807))))) ? (((max(2016, -65)))) : ((((min(var_1, 104))) ? 145 : (((2080374784 ? var_1 : (arr_2 [i_1])))))));
        var_13 ^= ((((max((arr_1 [i_1] [i_1]), 159))) ? ((((var_5 ? 435941170 : var_0)))) : (min(((-4 ? 0 : 2016)), (!var_6)))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        var_14 = (((arr_1 [i_1 + 2] [i_1 + 2]) ? (arr_1 [i_1 + 2] [i_1 + 2]) : (arr_1 [i_1 - 2] [i_1 + 2])));
                        arr_15 [i_1] [i_1] [i_1] [i_1] = (63 ? -48 : -692596483);
                    }
                    for (int i_5 = 1; i_5 < 12;i_5 += 1)
                    {
                        var_15 = ((((((arr_5 [i_2] [i_5 + 2]) ? (arr_5 [i_3] [i_2]) : (arr_11 [i_1] [i_3] [i_2] [i_1])))) ? ((var_3 % (arr_12 [i_5 + 1] [i_1] [i_1] [i_1 + 1]))) : ((min((arr_11 [i_1] [i_2] [i_3] [i_5 - 1]), (arr_11 [i_1] [i_3] [i_2] [i_1]))))));
                        var_16 += (((49 <= -25) & var_3));
                        var_17 = (((arr_4 [i_5 + 4]) != ((((arr_4 [i_1 - 2]) > 9223372036854775802)))));
                    }
                    /* vectorizable */
                    for (int i_6 = 2; i_6 < 13;i_6 += 1)
                    {
                        var_18 = (((arr_16 [i_1] [i_1] [i_1 + 1] [i_1]) / (arr_4 [i_1 - 1])));
                        var_19 = ((((arr_11 [i_1] [i_2] [i_3] [i_6]) ? -5 : var_6)));
                        var_20 = ((-3575271401618732541 ? (arr_8 [i_1 + 2] [i_1]) : (arr_8 [i_1 + 1] [i_1])));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        var_21 ^= ((var_8 << (172 - 158)));
                        var_22 = (arr_13 [i_1 - 1] [i_1] [i_1] [i_1 - 2] [i_1 + 1]);
                    }
                    var_23 = (192 ? 214 : 221);
                }
            }
        }
    }
    #pragma endscop
}
