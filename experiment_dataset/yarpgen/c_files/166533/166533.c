/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166533
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= ((-var_11 ? (((var_9 ? var_14 : var_15))) : var_9));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [13] [13] [i_1] [i_0] [i_1] [i_3 + 1] = (max((max(-1559331232342749042, 1)), (((-21718 ? 1 : -2)))));
                                var_19 -= ((max((arr_13 [i_0 - 3] [i_1 + 3] [i_3 + 1] [i_4 + 1]), (arr_13 [i_0 - 3] [i_1 - 4] [i_3 + 1] [i_4 + 1]))));
                                var_20 = (arr_3 [1] [1] [i_4]);
                            }
                        }
                    }
                }
                arr_15 [i_1] [i_0] [i_1] = ((~(((((1 ? 1 : (arr_5 [6] [i_1] [i_1] [i_0 - 3])))) ? (((arr_13 [i_0 - 1] [3] [i_1] [i_1]) | (arr_1 [i_0]))) : (arr_13 [2] [i_1 - 1] [i_1 + 3] [i_1 - 1])))));
                var_21 = ((1 || ((min((min(1, (arr_6 [3] [i_1] [i_1 - 2] [i_1]))), -8)))));
            }
        }
    }
    var_22 = (min(-16384, var_9));
    #pragma endscop
}
