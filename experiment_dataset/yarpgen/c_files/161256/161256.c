/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161256
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            {
                var_11 -= (((((var_3 >= var_0) / ((var_2 ? var_9 : var_1)))) << ((((~(var_1 - var_4))) - 64054))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_10 [i_2] [i_1 - 2] [16] [i_1] = var_5;
                            var_12 = var_8;
                        }
                    }
                }
                var_13 += ((((var_5 * var_6) ? var_3 : ((var_5 ? var_9 : var_5)))));
                arr_11 [4] [i_0] [16] |= ((var_2 ? var_2 : var_0));
                arr_12 [1] [i_0] [i_0] = ((((min((var_3 < var_6), var_1))) ? ((var_1 >> (var_1 - 52))) : (((((var_2 ? var_8 : var_8))) ? (var_0 >= var_5) : -var_9))));
            }
        }
    }
    var_14 = var_5;
    #pragma endscop
}
