/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106186
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [12] = ((max((max((arr_1 [i_1]), var_9)), ((((arr_3 [i_0] [i_1]) == var_11))))) >= ((((min(46, 247248462)) < (-47 > var_13)))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_10 [5] [i_1] [i_0] [i_3] = ((((((arr_7 [i_3 + 1] [i_3] [i_3 - 3] [i_2 + 1]) ? (arr_7 [i_3 - 3] [6] [i_2 - 2] [i_2 - 2]) : var_2))) ? (((arr_0 [i_2 - 1]) ? (((3962081881280843045 ? 90764053 : var_5))) : (arr_2 [i_2]))) : (arr_5 [i_0] [i_0] [i_1])));
                            var_16 = min(((min(2612106400, var_15))), ((77 ^ (arr_6 [i_2 + 1] [i_3 - 1] [i_3 - 2]))));
                            arr_11 [i_0] [i_0] [i_0] [i_0] = (((min(((1 | (arr_0 [i_1]))), (((-1744170328779294778 ? var_15 : 1))))) + ((620054839561879492 ? (max(2040, 130816)) : 1682860920))));
                            arr_12 [i_0] [i_1] [i_2] [15] = var_11;
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 22;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 24;i_5 += 1)
        {
            {
                var_17 = (min(var_17, (arr_16 [i_4] [i_4] [23])));
                var_18 = 749553366;
            }
        }
    }

    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {
                {
                    arr_24 [i_6] [i_6] [i_8] [i_6] = 28967;

                    for (int i_9 = 3; i_9 < 19;i_9 += 1)
                    {
                        var_19 = (min((((arr_25 [i_6] [i_9 - 3] [i_9 - 3] [i_7]) ? (min(646226817, (arr_0 [i_6]))) : (arr_14 [i_6]))), (((min(var_8, var_2)) + var_0))));
                        var_20 -= (arr_7 [i_6] [i_7] [i_8] [i_9]);
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        for (int i_11 = 3; i_11 < 18;i_11 += 1)
                        {
                            {
                                arr_33 [i_11] [i_10] [i_7] [i_7] [i_6] = 1931;
                                var_21 = ((~((var_3 ? (arr_7 [i_11 + 2] [i_11] [i_11] [i_11]) : 63))));
                            }
                        }
                    }
                    arr_34 [i_6] [i_6] [2] [i_8] = ((!-8673458802345730350) <= (arr_30 [i_7] [i_7] [1] [1] [i_7]));
                    var_22 = (((((~(arr_28 [i_6] [i_7] [i_8] [i_8] [i_8])))) ^ (-77 + 18446744073709551611)));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_12 = 2; i_12 < 18;i_12 += 1)
        {
            for (int i_13 = 3; i_13 < 17;i_13 += 1)
            {
                {

                    for (int i_14 = 3; i_14 < 16;i_14 += 1)
                    {
                        var_23 -= (((((((((arr_7 [i_6] [i_12] [i_6] [i_14]) & (arr_23 [i_6] [12] [i_14])))) & 620054839561879492))) > (min((arr_22 [i_12] [i_13] [i_13 - 1] [i_13]), var_15))));
                        var_24 = (max((~2612106400), (var_12 | 2304717109306851328)));
                    }
                    var_25 = max((((!(arr_1 [i_13 - 2])))), (min(((max(414056510, 889229231))), 18446744073709551606)));
                }
            }
        }
        var_26 = (min(89465302, (!var_7)));
    }
    /* vectorizable */
    for (int i_15 = 2; i_15 < 21;i_15 += 1)
    {
        var_27 = -71;
        var_28 = (min(var_28, (((749553365 ? (arr_44 [i_15 + 1]) : -var_12)))));
    }
    #pragma endscop
}
