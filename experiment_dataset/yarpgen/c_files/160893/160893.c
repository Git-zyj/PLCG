/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160893
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_21 = (~7);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_1] [i_0] [i_3] |= (!(((((10633 ? var_13 : (arr_7 [i_3]))) - ((var_5 ? var_9 : 25741))))));
                            var_22 = 0;
                            var_23 = (((4009 & 5714008092216717393) & ((max(var_11, (4030 ^ 61515))))));
                            arr_10 [i_0] [i_2] [i_2] [i_3] = (65535 && 12732735981492834195);
                            var_24 = (arr_1 [i_1]);
                        }
                    }
                }
                var_25 = (max(var_25, var_3));
            }
        }
    }
    #pragma endscop
}
