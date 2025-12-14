/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131547
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_12 && (min(var_5, var_5))));
    var_21 = ((((var_1 / (9327 + var_0))) * var_3));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_1] = (min((min((arr_5 [i_0 + 3]), (((arr_3 [i_1]) ? (arr_3 [i_0]) : (arr_2 [i_0]))))), ((max((arr_4 [i_1] [i_1 + 1]), (arr_4 [i_0] [i_1 + 1]))))));
                var_22 -= (min((arr_5 [i_1 + 2]), (arr_1 [i_1 + 1])));
                arr_7 [3] = ((((((arr_0 [i_0]) ? (min(var_19, (arr_2 [i_1]))) : (((max((arr_2 [i_0]), (arr_5 [i_1])))))))) ? (arr_1 [i_1 + 1]) : (((((arr_5 [i_0 - 2]) != (arr_3 [i_0 + 3])))))));
                arr_8 [i_0] [i_1 + 3] [i_0] = ((((!(arr_5 [i_0 + 1])))) + ((-(arr_3 [i_0 + 2]))));
            }
        }
    }
    var_23 -= var_3;

    /* vectorizable */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                {
                    var_24 ^= (((((arr_11 [10] [10]) ? (arr_9 [i_3]) : (arr_12 [16]))) << ((((arr_13 [i_2] [i_4]) != (arr_11 [8] [6]))))));
                    arr_16 [5] [i_3] [i_3] = (((var_3 & (arr_13 [i_2] [i_3]))));
                }
            }
        }
        arr_17 [i_2] [i_2] = (((arr_15 [i_2] [1] [i_2] [i_2]) ? ((((arr_14 [16] [16] [i_2]) == var_14))) : (arr_13 [i_2] [i_2])));
    }
    #pragma endscop
}
