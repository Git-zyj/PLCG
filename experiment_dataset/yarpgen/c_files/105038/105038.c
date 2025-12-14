/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105038
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = (max(-1513703293, ((((((arr_2 [i_0]) ? var_15 : (arr_1 [i_0]))) == (arr_0 [i_0]))))));
                var_19 = (min(var_19, ((min(((-(arr_5 [i_0 + 2] [8]))), (((arr_4 [6]) ? (arr_1 [4]) : 943281286)))))));
                var_20 = (max(var_20, (arr_1 [18])));
            }
        }
    }
    var_21 = (((var_6 * (3 / var_16))) >> (((max(var_0, (min(var_4, var_6)))) - 5907)));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 12;i_3 += 1)
        {
            {
                arr_11 [i_2] = (((max((arr_9 [i_3 + 2] [i_3] [i_3 + 3]), (arr_9 [i_3 + 1] [i_3 + 1] [i_3 + 3]))) > (((((arr_9 [i_3 - 1] [i_3] [i_3 + 1]) + 9223372036854775807)) >> var_14))));
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        {
                            var_22 -= ((((((((max(var_9, (arr_1 [16])))) < var_17)))) > ((var_8 ? (((arr_12 [i_3] [0] [i_3] [i_3]) ? (arr_2 [6]) : 4859158406702693862)) : (((var_7 ? (arr_0 [18]) : var_0)))))));
                            var_23 = (max(var_23, (((((~(max(1513703293, var_11)))) ^ (~var_6))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
