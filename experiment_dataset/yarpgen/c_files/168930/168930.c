/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168930
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_15 ? var_10 : var_9));
    var_19 ^= var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    arr_9 [i_0] = ((+(((arr_2 [i_0] [i_1 - 1]) ? (arr_4 [i_0] [i_0] [i_1 - 1]) : (arr_7 [i_1 - 1] [i_1 - 1])))));
                    var_20 = (arr_5 [i_2] [i_2] [i_0] [i_2]);
                    var_21 = (max(var_21, ((max(((+(((arr_8 [14]) ? var_5 : (arr_3 [i_2 + 1] [i_0]))))), (arr_2 [10] [i_1 - 1]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [8] [7] [i_3] [i_4] [i_4] = (arr_3 [i_2 + 1] [i_3]);
                                var_22 = ((+(((arr_2 [i_0] [i_0]) ? (arr_6 [i_0] [i_1] [i_0] [i_0]) : (arr_14 [i_0] [i_1 - 1] [i_0] [i_2] [i_3] [i_4] [i_4])))));
                                arr_16 [i_0] [i_3] [i_2] [i_1 - 1] [i_0] = (arr_5 [i_1 - 1] [i_2 - 1] [i_0] [i_0]);
                                arr_17 [i_0] [i_4] [i_0] [i_0] [i_0] [i_0] |= var_12;
                            }
                        }
                    }
                    var_23 = (arr_14 [i_2 - 1] [i_2 + 2] [i_2] [i_2] [i_2] [i_2] [i_2]);
                }
            }
        }
    }
    var_24 ^= var_2;
    #pragma endscop
}
