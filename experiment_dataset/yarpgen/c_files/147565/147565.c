/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_4;
    var_20 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_21 -= (((((((var_9 ? var_6 : var_1)) * (~var_12)))) < ((~(var_16 * var_3)))));
                var_22 = (min(var_22, var_13));
                var_23 = 14477993792775537209;
                var_24 = (((~var_16) || ((max(var_3, 435575909)))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_25 = ((var_8 ? (((var_14 != (arr_7 [i_0])))) : var_1));
                            arr_9 [i_0] [1] [i_0] [i_0] = var_14;

                            for (int i_4 = 0; i_4 < 15;i_4 += 1)
                            {
                                arr_12 [i_0] [7] [i_2] [7] [7] = (((48492 ? (1723903880 < 4294967295) : 1024)));
                                arr_13 [i_0] [i_0] [i_2 - 1] [i_0] [i_4] [i_4] = -1579954028522968902;
                            }
                            for (int i_5 = 0; i_5 < 15;i_5 += 1)
                            {
                                arr_17 [i_0] = ((656720276 ? ((var_16 ? var_6 : var_10)) : (arr_10 [i_5] [i_3] [i_3] [13] [i_0 - 2] [i_0])));
                                var_26 = var_16;
                                var_27 = var_4;
                            }
                        }
                    }
                }
            }
        }
    }
    var_28 = 18173512525247077357;
    #pragma endscop
}
