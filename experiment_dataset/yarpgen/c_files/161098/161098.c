/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161098
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        var_12 = (--105);

                        for (int i_4 = 4; i_4 < 19;i_4 += 1)
                        {
                            var_13 = ((((var_8 ? (arr_4 [12] [i_1] [i_2]) : var_7)) ^ -1));
                            arr_15 [i_4 - 3] [i_0] [i_1] [i_0] [i_0] = 5;
                            var_14 = (arr_10 [i_0] [i_1] [i_0]);
                            var_15 = (arr_7 [i_2] [i_3]);
                            var_16 = ((-(arr_9 [i_0 + 1] [1] [i_3] [i_4 - 4])));
                        }
                        var_17 *= (((943397882 ? 1865309321 : 100)));
                        var_18 = var_1;
                    }
                    var_19 = (max(var_19, -2795596791856363300));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_20 = 1;
                                var_21 *= (max((arr_6 [i_0 + 1] [14] [i_1]), (((arr_7 [i_0 - 2] [i_5]) ? (((max(1, (arr_1 [i_1]))))) : (max(17746062381890228441, -19987))))));
                                arr_21 [i_1] [i_0] = ((((((-32560 & (arr_8 [i_0 - 2] [i_0 - 2] [i_5 + 1] [i_0 - 2]))) == -28439)) ? -6 : (arr_10 [i_2] [i_5] [i_2])));
                                var_22 = (max(var_22, (((max((max(-7, 6), (-6 | -12))))))));
                                arr_22 [i_0] [i_0] [i_1] [i_2] [i_5 - 2] [i_2] = 27400;
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = 108;
    #pragma endscop
}
