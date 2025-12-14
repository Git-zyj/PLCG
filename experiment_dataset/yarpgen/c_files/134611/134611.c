/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134611
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((min((!var_1), (!116))) ? (((min((var_10 && var_13), (var_9 <= var_10))))) : (min(-var_4, ((var_4 ? var_12 : var_9))))));
    var_16 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_17 = (min(var_17, 1));
                                arr_13 [i_0] [i_3 + 3] [i_3] [i_3 + 3] [i_2] [i_0] [i_0] = (arr_11 [i_0] [15] [i_3 + 2] [i_0]);
                                var_18 = (min(var_18, (((arr_7 [i_0] [i_0] [i_2] [i_1]) ? ((min(1, 247))) : ((min((arr_7 [i_1] [i_2] [i_1] [i_1]), (arr_7 [i_0] [2] [i_2] [i_2]))))))));
                                arr_14 [i_0] [i_0] [i_0] [0] [i_0] = (arr_10 [i_3 + 3] [i_3] [i_3 + 1] [4]);
                                var_19 -= ((~(arr_7 [i_0] [i_1] [i_3 + 3] [i_1])));
                            }
                        }
                    }
                }
                arr_15 [i_0] [i_0] = (2847653520 ? 222 : 27633);
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            {
                                arr_24 [i_0] [i_0] [10] [5] [15] [i_7] [11] = (min((((arr_10 [i_0] [11] [i_5] [i_6]) ? (arr_10 [i_7] [i_6] [14] [i_1]) : (arr_10 [i_7] [i_1] [i_5] [i_6]))), ((((arr_10 [i_7] [1] [i_5] [i_6]) < (arr_10 [i_7] [i_7] [7] [i_7]))))));
                                var_20 += ((+((0 ? ((min((arr_12 [i_0] [i_1] [9] [i_6] [6] [i_1]), (arr_17 [i_1] [i_1] [i_1])))) : (min(255, var_10))))));
                                var_21 = ((((((var_11 ? var_12 : (arr_6 [i_0] [16]))) / (arr_18 [i_0]))) < ((+((var_13 ? (arr_7 [i_0] [i_1] [i_1] [i_0]) : 27633))))));
                                var_22 += (min(((-(arr_4 [i_0] [i_0] [i_0]))), var_11));
                            }
                        }
                    }
                }
                var_23 = (max(var_23, ((min((((((var_2 ? var_9 : var_11))) ? (arr_7 [i_0] [8] [i_0] [i_1]) : (arr_2 [i_0] [i_0] [i_1]))), 232)))));
            }
        }
    }
    #pragma endscop
}
