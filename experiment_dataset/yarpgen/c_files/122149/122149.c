/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122149
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((max(-3514928470133320564, 59014)))) / ((var_16 >> (var_3 - 4196)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 = (min(((6525 ? 1 : 6522)), ((var_3 | (arr_5 [i_0] [i_0 + 2] [i_0 + 2])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_12 [9] [i_0] [i_0] [i_3] [i_4] [i_3] [4] = ((~((59027 ? var_4 : (arr_0 [i_0] [i_0])))));
                                var_20 = (-59014 ? ((+(max((arr_0 [i_0] [i_3]), (arr_4 [i_0]))))) : (((((var_0 ? var_17 : var_2)) + ((-(arr_2 [i_0] [i_0] [7])))))));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        arr_17 [i_0] [i_0] [i_0] [i_5] = (((!3643444308080527484) ? var_6 : 58999));
                        var_21 = (255 ? 2398740575 : (arr_9 [i_5] [i_2] [i_2] [i_1 - 3] [i_0]));
                        arr_18 [i_0] [i_1 - 3] [i_1 + 1] [i_1 - 2] = (var_0 ^ var_13);
                    }
                }
            }
        }
    }
    #pragma endscop
}
