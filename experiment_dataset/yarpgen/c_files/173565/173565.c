/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = min((((~((var_8 ? 7 : var_0))))), var_11);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_13 = (((((min((arr_0 [i_0]), ((~(arr_1 [i_0]))))) + 2147483647)) >> ((((min(var_5, (arr_1 [i_0]))) != (~984331198))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_14 = ((((((-((~(arr_11 [i_0] [i_0] [i_2] [i_3] [i_4]))))) + 2147483647)) >> (((((-21010 ? 107 : -107)) >= ((min(var_6, (arr_10 [i_0] [12] [12] [i_3] [12] [i_3])))))))));
                                var_15 = (!(((((var_0 ? (arr_12 [i_0] [i_0] [i_2] [i_3] [i_4]) : var_7)) >> (((~var_8) + 579077431))))));
                                var_16 ^= (max(((((~11109) && ((max(var_6, 4294967295)))))), (max(((~(arr_0 [1]))), (arr_4 [i_0] [i_0])))));
                                var_17 = (max(var_17, (((-(min((~1271481334090671825), 244)))))));
                            }
                        }
                    }
                }
                var_18 = (((arr_6 [i_1] [i_0] [i_0] [i_0]) ^ (((arr_0 [i_0]) ? (arr_2 [i_1] [i_0]) : (arr_2 [i_0] [i_1])))));
            }
        }
    }
    var_19 = var_11;
    #pragma endscop
}
