/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121600
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_8 [i_0 + 1] [i_0 - 1] [3] [1] = ((((((((arr_7 [0]) - var_6))) ? var_1 : (var_2 >= var_7)))) + (arr_0 [i_0 + 1]));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_14 [i_3] [i_3] [i_3] = ((((((((var_2 - (arr_13 [i_0] [i_1 + 1] [i_1 + 1] [i_3 + 3] [i_4 + 1] [i_2] [4]))) >= (max(var_10, (arr_9 [i_2] [i_2] [i_2] [i_3 - 2] [i_4] [i_2]))))))) ^ (((arr_9 [i_4 - 1] [i_4] [i_4 - 1] [i_3 + 1] [i_1 + 1] [i_1]) ? var_2 : var_6))));
                                var_12 = ((((max(var_4, ((var_5 ? (arr_1 [i_3 + 2]) : var_5))))) ? (max((arr_1 [i_4 - 1]), (arr_1 [i_4 - 1]))) : ((max((arr_11 [i_0] [i_3] [i_1 - 1]), (arr_2 [i_3 - 3]))))));
                                var_13 ^= (max((~var_8), (((!(arr_5 [i_1 - 1] [i_1 + 1] [i_1 + 1]))))));
                            }
                        }
                    }
                    var_14 = (((min(var_2, (((var_2 ? var_6 : (arr_11 [i_0] [i_2] [i_0])))))) + ((((((var_4 ? (arr_6 [i_0] [i_2]) : var_10))) ? var_0 : ((((arr_10 [9]) + (arr_4 [i_0 - 1] [i_0])))))))));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                var_15 = (min(var_15, ((((min((arr_2 [i_5 - 1]), (arr_0 [i_5 + 1]))) - ((((arr_16 [i_2]) ? (arr_5 [i_1 - 1] [i_5 + 1] [i_5 - 1]) : (((arr_4 [3] [3]) + (arr_2 [10])))))))))));
                                var_16 = (max(((min(var_3, var_10))), var_0));
                            }
                        }
                    }
                    var_17 = ((var_2 && (((((((arr_12 [i_0 + 1] [4] [i_2] [i_2] [i_2]) ^ (arr_11 [i_0] [i_2] [i_2])))) ? (max((arr_18 [4] [i_2] [6] [4] [10] [i_2] [i_2]), var_4)) : (max((arr_16 [i_2]), var_11)))))));
                }
            }
        }
    }
    var_18 = var_3;
    #pragma endscop
}
