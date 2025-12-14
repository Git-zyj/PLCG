/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= var_9;
    var_20 = (((max(var_11, var_3)) | (((var_11 ? var_4 : 29537)))));
    var_21 = (max(var_21, (var_11 <= 18)));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_22 = (min(16, (arr_2 [i_0] [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 14;i_2 += 1)
            {
                {
                    var_23 *= (arr_3 [i_2] [i_0] [i_0]);
                    arr_8 [i_0] [i_0] [i_2 - 4] [i_2] = (~32767);
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_24 = (max((arr_2 [i_0] [13]), ((-(arr_12 [i_1 + 1] [i_2 - 3] [i_3 - 3] [i_4] [6])))));
                                var_25 = ((((~(((arr_5 [i_3] [7] [i_0]) ? var_8 : (arr_11 [i_0] [i_0] [i_0] [i_3 + 2]))))) / (arr_10 [i_3 + 1])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
