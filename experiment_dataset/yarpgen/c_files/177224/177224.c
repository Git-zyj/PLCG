/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177224
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max((max(-var_10, -1)), var_14));
    var_19 ^= -var_16;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_8 [i_0] = arr_4 [i_0];
                    arr_9 [i_2] [8] [8] [i_0] |= -1;
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_20 = ((-(arr_7 [i_3 - 1] [i_3 - 1] [i_3])));
                                arr_15 [i_0] [i_0] [11] [i_3] [i_4] = ((((max(127, var_2)))));
                            }
                        }
                    }
                    arr_16 [i_0] [i_1] [i_0] = ((((max(1, var_8))) && (arr_5 [i_1 - 2])));
                    var_21 += ((((arr_1 [14] [i_1 - 1]) << (arr_1 [8] [i_1 + 1]))));
                }
            }
        }
    }
    var_22 += var_17;
    #pragma endscop
}
