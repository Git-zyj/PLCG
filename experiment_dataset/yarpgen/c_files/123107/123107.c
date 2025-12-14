/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123107
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((~((14691538561697697121 ? var_1 : var_10))))) ? 1 : var_8));
    var_16 |= (((((15 ? 241 : 8527316800336607823))) ? (max((!var_9), 17756117550820133141)) : ((((((var_7 ? var_12 : var_12))) ? var_1 : var_14)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_13 [3] [1] [i_3] [i_0] [8] [0] [5] = (~14083027693433953824);
                                var_17 ^= (arr_7 [12] [13] [10] [i_4 - 1]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                arr_21 [i_0] [i_1] [i_2] [i_5] = ((!((((8527316800336607823 ? var_14 : 1422887060))))));
                                var_18 = (~7);
                                arr_22 [i_0] = arr_2 [1] [i_5] [i_6];
                            }
                        }
                    }
                    var_19 &= ((((((arr_1 [5] [i_1]) ? (arr_1 [15] [i_0]) : (arr_1 [i_0] [6])))) ? (arr_1 [i_0] [i_0]) : (max((arr_1 [i_0] [i_2]), 5))));
                    var_20 = (((((((~(arr_15 [16])))) ? (arr_15 [13]) : ((var_4 ? (arr_15 [12]) : (arr_11 [i_0] [4] [i_1] [4] [1])))))) ? ((((var_6 ? (arr_2 [i_0] [16] [i_2]) : var_1)) - (arr_10 [0] [i_1] [8] [i_1] [i_1] [1]))) : ((((arr_0 [4]) ? (((min((arr_10 [8] [i_1] [11] [9] [1] [2]), (arr_15 [i_1]))))) : (min((arr_7 [1] [i_1] [9] [1]), (arr_19 [11])))))));
                }
            }
        }
    }
    var_21 = (min(var_21, (((-(~var_3))))));
    #pragma endscop
}
