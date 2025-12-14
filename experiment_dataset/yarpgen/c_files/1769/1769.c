/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1769
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= var_6;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = -15973;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_20 -= (min((((9223372036854775797 && (-9223372036854775807 - 1)))), var_18));
                                var_21 = var_17;
                                var_22 &= ((((var_8 | (-9223372036854775807 - 1))) / -9223372036854775798));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
