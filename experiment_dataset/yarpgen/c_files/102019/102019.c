/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102019
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= var_4;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = (arr_2 [1]);
                var_11 += (min((min((~var_8), (!var_8))), var_4));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_11 [i_0] [i_1] [i_0] = (((min((min(18446744073709551610, 1)), (((var_9 ? (arr_2 [i_0]) : var_2))))) | var_7));
                    arr_12 [i_0] [i_0] = 1;
                    var_12 = ((~(min(634351464905767928, var_4))));
                }
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    arr_15 [i_0] [i_0] [i_0] = (min((min(((min((arr_10 [13] [i_1] [i_3]), var_1))), (arr_13 [i_0 - 2] [i_0] [i_1] [i_3]))), (((~((min(var_9, (arr_10 [i_3] [i_1] [i_0])))))))));
                    arr_16 [i_0] [i_0] [i_3] = (((((~(~var_9)))) ? (((~((min((arr_10 [i_0] [i_1] [i_0]), var_6)))))) : (arr_5 [i_0])));
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 16;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                arr_24 [i_0] [i_0] [i_3] [i_4] [3] = var_6;
                                arr_25 [i_5] [i_0] [i_5] [i_5] [i_5] = (arr_0 [i_0]);
                                arr_26 [i_0] [i_1] [12] [i_4] [i_5] [i_5] = var_1;
                                arr_27 [i_0] = (min(var_2, ((((min((arr_3 [i_0] [i_1]), var_2))) ? (~var_6) : (0 / -84)))));
                            }
                        }
                    }
                    arr_28 [i_0] = (((((-(((arr_4 [i_0]) - var_6))))) ? ((var_6 + (min((arr_9 [i_3]), 634351464905767952)))) : ((var_9 ? (min(1, -634351464905767946)) : -var_2))));
                    var_13 += ((+((min((((arr_23 [i_1] [i_1]) && (arr_20 [i_0 - 2]))), (arr_9 [1]))))));
                }
                arr_29 [i_0] [i_0] = min(((-(arr_14 [i_0]))), (min(var_4, (arr_14 [i_0]))));
            }
        }
    }
    var_14 = (min(-var_1, var_2));
    var_15 |= (min(((min(1, ((var_8 ? var_3 : var_8))))), (((min(127, var_7)) / (((min(var_5, var_9))))))));
    #pragma endscop
}
