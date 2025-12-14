/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179799
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_5;
    var_19 = (min(var_11, (((((1 / (-127 - 1)))) ? var_15 : var_5))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_0] = (min(((max(var_14, (arr_7 [i_0] [12] [i_0] [i_0])))), var_16));
                    var_20 -= (arr_5 [i_2] [i_2]);
                    arr_10 [i_0] [i_0] [i_2] [i_2] = (((((((arr_7 [i_2] [i_1] [i_1] [i_0]) == var_5)))) < (((arr_5 [i_0] [i_0]) % var_7))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 2; i_3 < 19;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 21;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 4; i_7 < 21;i_7 += 1)
                        {
                            {
                                var_21 -= (var_0 < (arr_13 [i_3] [i_3]));
                                var_22 += -52;
                            }
                        }
                    }
                    arr_24 [i_3] [i_3] [i_4] [i_5] = (((((((arr_22 [i_3 - 1] [i_4 + 1] [i_5 - 1]) > (arr_22 [i_3 + 3] [i_4 - 3] [i_5 - 1]))))) > ((14 ? 1048575 : 49152))));
                }
            }
        }
    }
    #pragma endscop
}
