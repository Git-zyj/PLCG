/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176629
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] = (max((!var_8), ((1 ? 18014398442373120 : 255))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_14 [i_2] [i_2] [1] [i_2] [i_1] [10] [i_2] = (((((var_8 ? ((max(var_4, var_2))) : var_2))) != var_9));
                                arr_15 [i_0] [i_3] [i_0] |= (max((min(65535, 67108863)), var_8));
                                var_12 = ((((~81) ? ((min(var_10, 246))) : (((var_6 > (-2147483647 - 1)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_13 = ((0 << (122 - 98)));
    var_14 *= var_0;
    var_15 = (!var_2);
    #pragma endscop
}
