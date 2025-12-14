/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120662
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_16 = ((((arr_11 [i_2] [i_1] [i_2]) ? (arr_11 [i_2] [11] [i_2]) : -40)));
                            var_17 = (max(var_17, ((((((((~(arr_0 [i_2]))) | (((arr_11 [i_1] [i_1] [i_1]) << (var_12 - 1164809494)))))) ? ((min((arr_12 [i_1] [i_1] [i_1] [i_1]), (min((arr_8 [8] [i_0] [i_0] [i_0]), 36526))))) : (min((arr_1 [i_0] [i_0]), 29010)))))));
                        }
                    }
                }
                arr_15 [5] [5] = 4331905598709580913;
                var_18 = (max(var_18, ((((max(((var_7 / (arr_5 [i_0]))), ((var_2 ? var_2 : 7169)))) == ((((arr_13 [i_1] [i_1]) < (max((arr_13 [i_1] [i_1]), (arr_7 [i_0])))))))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            {
                                var_19 = (min(var_19, (arr_1 [i_4] [i_4])));
                                var_20 = (min(var_20, (((((((arr_26 [i_4] [i_4] [i_4] [i_4] [i_4]) > var_4))) << (((((arr_1 [i_6] [i_6]) ? (arr_26 [15] [13] [7] [8] [i_8]) : (arr_26 [i_4] [i_4] [i_4] [i_4] [i_4]))) - 55)))))));
                            }
                        }
                    }
                    var_21 = (arr_17 [i_6]);
                }
            }
        }
    }
    var_22 = (var_11 <= var_10);
    var_23 |= var_7;
    #pragma endscop
}
