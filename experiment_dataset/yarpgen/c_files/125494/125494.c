/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125494
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_19 = ((!(arr_5 [i_1] [i_1] [i_2])));
                    var_20 *= (~669233182);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_21 -= 1;
                                var_22 = var_16;
                                var_23 = (arr_13 [i_0] [i_1] [i_2] [i_3] [i_4]);
                                var_24 = ((-(~var_18)));
                                var_25 = (max(var_25, (((!((!(arr_13 [i_4 + 1] [i_4 + 2] [8] [10] [i_4]))))))));
                            }
                        }
                    }
                    var_26 *= -var_18;
                }
            }
        }
    }
    var_27 = (~var_4);
    #pragma endscop
}
