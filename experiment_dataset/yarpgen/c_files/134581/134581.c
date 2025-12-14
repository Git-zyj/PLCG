/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134581
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_0] = (arr_4 [7] [7]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_15 += (((max((arr_17 [0] [i_2] [i_4 + 4] [i_4 + 4] [i_4 + 4] [i_4 + 4]), (arr_11 [i_2] [i_2] [i_4 - 1] [i_4] [i_2]))) > (max((arr_11 [i_3] [i_3] [i_4 - 1] [0] [i_2]), (arr_17 [1] [i_2] [i_4 + 4] [i_4 - 2] [6] [i_4])))));
                                var_16 = (min(var_16, (arr_14 [i_2] [i_3] [i_2] [i_2] [i_1] [i_1] [i_0])));
                            }
                        }
                    }
                    var_17 = (min(((261120 ? -10759 : (-9223372036854775807 - 1))), (arr_17 [i_0 + 2] [i_0] [i_0 + 3] [i_0 + 1] [i_0] [1])));
                }
            }
        }
    }
    var_18 = min(((min(var_13, ((-34 ? var_7 : var_13))))), var_11);
    /* LoopNest 3 */
    for (int i_5 = 2; i_5 < 11;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                {
                    var_19 *= (((arr_14 [i_6 - 1] [i_6 - 1] [i_6] [i_6] [i_6 - 1] [2] [i_6]) ? (arr_12 [i_5] [i_6 - 2] [i_6] [i_7] [i_6]) : 144115188075855871));
                    arr_26 [4] [4] [1] [i_7] = (max((-34 - 49133), 16));
                }
            }
        }
    }
    var_20 = var_1;
    #pragma endscop
}
