/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185825
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;
    var_11 = var_7;
    var_12 = max(-var_5, var_3);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_13 = (max(var_13, (((var_2 && ((((((arr_4 [i_4] [i_0]) ? 1506073565917473581 : 9443763092634980762)) << (((1506073565917473581 || (arr_7 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))))))))))));
                                var_14 = ((var_1 - (((arr_0 [i_2]) + 81))));
                            }
                        }
                    }
                    var_15 = (arr_8 [i_1]);
                }
            }
        }
    }
    var_16 = ((((max((~9002980981074570854), 9002980981074570838))) ? var_9 : var_6));
    #pragma endscop
}
