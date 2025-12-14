/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141888
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= ((~((((1 ? 2751666045 : var_7))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_2] [i_2] = (arr_4 [i_0]);
                    var_17 ^= (min(((((arr_1 [i_1]) ? (arr_1 [i_2]) : (((arr_3 [i_0] [i_1] [i_2]) ? (arr_2 [i_0]) : 54))))), (((arr_6 [i_0] [i_2]) ? ((var_11 ? (arr_5 [i_1] [i_2]) : 2147483636)) : -8024))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_18 = (min(72, 178));
                                var_19 = (max((arr_15 [i_1] [i_1] [i_2] [i_3] [i_4 - 3] [i_0] [i_1]), (min((((arr_5 [i_2] [i_0]) ? var_4 : (arr_4 [i_0]))), (72 & 62)))));
                                arr_17 [i_0] [i_0] [i_1] [i_1] [i_2] [i_3] [i_4] = ((~(min((arr_13 [i_0] [i_1] [i_1] [i_4 - 2] [i_4]), (arr_14 [i_1] [i_1] [i_2] [i_4 + 1] [i_4])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = ((var_0 > (((max(0, var_4))))));
    var_21 = -1511374903;
    var_22 = ((((var_0 ? ((max(var_12, 32))) : var_14))) ? ((((min(45464, var_8))) ? var_13 : ((var_0 ? -1 : var_15)))) : (((-1190061384 ? var_15 : var_4))));
    #pragma endscop
}
