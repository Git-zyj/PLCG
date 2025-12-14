/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113359
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= ((max(((32492 ? 397242010 : var_11)), (((var_11 ? (-32767 - 1) : var_8))))) >> (var_2 / var_5));
    var_16 += ((var_10 || (((var_8 ? var_7 : (~112))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_17 ^= (max(0, 6139852578556533221));
                                arr_12 [i_0] [i_1] [i_2] [i_4] [i_2] [i_3] [i_4] &= (((((((arr_7 [i_0] [i_1] [i_4] [i_4]) < 112)))) + ((3897725295 ? (max((arr_2 [i_0] [i_0]), 1)) : (max(var_14, 128))))));
                            }
                        }
                    }
                    var_18 -= (((min((arr_6 [1] [i_1]), (((arr_6 [1] [i_1 - 1]) ? 397242010 : var_1))))) ? (arr_11 [12] [i_0] [12]) : (((~var_3) ^ var_8)));
                }
            }
        }
    }
    var_19 = var_0;
    #pragma endscop
}
