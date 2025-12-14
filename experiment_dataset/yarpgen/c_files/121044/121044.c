/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121044
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [i_0] [14] &= ((-(min(((((arr_1 [i_1]) + var_6))), -532570644443193326))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_19 |= ((+(min((arr_9 [i_0] [i_3] [i_3] [i_3] [i_0] [i_2]), (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
                            var_20 = (max((arr_1 [i_0]), ((-(arr_10 [i_1] [i_1] [i_2] [i_1] [i_3])))));
                            var_21 = (((((((var_1 ? (arr_10 [i_1] [i_1] [i_1] [i_1] [i_0]) : (arr_5 [i_0] [i_1] [i_2])))) ? (((var_4 - (arr_2 [i_0] [i_0] [1])))) : (max(6, (arr_0 [i_0]))))) != -5682739791874695695));
                        }
                    }
                }
                var_22 = -var_10;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 20;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            {
                var_23 = (((arr_16 [19] [6] [i_4]) ? (arr_12 [i_4]) : ((((var_8 ? (arr_11 [i_5]) : (arr_14 [i_4] [i_5]))) - (63008 - 1)))));
                arr_17 [10] = (((0 >> (-var_9 + 12062))));
            }
        }
    }
    var_24 += (((var_12 || var_3) >> (var_13 - 9349)));
    #pragma endscop
}
