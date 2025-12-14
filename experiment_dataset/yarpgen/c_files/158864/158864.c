/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158864
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_18 = var_9;

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    arr_9 [i_0] = var_13;
                    var_19 += (var_4 <= var_5);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_20 = (min(var_20, (47349 & 44)));
                                var_21 = (max(var_21, (((!(!64480))))));
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = var_2;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_22 = var_12;
                                var_23 ^= 9897690444635342002;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
