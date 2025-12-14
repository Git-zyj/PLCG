/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126452
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_17 += ((((((((arr_5 [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1 + 2]) + 9223372036854775807)) >> (((arr_5 [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1 + 2]) + 6540245986707587123))))) * (arr_8 [i_0] [i_1 + 1] [i_1 - 2])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_18 |= ((((2 ? (arr_12 [i_1 - 1] [i_1 - 1] [i_1] [i_1 + 1] [i_1] [10] [i_0]) : (arr_12 [i_1 + 2] [i_1] [12] [i_1 + 1] [10] [i_1] [i_3])))) ? 4436 : var_8);
                                arr_14 [17] [i_1] [17] [i_3] [i_3] = ((+(((arr_4 [i_0]) ? (((arr_2 [i_4]) ? var_6 : (-127 - 1))) : (arr_1 [i_0])))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    var_19 = -2098108021;
                    var_20 = arr_15 [i_5];
                    var_21 = (max(var_21, ((max(-17941, 786556981)))));
                    var_22 *= (((arr_21 [i_7] [14]) / -2098108022));
                }
            }
        }
    }
    var_23 = var_9;
    #pragma endscop
}
