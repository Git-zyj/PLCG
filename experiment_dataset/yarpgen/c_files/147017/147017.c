/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147017
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((var_9 ? var_5 : ((var_2 ? var_2 : var_7)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        arr_12 [i_3 + 2] [i_1] [i_1] [i_0] = (((~(~var_7))));
                        arr_13 [i_1] = ((~((min(var_9, var_0)))));
                        var_11 = (min(var_11, var_7));
                        var_12 = (min(var_12, var_9));
                        var_13 += ((~(~2761038017)));
                    }
                    var_14 += ((+((max((!var_9), var_6)))));
                    arr_14 [i_0] [i_1] = var_4;
                    var_15 -= (~var_5);
                }
            }
        }
    }
    var_16 += ((((28196 ? -28195 : 1648788897476602710))));
    var_17 = var_0;
    #pragma endscop
}
