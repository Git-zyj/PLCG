/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128564
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((-((-((40 ? -1 : var_10))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_21 = ((-((-2064541203 ? ((-4 ? var_7 : var_4)) : 255))));
                            arr_12 [i_0] [i_1] [i_1] [i_2] [i_2] [i_3] = 4047;
                            var_22 = (max(var_22, ((((arr_8 [i_3] [i_2] [i_2] [i_1] [i_0]) ? ((~(arr_1 [i_2 + 1] [i_0 - 1]))) : (((min(255, -22034)))))))));
                        }
                    }
                }
                arr_13 [i_0] = -81;
            }
        }
    }
    var_23 ^= (((var_6 ? -var_4 : var_16)));
    #pragma endscop
}
