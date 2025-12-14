/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176264
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_17 = ((-1514609397 ? -4036271796673842132 : var_3));
        var_18 = ((4036271796673842132 - 24) ? 13336 : ((132 ? 64 : 4036271796673842140)));
        var_19 &= var_12;

        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        {
                            var_20 -= 28109;
                            var_21 = ((var_10 ? var_5 : (68 + 28341)));
                            var_22 = (min(var_22, (((!(arr_1 [i_0 + 1] [i_1 - 1]))))));
                        }
                    }
                }
            }
            var_23 = ((28113 * (var_6 / var_1)));
        }
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            var_24 = (min(var_24, (((~(arr_7 [i_0] [i_0] [i_0] [i_0 + 1] [i_0]))))));
            var_25 ^= (((arr_2 [i_0] [i_0 + 1]) != -4096));
        }
    }
    var_26 = 1;
    #pragma endscop
}
