/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    var_12 -= var_11;

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        arr_14 [i_0] [i_0] [11] [i_1] [i_3] = var_1;
                        var_13 = var_1;
                        var_14 ^= ((var_3 ? 102 : (max(((min(145, 147))), var_4))));
                        arr_15 [i_2] [i_1] [i_0 + 2] = var_10;
                    }
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        arr_19 [i_1] [i_1] [i_4] = ((((!((max(var_4, var_8))))) ? (((~-4659068496279899130) ? -1651202717 : (var_4 + 1902515941))) : (((var_0 >> (var_1 - 2712751463))))));
                        arr_20 [i_0] [i_1] [i_1] = var_5;
                        arr_21 [i_2] [i_1] [i_1 - 1] [i_2] [i_4] &= (max((arr_3 [i_0 + 1] [i_0]), 1));
                        var_15 = ((((-((var_3 ? 3583737548989681394 : var_8)))) - var_9));
                    }
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        var_16 |= ((-(12376225523580720205 <= -926138263)));
                        arr_24 [i_0] [14] [i_2] [i_2] [2] |= var_5;
                    }
                }
            }
        }
    }
    var_17 = var_7;
    var_18 = (max(var_18, var_10));
    #pragma endscop
}
