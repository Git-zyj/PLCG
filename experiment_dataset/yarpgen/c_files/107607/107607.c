/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107607
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_6 [i_1] = var_6;
                var_15 = (((((arr_0 [i_1]) <= (arr_0 [i_0]))) || -9104199638490980379));
                var_16 = (arr_0 [0]);
                var_17 = max((arr_4 [i_1] [i_0] [i_1]), (((((max(var_12, 88))) == (arr_3 [i_0] [i_1])))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_18 ^= (arr_15 [i_0] [i_4] [i_2]);
                                arr_16 [i_3] [16] [i_1] [i_3] [i_0] [i_4] = (arr_7 [i_0] [i_1] [i_1] [i_3]);
                                arr_17 [i_0] [i_1] [i_2] [i_2] [i_2] [i_4] = (min(((max((arr_14 [i_0] [i_3] [i_2] [19]), (arr_14 [1] [i_2] [1] [i_0])))), (((arr_14 [i_0] [i_0] [i_0] [i_0]) + 1))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = (((~var_9) ? (~-18952) : ((((var_7 ? 14319 : var_10)) << (var_4 <= var_13)))));
    var_20 = (min(var_20, 3464800350));
    #pragma endscop
}
