/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185697
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (+(((~var_16) ? var_18 : var_17)));
    var_21 = (max(var_18, var_13));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 22;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            var_22 = (min(var_22, (arr_9 [i_3] [i_1] [23] [i_4 - 1])));
                            var_23 = ((var_12 ? (43626 + 73) : -20));
                        }
                        arr_13 [i_0] [3] [i_3 + 3] = var_4;
                        var_24 = (min(var_24, (max(16383, (min(var_16, (16393 && var_9)))))));
                    }
                    var_25 = (max(var_25, (((var_13 ? ((216 - (arr_0 [i_0]))) : (arr_6 [i_0] [i_1] [17]))))));
                    var_26 = (max(var_26, var_6));
                    var_27 = 0;
                }
            }
        }
    }
    #pragma endscop
}
