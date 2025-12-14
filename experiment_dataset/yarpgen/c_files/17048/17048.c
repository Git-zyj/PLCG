/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17048
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_7;
    var_14 &= (9 ? 3121160441 : 13);
    var_15 = var_4;

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_15 [i_1] [i_1] [i_1] [1] [i_1] [i_1] [i_1] = ((1626441672836394676 ? 808624081 : 7680));
                                var_16 = ((((arr_11 [i_1] [i_2] [i_1] [i_4]) ? (arr_2 [6] [i_4]) : (arr_8 [4] [4]))));
                            }
                        }
                    }
                    var_17 = (((((-2147483620 && -2367) ? 2246783191103133229 : (((33554428 ? 1970331271 : -1))))) == ((((1 - 511) ? var_11 : ((1 + (-2147483647 - 1))))))));
                    var_18 = (((((var_6 - var_2) ? (arr_10 [i_2] [i_2]) : ((22 ? var_3 : (arr_6 [i_0 + 1] [6] [1] [1]))))) > (((((15867507641011389582 - 16711680) > 4047403982))))));
                    var_19 = ((var_11 ? var_10 : ((((arr_6 [i_0 + 2] [i_0] [i_0 + 2] [i_0 + 1]) * 8)))));
                    arr_16 [i_0] [i_1] = (arr_11 [i_2] [i_0 + 2] [i_1] [i_1]);
                }
            }
        }
        var_20 = var_0;
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 15;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    {
                        var_21 += (arr_8 [i_7] [i_7]);
                        var_22 += (min((((arr_10 [i_0 + 2] [i_0 + 3]) ? var_9 : (arr_10 [i_0 + 3] [i_0 + 3]))), (((arr_10 [i_0 + 2] [i_0 - 1]) ? (arr_10 [i_0 - 1] [i_0 + 3]) : var_2))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
