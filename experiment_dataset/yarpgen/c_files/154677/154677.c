/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154677
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_9;
    var_15 = (max(var_15, var_11));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_16 = (max(var_16, 32103));

                for (int i_2 = 3; i_2 < 22;i_2 += 1)
                {
                    var_17 = ((815 + ((1 ? 808 : 41))));
                    var_18 = (((arr_3 [i_0 + 1] [i_0] [i_2 - 1]) ? ((var_0 ? 1 : (arr_4 [i_0 - 2]))) : ((((((arr_5 [i_0] [i_0] [i_2 - 1] [4]) ? 32102 : var_12))) ? (min(var_9, 64720)) : var_13))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_0] = (min((~815), var_1));
                                arr_12 [i_1] [i_2] [i_3] [i_0] = (var_0 & var_0);
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = (max(11, var_2));
    var_20 = (var_11 / var_11);
    #pragma endscop
}
