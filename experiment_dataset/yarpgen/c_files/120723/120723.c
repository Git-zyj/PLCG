/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120723
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_12;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = (min(((max(1, 3694483870))), ((((((arr_2 [i_0] [i_0]) ? var_4 : 3550483336))) ? (((arr_2 [i_0] [i_0]) ? 2081621141 : (arr_2 [i_0] [i_0]))) : (arr_1 [i_0])))));
        var_16 = ((((((((1 ? 6182919708171692501 : var_8))) ? (min((arr_2 [i_0] [i_0]), 1694575361)) : (-1 == 1694575361)))) ? ((+(((arr_1 [i_0]) ? -2 : 4080719248120580546)))) : (arr_0 [i_0])));
        var_17 = (((((((1 ? 192 : 11)) + ((min(86, 1761675839)))))) ? 2081621162 : (max((arr_0 [i_0]), (arr_2 [i_0] [i_0])))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 8;i_3 += 1)
                {
                    {
                        var_18 = (~22168);
                        var_19 = ((arr_10 [i_0] [i_3 - 1] [8] [i_3 + 2]) ? ((((arr_8 [6] [i_1 + 2] [i_0] [i_3 + 2]) / -1))) : (((arr_9 [i_1] [i_1] [i_1 - 1] [i_3 - 1] [i_3 - 1]) ? -1 : (arr_6 [i_1 + 1] [i_0] [i_3 - 1]))));
                        var_20 *= ((~((min((arr_9 [i_1 + 2] [i_1] [i_2] [i_2] [i_2 + 1]), (arr_9 [i_1 - 1] [i_1 + 1] [i_1] [2] [i_2 - 1]))))));
                    }
                }
            }
        }
    }
    for (int i_4 = 2; i_4 < 8;i_4 += 1)
    {
        var_21 += ((4294967293 ? 2081621125 : 1152358554653425664));
        var_22 *= (max((arr_12 [i_4 - 2]), (((arr_12 [i_4 + 2]) ? (arr_12 [i_4 + 1]) : 6327592214100193411))));
        arr_14 [0] = (((arr_9 [i_4 - 1] [i_4 + 2] [i_4 + 2] [i_4 - 1] [i_4]) | (arr_8 [i_4 + 2] [i_4] [i_4] [i_4 + 1])));
        var_23 = (arr_1 [i_4]);
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        var_24 = (!8229742379809352719);
        var_25 = (((arr_15 [i_5]) ? (arr_16 [i_5]) : (arr_16 [i_5])));
        var_26 &= 3;
    }
    /* vectorizable */
    for (int i_6 = 2; i_6 < 19;i_6 += 1)
    {
        var_27 *= ((27 ? ((32438 ? 238 : (arr_15 [i_6]))) : (arr_18 [i_6 + 2])));
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 21;i_8 += 1)
            {
                {
                    arr_25 [1] [i_7 - 1] [i_8] = (((arr_17 [i_6] [1]) & (((~(arr_18 [i_8]))))));
                    var_28 = (((!var_3) ? var_11 : (arr_17 [i_6 - 2] [i_7 - 1])));
                }
            }
        }
        var_29 = (min(var_29, ((((392138141 >= (arr_23 [6]))) ? (arr_17 [i_6] [17]) : ((228 ? 1 : 281474976710624))))));
    }
    var_30 = (min((min(18446462598732840991, ((max(var_3, var_4))))), var_0));
    var_31 *= var_6;
    #pragma endscop
}
