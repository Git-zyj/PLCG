/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139289
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_7, 1));
    var_20 = ((((var_16 ? var_18 : 41351))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [i_0] = (min((var_12 | var_3), var_5));
                var_21 = (max((((arr_3 [i_1 + 1] [i_1 - 1] [i_1 + 1]) - (arr_3 [i_1 - 1] [i_1 - 2] [i_1 - 1]))), (~var_13)));
                var_22 = (((arr_6 [i_0] [i_0] [i_0]) ? ((var_10 ? (arr_6 [i_0] [i_0] [i_0]) : (arr_6 [i_0] [i_1] [i_1 + 1]))) : var_12));

                for (int i_2 = 4; i_2 < 9;i_2 += 1)
                {
                    arr_10 [i_0] = (-32767 - 1);
                    arr_11 [i_0] [i_1] [i_1] [i_2] = (max(var_1, (((arr_3 [i_1 + 1] [i_2 - 1] [i_2 + 3]) * var_10))));
                }
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    var_23 *= (min(((var_0 ? var_16 : var_11)), (-32767 - 1)));
                    var_24 ^= (((arr_13 [i_1 - 2] [i_1 + 1] [i_1]) ? ((max(var_0, var_8))) : ((var_18 ? -14932 : (arr_13 [i_1 + 2] [i_1] [i_1])))));
                    arr_14 [i_0] = (min(11368820796476742079, 1));
                    /* LoopNest 2 */
                    for (int i_4 = 4; i_4 < 12;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            {
                                arr_21 [i_0] [i_1] = (arr_2 [i_5]);
                                arr_22 [1] [i_0] [i_0] [i_0] [i_0] [i_0] = ((((max((arr_19 [i_4 - 1] [i_4] [i_1 - 2] [i_0]), var_12))) ? (((arr_1 [i_0] [i_1 - 1]) ? var_16 : (arr_1 [i_0] [i_0]))) : var_13));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = (max(var_25, (((var_5 ? var_11 : var_8)))));
    #pragma endscop
}
