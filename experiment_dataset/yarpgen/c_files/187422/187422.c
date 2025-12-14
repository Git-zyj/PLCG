/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187422
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_17 = ((((((251 ? var_13 : var_1)))) ? (0 >> 1) : 8));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_18 = (max(var_18, (var_4 && var_13)));

            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                arr_6 [i_1] = (!var_0);
                var_19 = -8;
            }
        }
        arr_7 [i_0] = max((var_4 > -var_14), 34359607296);
    }
    for (int i_3 = 3; i_3 < 20;i_3 += 1)
    {
        arr_10 [i_3] = var_8;
        var_20 = 12;
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    {

                        for (int i_7 = 2; i_7 < 20;i_7 += 1)
                        {
                            var_21 = (min(-var_3, (1 > 1)));
                            arr_19 [i_3] [i_3] [i_5] [i_5] [i_7] [i_4] [i_3] = 11;
                            arr_20 [i_3 - 1] [i_4] [i_3] = ((+(((17 - 65535) - ((var_0 ? var_12 : 17))))));
                        }
                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            arr_24 [i_3] = ((~(min(var_11, (var_5 >= 1)))));
                            var_22 = (max((~var_12), ((1 ? var_15 : 1))));
                        }
                        var_23 = ((max(-var_4, (((-29 ? var_6 : var_3))))));
                        arr_25 [i_3] = (~65507);
                        var_24 = 0;
                    }
                }
            }
        }
        arr_26 [i_3] = (((((var_11 ? var_10 : var_10)))) << (65513 - 65503));
    }
    var_25 += (~var_0);
    var_26 = (min(var_26, var_16));
    var_27 = var_0;
    #pragma endscop
}
