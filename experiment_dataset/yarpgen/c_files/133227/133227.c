/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133227
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_13 = (max(var_13, ((((arr_2 [i_0] [i_1]) ? ((((arr_3 [i_0] [i_1 - 1] [i_1]) ? (arr_0 [i_0]) : (arr_0 [i_0])))) : (arr_3 [i_0] [i_1 + 1] [i_1]))))));
                arr_4 [i_1 - 1] [i_0] = ((arr_1 [i_1 + 1]) ? (arr_2 [i_0] [3]) : (arr_0 [i_0]));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 6;i_4 += 1)
                        {
                            {
                                arr_13 [i_2] [i_2] [i_2] [i_3] [i_2] = (arr_3 [i_0] [i_1 + 1] [i_0]);
                                arr_14 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_0] &= (arr_2 [7] [i_2]);
                            }
                        }
                    }
                }
                arr_15 [i_1] [i_0] [i_0] = ((((((arr_9 [i_0]) ? (arr_2 [i_0] [i_1]) : (((arr_0 [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [6] [i_0])))))) ? (((27370 ? 4294967295 : 38166))) : ((((((arr_5 [0] [1] [6] [i_0]) ? (arr_10 [i_0] [i_0] [i_0] [2] [i_0]) : (arr_1 [1])))) ? (((arr_7 [i_1 + 1]) ? (arr_3 [i_0] [i_1] [i_1 - 1]) : (arr_3 [i_0] [i_0] [i_0]))) : ((((arr_5 [i_0] [i_0] [1] [i_1 + 1]) ? (arr_12 [i_0] [4] [i_0] [6] [i_1] [i_1] [i_1 - 1]) : (arr_6 [i_0] [i_0]))))))));
                var_14 -= (((((((((arr_6 [i_0] [i_0]) ? (arr_7 [i_1]) : (arr_9 [i_0])))) ? (((arr_2 [i_1] [i_1 + 1]) ? (arr_2 [i_0] [i_0]) : (arr_6 [i_0] [i_0]))) : (arr_9 [i_0])))) ? (arr_7 [1]) : ((((((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0])))) ? (arr_8 [i_0] [i_0] [i_0] [i_0]) : (((arr_5 [i_0] [i_1] [i_0] [i_1]) ? (arr_3 [i_1] [i_1 + 1] [i_1]) : (arr_3 [i_0] [i_1 - 1] [i_0])))))));
            }
        }
    }
    var_15 = (((((var_5 ? ((var_11 ? var_7 : var_7)) : var_1))) ? var_1 : var_9));
    var_16 = var_12;
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            {
                arr_22 [i_6] [i_6] [7] = (((arr_19 [i_5] [i_5] [i_6]) ? ((((((arr_20 [i_6]) ? (arr_16 [16]) : (arr_17 [5])))) ? (arr_19 [i_5] [i_5] [i_6]) : (arr_17 [i_6]))) : (arr_16 [i_5])));
                arr_23 [i_6] = arr_19 [i_5] [i_5] [i_6];
            }
        }
    }
    #pragma endscop
}
