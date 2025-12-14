/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_7;
    var_19 = var_14;
    var_20 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1 - 2] [i_0] = 3080021339;
                var_21 ^= (16384 >= 1);
                arr_6 [i_0] = 11373259371671615060;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_3] [i_2] [3] [1] = var_0;
                                arr_15 [i_4 + 1] [i_3] [14] = (((((((var_14 ? var_17 : (arr_13 [i_0] [i_3])))) ? (~1) : var_7)) - 15777));
                                arr_16 [15] [i_3] [i_2] [14] [i_2] = ((-(((~var_13) ? 1 : var_4))));
                                arr_17 [i_0] [i_1] [i_0] [i_3] [i_4] [i_2] [1] = (((-(arr_2 [i_4 + 1] [i_3 - 2] [i_1 + 1]))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
