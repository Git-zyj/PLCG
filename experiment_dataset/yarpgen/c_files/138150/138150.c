/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138150
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= (min(var_12, (var_14 * var_14)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_17 ^= (max((((((arr_6 [i_2] [i_1]) == (arr_0 [i_1] [i_0]))) ? ((var_14 ? var_12 : var_3)) : 13896)), (-125 - var_3)));
                    arr_7 [i_0] [i_0] [i_0] [i_0] = (var_6 - ((~(arr_6 [i_0] [i_1 + 1]))));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] = (-((var_13 ? (var_7 + var_10) : (arr_11 [i_1] [i_4]))));
                                var_18 = (min(var_18, (min((((arr_4 [i_3 + 2]) ? (arr_4 [i_3 - 3]) : (arr_4 [i_3 - 3]))), (arr_4 [i_3 + 2])))));
                                var_19 = (arr_9 [i_0] [i_0] [i_0] [i_0]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
