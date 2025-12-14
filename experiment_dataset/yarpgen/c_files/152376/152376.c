/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152376
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_14 = ((((((max((arr_6 [i_0] [i_3] [i_2] [i_0]), (arr_8 [i_0] [i_0] [i_0 - 1] [i_0 - 1])))) ? (max((arr_0 [i_0] [i_0]), var_3)) : ((max(var_0, (arr_1 [i_1])))))) % (((max(((min(0, var_8))), var_13))))));
                                var_15 = (((((max(1, (arr_1 [1]))) ? (arr_10 [13] [i_0 + 1] [i_0 - 1] [i_0 + 2]) : (arr_5 [13] [i_0 - 1]))) + ((((max((arr_2 [i_0] [i_0]), (arr_13 [i_0] [i_0] [i_1] [i_2] [i_1] [i_4])))) ? (1 & var_3) : (((min(var_8, 0))))))));
                                var_16 ^= ((((max(var_12, var_3))) || ((max((arr_12 [i_0 - 1] [i_0 + 2] [i_0] [i_0 + 1] [i_0 + 2]), 1)))));
                            }
                        }
                    }
                }
                var_17 ^= (-(min(var_3, var_9)));
                var_18 ^= ((+(max((arr_6 [14] [i_0 + 2] [i_0 + 1] [i_0 + 1]), (min(0, 137304735744))))));
                var_19 = (max(var_19, ((max((min((arr_14 [i_0] [i_0 + 1] [i_0 + 2] [i_1] [14] [1]), -32766)), (1 < 104))))));
                var_20 ^= ((-(~var_10)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            {
                var_21 ^= ((~((((max(27546, (arr_20 [i_6])))) ? ((-(arr_16 [i_6] [i_6]))) : (63 & var_13)))));
                var_22 ^= (max((((12991 >> (12973 - 12972)))), ((max((arr_1 [i_5]), var_13)))));
            }
        }
    }
    var_23 = (max(((min(((min(13013, var_10))), (min(var_8, var_7))))), (min(((max(var_10, var_0))), ((var_12 ? var_9 : var_9))))));
    #pragma endscop
}
