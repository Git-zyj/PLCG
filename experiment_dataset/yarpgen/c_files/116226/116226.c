/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116226
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((-(min(18, (472997306 > var_9)))));
    var_20 = var_15;
    var_21 ^= ((((max((~var_17), var_8))) ? ((((((var_12 ? var_9 : var_2))) ? ((var_1 ? var_6 : var_6)) : var_11))) : (min(var_13, (~var_18)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_22 -= var_0;
                                arr_12 [i_0] [i_0] [i_1] [i_2] [17] [17] [i_4] = (arr_0 [23] [i_4]);
                            }
                        }
                    }
                }
                arr_13 [23] [i_1] = ((((-(arr_8 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1]))) == ((max((arr_8 [13] [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_8 [1] [19] [3] [5] [20] [i_0]))))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        {
                            arr_20 [i_6] [i_5] [i_1] [i_5] [i_0] = (arr_14 [i_0] [i_0] [14]);
                            arr_21 [i_1] [i_5] [i_6] &= (+((((((arr_5 [i_6]) ? var_13 : var_5))) ? var_16 : (min(var_17, var_0)))));
                        }
                    }
                }
            }
        }
    }
    var_23 = (max(var_23, (var_18 + var_9)));
    #pragma endscop
}
