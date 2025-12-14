/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126636
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= var_5;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {

                        for (int i_4 = 3; i_4 < 14;i_4 += 1)
                        {
                            arr_13 [i_0] [i_1] [i_1] [i_1] [i_3] [i_4] = (1 % 1);
                            arr_14 [i_0] [i_1] [i_2] [i_2] [i_4] = var_8;
                        }
                        for (int i_5 = 2; i_5 < 14;i_5 += 1)
                        {
                            var_20 = 1;
                            arr_18 [i_1] [i_1] [i_1] [i_1] [4] = (53269 != 4294967295);
                        }
                        var_21 += ((-1 ? 12689 : (arr_1 [i_0 - 1])));

                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            var_22 *= (((255 ? var_14 : 12266)));
                            arr_22 [i_3] [2] [11] [i_3] [i_6] [i_6] = var_0;
                            var_23 = (!3289076382);
                        }

                        for (int i_7 = 1; i_7 < 12;i_7 += 1)
                        {
                            var_24 = -18369128336718416400;
                            arr_27 [i_1] [i_2] [i_3] = (12266 & var_5);
                            arr_28 [i_0] [i_1] [4] [i_3] [i_3] = ((~((var_12 ? var_9 : var_2))));
                        }
                        arr_29 [8] [4] [i_2] [i_1] = (1 > 1);
                    }
                    var_25 = (max(var_25, (((1 ? -114 : var_0)))));
                }
                var_26 ^= (((((3289076382 ? var_3 : (arr_9 [i_0] [i_1] [i_0 + 1] [i_1])))) ? (((((var_16 ? -59 : var_5))))) : (((((58 ? var_15 : 33554431))) ? 142 : (max(3979383511, var_5))))));
            }
        }
    }
    #pragma endscop
}
