/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170477
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += ((var_13 ? (((378568520 ? ((var_10 ? -378568522 : var_0)) : var_15))) : 9223372036854775807));
    var_19 = ((((((min(var_6, -9223372036854775791)) || (((var_4 ? var_7 : var_9))))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_2] = (~1700220232);
                    var_20 += ((-9223372036854775807 ? -378568520 : (-9223372036854775807 - 1)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_3] [i_0] = (arr_8 [i_0 - 1] [i_0] [i_0 + 2] [i_0 - 2]);
                                var_21 |= (((max(-9223372036854775807, -1030538901)) <= (((-1 ? -1 : (((arr_13 [i_0] [i_1] [i_2] [i_3] [i_4]) / 3130)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
