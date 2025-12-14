/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151867
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= var_7;
    var_18 += var_6;
    var_19 = ((var_4 ? ((((max(-51, var_4))) ? var_12 : -var_10)) : var_2));
    var_20 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_21 = ((-51 >> (((((arr_1 [i_1]) ^ var_16)) - 3914513732))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_22 = ((-((-59 ? 46 : 235407622))));
                            var_23 -= var_13;
                            var_24 = (((+(max((arr_1 [3]), var_16)))));
                            var_25 ^= ((arr_5 [i_0] [i_2] [i_0 - 1] [i_0 + 3]) ? ((min(13874, 14105))) : (((20341 ? var_10 : 51428))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
