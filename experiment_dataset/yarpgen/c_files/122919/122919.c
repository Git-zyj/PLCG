/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122919
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -6;
    var_19 += ((!((!(((0 ? 843491516259383617 : 562949953421311)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_20 ^= ((arr_5 [i_0] [i_1 + 4] [12] [i_1]) ? (((arr_5 [i_1 + 1] [i_1 + 4] [i_1 + 4] [10]) + (arr_5 [i_1 - 1] [i_1 + 1] [i_2] [7]))) : ((-(arr_5 [4] [i_1 - 1] [i_1 - 1] [8]))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_21 = ((!((min(var_14, 14870570884684979493)))));
                                var_22 = -17336189336096045598;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
