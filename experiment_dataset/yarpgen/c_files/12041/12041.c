/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12041
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, ((min((((3914786426 & (max(var_3, 107))))), ((-6 ? ((max(var_3, var_0))) : ((var_7 ? 149 : -6)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_11 = ((~(min((~159), ((59 ? var_9 : var_8))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_12 = 3964426108077443916;
                            var_13 = 63;
                            var_14 = var_1;
                            arr_9 [i_0] [i_2] [i_1] [i_0] = var_7;
                        }
                    }
                }
                arr_10 [i_1] [i_1] [i_0] = ((-((((min(var_2, -36))) ? (var_4 & 37) : (!-11)))));
                arr_11 [i_0] [i_0] [i_0] = (~-28882);
            }
        }
    }

    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        var_15 = ((~(((!var_3) ? -var_8 : (((var_3 ? -19 : var_5)))))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                {
                    var_16 = ((~(max(var_4, (var_0 ^ -73)))));
                    arr_22 [i_4] = 2523304656223939970;
                    var_17 = (min(var_17, var_7));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {
        var_18 &= var_7;
        arr_26 [1] = var_5;
    }
    var_19 = (!((max(var_1, ((var_2 ? 232 : var_6))))));
    #pragma endscop
}
