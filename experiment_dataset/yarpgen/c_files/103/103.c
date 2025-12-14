/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= var_8;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_15 [i_3] |= (arr_8 [10] [i_0]);
                                var_11 = (min(var_11, (arr_4 [i_1] [i_2 + 1])));
                                arr_16 [i_0] [i_4] [i_3] = ((-(arr_8 [i_0] [i_4])));
                            }
                        }
                    }
                    var_12 *= (~74);
                    var_13 = -164;
                    var_14 = (max(var_14, ((max(((716207222934517531 ? (arr_4 [i_1 - 1] [i_2 - 4]) : (arr_4 [i_1 - 1] [i_2 - 2]))), (arr_4 [i_1 - 2] [i_2 - 1]))))));
                }
            }
        }
        var_15 = ((~(max((arr_13 [i_0] [i_0]), var_0))));
    }
    var_16 = ((var_2 ? var_9 : var_3));
    #pragma endscop
}
