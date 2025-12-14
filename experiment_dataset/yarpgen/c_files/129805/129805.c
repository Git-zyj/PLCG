/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129805
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_12 = 18446744073709551615;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_13 &= 13188;
                            arr_8 [i_1] [i_1] [i_1] [i_1] [i_1] = var_6;
                            var_14 ^= var_8;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_15 = (min(var_15, (((var_11 == (min(((var_3 ? 120 : (arr_9 [3] [11]))), (arr_6 [i_0] [i_1] [i_4 + 1] [i_5] [i_4] [i_1]))))))));
                            var_16 = (min(var_16, (arr_12 [i_4 + 2] [i_0 - 3] [i_0] [i_0] [4] [i_0])));
                        }
                    }
                }
            }
        }
    }
    var_17 = (var_9 < var_1);
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 21;i_6 += 1)
    {
        for (int i_7 = 3; i_7 < 19;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 21;i_8 += 1)
            {
                {
                    arr_23 [i_7] [i_7 - 1] [1] = (arr_19 [i_7] [i_6]);
                    var_18 &= min(52348, (max((arr_20 [i_6] [1] [i_8]), 18446744073709551615)));
                    var_19 = (max(var_19, 52348));
                }
            }
        }
    }
    var_20 = (max((!var_7), (((min(var_10, var_4)) / ((var_3 ? var_10 : var_4))))));
    #pragma endscop
}
