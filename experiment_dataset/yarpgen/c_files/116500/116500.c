/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116500
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= max(50, -58);
    var_21 = var_11;
    var_22 = (var_11 | var_9);
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_23 = (((((!((max(var_8, 18)))))) <= (((!((min(-36, 15))))))));
                    var_24 = 53;
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] = -75;
                                var_25 *= (max(((min((arr_10 [i_1 + 2] [i_3] [i_1 - 1] [i_1 - 1]), -38))), (((arr_2 [i_3]) & -2))));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        arr_18 [i_0 - 1] [i_0] [i_2] [i_5] = var_18;
                        arr_19 [i_0] [i_1 + 2] [i_2] [i_0] = arr_16 [i_0 - 3] [i_5] [i_2] [i_2] [i_5];
                        arr_20 [8] [i_5] [i_2] [i_0] = -64;
                    }
                }
            }
        }
    }
    var_26 = min(-59, -36);
    #pragma endscop
}
