/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146231
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_19 = ((min(90, var_18)));
                                var_20 *= -var_13;
                                var_21 = (max(var_21, (((min((!var_2), var_8))))));
                            }
                        }
                    }
                    var_22 ^= var_5;
                }
            }
        }
    }
    var_23 &= 38;
    var_24 = (((((var_15 ? (~var_18) : -var_10))) ? var_1 : (min(((var_9 ? 221 : 35)), var_9))));
    var_25 |= var_2;
    #pragma endscop
}
