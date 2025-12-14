/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150974
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((~((62 ? var_14 : 2147418112))))) ? var_15 : ((((var_4 ? var_15 : 71))))));
    var_17 = var_14;
    var_18 = (2147418112 == 127);
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_14 [6] [i_3] [4] [i_3] |= ((((var_3 ? 113 : (-110 / var_13))) * (((arr_10 [4]) * -99))));
                                var_19 = 1;
                                var_20 = ((((-(22 * 32764)))) ? ((((min(var_12, 1031489807)) < (arr_12 [i_0] [i_0 + 2] [i_0] [i_2 + 2] [i_2 - 2] [i_2 + 2] [i_2])))) : var_5);
                                arr_15 [i_1] = ((6144 ? 113 : 245));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        var_21 = (min((var_9 ^ 104), (arr_9 [i_0] [1])));
                        arr_19 [i_1] [i_2 - 1] [i_1] = ((((-((2934951349603178784 ? 122 : 281200098803712)))) >= var_13));
                    }
                }
            }
        }
    }
    #pragma endscop
}
