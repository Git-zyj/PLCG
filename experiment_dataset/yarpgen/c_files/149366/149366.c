/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149366
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_1] [i_1] [i_2] [i_3] [i_0] [i_4] = (((((~(((arr_3 [i_0]) ? (arr_8 [i_0] [i_2 - 1] [i_0]) : (arr_7 [i_0])))))) ? (((arr_8 [i_0] [i_3] [i_0]) ? (((arr_0 [i_4] [i_0]) ? (arr_1 [i_1] [i_0]) : (arr_8 [i_0] [i_0] [i_0]))) : (arr_5 [i_1] [i_1]))) : (((arr_8 [i_2 + 2] [i_1] [i_0]) - (arr_8 [i_2 + 2] [i_1] [i_0])))));
                                var_20 = (max(var_20, ((((((((-(arr_7 [i_1])))) ? (((((arr_11 [i_1] [i_1] [i_1] [i_1]) > (arr_12 [i_0] [i_1] [i_1] [i_0] [i_4]))))) : (((arr_5 [i_0] [i_0]) ? (arr_3 [i_1]) : (arr_3 [i_4]))))) + ((((arr_6 [i_2 + 1] [i_2 + 2]) ? (arr_6 [i_2 - 1] [i_2 + 1]) : (arr_6 [i_2 + 2] [i_2 + 1])))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_21 = (arr_7 [i_0]);
                                var_22 ^= (min(((((max((arr_8 [i_0] [8] [i_1]), (arr_6 [i_2 + 1] [i_2 + 1])))) >> (((((arr_20 [i_0] [2] [i_2] [i_5] [i_6]) ^ (arr_6 [i_6] [i_6]))) - 9209515081847062233)))), (((((arr_3 [i_5]) ? (arr_9 [i_5] [i_5] [i_1]) : (arr_17 [i_0] [i_2 + 1] [i_5] [i_5]))) * (((arr_1 [0] [i_1]) ? (arr_5 [i_0] [i_0]) : (arr_17 [i_0] [i_0] [i_0] [i_0])))))));
                                var_23 = (max((((!((min((arr_21 [i_0] [i_0] [i_1] [i_2 + 2] [i_5] [i_0]), (arr_8 [i_0] [16] [i_0]))))))), ((((max((arr_18 [i_0] [i_0]), (arr_17 [i_6] [i_1] [i_1] [1])))) ? (((arr_14 [1] [1] [1] [i_0] [1]) ? (arr_3 [i_0]) : (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]))) : ((((arr_8 [i_0] [i_0] [i_0]) ? (arr_5 [i_5] [i_5]) : (arr_5 [i_0] [i_0]))))))));
                                var_24 = (min(var_24, ((((arr_2 [i_1]) ? (max((-650053783739502052 | 1376963111), (arr_20 [i_2 - 1] [i_2 + 2] [i_2 + 1] [i_2 - 1] [i_2 + 1]))) : (((56740 ? 1376963111 : -1376963140))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = (max((((((max(var_8, var_16))) ? (var_14 + var_6) : ((var_2 ? var_12 : var_9))))), ((-var_12 ? ((var_3 ? var_15 : var_17)) : var_2))));
    #pragma endscop
}
