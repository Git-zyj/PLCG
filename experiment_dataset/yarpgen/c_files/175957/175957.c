/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175957
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_10 = ((min((~-2107909668), (arr_1 [i_0]))) & (((arr_0 [i_0]) ? ((min(var_7, (arr_0 [i_0])))) : ((min((arr_1 [4]), 1))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_2] = (arr_6 [i_0] [15] [15]);
                    arr_9 [i_0] [i_1] [i_2] = 1;
                }
            }
        }
    }
    var_11 = ((1 ? 1 : 29061));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            {
                var_12 = (min((((((arr_11 [17]) < (-127 - 1))) ? ((min(var_5, (arr_3 [i_3] [i_3] [i_3])))) : (arr_2 [i_3] [i_4] [i_3]))), (min(((34482 ? (arr_4 [i_3]) : (arr_10 [i_3] [12]))), (((arr_2 [i_4] [i_4] [i_4]) | 34497))))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            var_13 = (min((((arr_1 [18]) ? (arr_1 [i_4]) : (arr_1 [i_4]))), ((~((min(43, 1)))))));
                            arr_18 [i_4] = (min(((((max(1, (arr_6 [i_3] [i_4] [i_4])))) | (~var_5))), ((((min((arr_11 [21]), 31025))) ^ (~34511)))));

                            for (int i_7 = 0; i_7 < 24;i_7 += 1)
                            {
                                var_14 += (((((-((min(31025, 0)))))) ? ((max(40521, 43))) : (min(((~(arr_10 [i_3] [4]))), (((arr_15 [i_3] [i_4] [i_5] [i_7]) ? 1 : -22))))));
                                var_15 = (max(var_15, (((((((max(1, var_3))) + ((47 ? var_0 : (arr_6 [i_7] [i_4] [i_7]))))) - ((((min((arr_20 [i_3]), 43))) + -1)))))));
                                var_16 = ((var_0 ? (max(((22961 ? (arr_15 [i_7] [i_5] [18] [18]) : 230)), (arr_4 [i_3]))) : (((arr_21 [i_5] [i_5] [i_5] [i_5] [i_5]) ? -22 : (arr_20 [i_3])))));
                            }
                            arr_22 [i_3] [i_4] = ((((min(((-24 ? 1 : (arr_11 [i_3]))), (min(var_1, (arr_15 [10] [10] [10] [10])))))) ^ ((74 ? (((~(arr_0 [i_3])))) : ((1 ? -22 : 8986092512919215883))))));
                            var_17 = ((((((arr_12 [i_4] [i_3]) ? ((65535 ? 182 : 65535)) : (max(-1822739302, 1))))) ? ((max((arr_20 [i_3]), (max(var_1, 1))))) : ((((arr_13 [i_6]) < (arr_7 [i_5] [i_4] [10]))))));
                        }
                    }
                }
            }
        }
    }
    var_18 = ((var_0 - (min(((var_7 ? var_7 : var_1)), (max(var_0, 0))))));
    #pragma endscop
}
