/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113430
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= (min((((var_10 ? (!var_0) : var_4))), var_16));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = (min(2791643121, ((min(1, (((arr_5 [i_0] [i_1]) ^ var_1)))))));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_17 [i_1] [i_1] [i_3] [i_4] = arr_10 [i_0] [i_3] [i_4];
                                var_18 ^= 1;
                                var_19 = (min(var_19, ((min((arr_11 [i_0] [i_0 - 2] [i_2 - 2] [i_2 + 1]), var_2)))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            var_20 ^= min(var_0, -10637);
                            arr_23 [i_1] [i_1] [i_1] [i_1] = (arr_18 [i_6] [i_5] [i_1]);
                            arr_24 [i_1] [i_1] [11] [i_1] = var_5;
                            arr_25 [i_1] [i_5] [i_0] [i_1] [i_0] [i_1] = (max(var_10, (min(72, var_9))));
                            arr_26 [i_1] [i_5] [i_1] = (min(var_7, (arr_15 [17] [i_1] [i_5] [i_0] [i_5])));
                        }
                    }
                }
                arr_27 [i_0 + 3] [i_1] = 1;
            }
        }
    }
    #pragma endscop
}
