/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128710
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_4 [12] &= ((!(((arr_1 [i_0] [i_0 + 3]) || (arr_1 [i_1] [i_0 - 2])))));
                var_12 -= (max(((~(arr_2 [i_0 - 2] [i_0 + 3] [i_0 - 1]))), (arr_2 [i_0 - 1] [i_0 + 2] [i_0 + 2])));
                var_13 += ((~(((arr_0 [i_0 + 3]) ? (((!(arr_0 [i_1])))) : (arr_2 [i_0] [i_1] [i_0])))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_15 [i_2] [i_1] [i_2] [i_3] [i_2] = ((~(max((((769324745 ? (arr_9 [i_0] [i_2] [1] [i_2] [i_0]) : var_9))), ((~(arr_1 [i_1] [i_0])))))));
                                var_14 = (max(var_14, ((((((+(((arr_1 [i_0] [14]) ? (arr_11 [i_0] [i_1] [1] [1] [i_4]) : (arr_10 [i_0] [i_0] [5] [i_3] [9])))))) ? (((((-(arr_14 [i_0 + 1] [i_0 - 2] [i_0] [i_0] [i_0])))) ? (arr_3 [i_0]) : (arr_3 [i_4 - 2]))) : 3718768310143332980)))));
                                var_15 ^= (arr_0 [i_2]);
                                arr_16 [i_2] [i_3] = (((arr_0 [i_0 - 2]) ? ((~(arr_0 [i_0 + 1]))) : (((~(arr_11 [i_2] [i_0 - 1] [i_0 + 2] [i_0 + 3] [i_0 - 1]))))));
                            }
                        }
                    }
                }
                var_16 -= (((((((((arr_10 [i_1] [i_1] [i_1] [i_1] [i_1]) >> (var_1 + 20557)))) ? -6758846244236501362 : ((((arr_2 [i_0] [i_0] [i_1]) << (((arr_1 [i_0] [i_0]) - 1653127488066196145)))))))) ? 3718768310143332980 : ((min((((arr_6 [i_0] [10]) % 1371410116)), 3028416601952009007)))));
            }
        }
    }
    var_17 = (!14727975763566218607);
    #pragma endscop
}
