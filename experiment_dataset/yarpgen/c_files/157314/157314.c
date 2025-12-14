/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157314
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, ((92 ? var_16 : (((~var_9) - ((31 ? 1 : -87))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_21 = (min((~56), (max(((((arr_1 [3]) ? -30337 : var_19))), (min(168, 8346189971062094376))))));
                            var_22 = ((((((((arr_2 [i_0] [i_0]) >= (arr_10 [i_0] [i_0] [i_0] [7])))))) - (arr_9 [i_0 - 1] [i_3])));
                            arr_12 [i_0 - 2] [i_1] [i_2] = (((max((((arr_1 [i_0]) ? 14 : var_1)), var_0))) * (min(1449194438, (arr_9 [i_0 - 2] [i_0 - 1]))));

                            for (int i_4 = 1; i_4 < 15;i_4 += 1)
                            {
                                var_23 += 11;
                                var_24 += (min((((((((arr_10 [i_0] [i_0] [i_2] [i_0]) != (arr_9 [i_0 - 1] [i_1])))) < (((arr_13 [i_3]) ? var_14 : 1))))), (~var_4)));
                                var_25 += -47;
                            }
                        }
                    }
                }
                var_26 *= arr_7 [i_1] [i_1];
            }
        }
    }
    var_27 = var_4;
    #pragma endscop
}
