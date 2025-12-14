/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12588
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (!3815698701761012106);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = (!var_13);
                    arr_9 [i_0] = ((~((~((~(arr_4 [i_0] [i_0])))))));

                    /* vectorizable */
                    for (int i_3 = 4; i_3 < 13;i_3 += 1)
                    {
                        var_18 = (((-(arr_11 [14] [i_2] [i_1] [i_0] [i_0] [i_0]))));
                        arr_12 [i_0] [i_0] [i_1] [i_2 - 3] [i_3] = ((~(~var_5)));
                    }
                    var_19 &= (~var_15);
                    var_20 = (~(--1));
                }
            }
        }
    }
    #pragma endscop
}
