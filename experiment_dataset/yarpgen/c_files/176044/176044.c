/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176044
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {
                    var_18 |= ((!((min((arr_1 [i_0 + 1]), (arr_5 [i_0 + 1]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_13 [i_4] = (max(((((min((arr_10 [9] [1] [9] [i_2] [9] [9]), (arr_11 [i_2] [i_4] [7] [i_3])))) ? ((((arr_3 [i_0]) | var_16))) : (max((arr_10 [7] [7] [i_2] [i_2 - 2] [7] [i_3]), 0)))), ((((~-2147483633) | ((46 ? 0 : 31)))))));
                                var_19 = ((-19 ? (min((arr_6 [9] [i_3] [i_3]), (arr_6 [i_1] [i_2 + 1] [i_4 - 1]))) : (arr_4 [9])));
                            }
                        }
                    }
                    var_20 = ((((var_2 - (arr_7 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_2 + 2] [i_2 - 3]))) & (((((arr_7 [i_0 + 2] [i_0 + 2] [i_0 + 1] [i_0 - 1] [i_2 - 1] [i_2 - 3]) < var_15))))));
                    var_21 = (((arr_10 [i_2] [4] [3] [9] [3] [i_2]) ? (((-(((arr_3 [i_0]) ? (arr_9 [i_1] [i_2] [i_1] [i_1] [i_0 - 1]) : 1790495552))))) : (((((36 ? 31 : 10961158297851658225))) ? ((((var_6 >= (arr_12 [i_0] [0] [i_0 + 1] [i_0 + 1] [i_0] [0] [2]))))) : (min(var_11, var_0))))));
                }
            }
        }
    }
    var_22 = var_11;
    #pragma endscop
}
