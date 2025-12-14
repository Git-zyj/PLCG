/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140397
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_1;
    var_20 = (max(var_20, var_3));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    var_21 = (max(var_21, var_16));
                    var_22 += var_0;
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_23 = (max(((var_6 ? 36860 : (var_2 == var_0))), 577571250));
                                arr_13 [i_0] [i_0] [i_2] [i_0] [i_0] = (((var_2 - var_2) - ((-95 + ((min(94, 250)))))));
                                var_24 = 3727;
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = (((((min(-719571641, var_3)))) * ((min(((min(0, 16))), 18460)))));
    #pragma endscop
}
