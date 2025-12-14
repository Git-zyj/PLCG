/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112217
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            var_13 = (max(var_13, ((((12121165839380505301 ^ var_11) ? (var_2 || var_0) : 6425)))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_14 = -var_9;
                        var_15 = (var_4 + var_1);

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            arr_16 [i_3] [i_3] = ((127 ? 141 : 12121165839380505301));
                            arr_17 [i_0] [16] [i_0] [16] [i_3] [18] = (~1);
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_16 += 0;
                            arr_20 [i_3] = var_10;
                            arr_21 [i_0] [i_1 + 3] [i_2] [i_3] [i_3] [i_2] = var_10;
                            var_17 = (var_9 ? ((10738 << (var_1 - 1565594021))) : 1);
                            var_18 = (1 - var_0);
                        }
                        arr_22 [i_0] [i_3] [i_2] [i_2] [i_3] = var_10;
                        arr_23 [1] [i_1] [i_3] [i_3] = var_4;
                    }
                }
            }
            arr_24 [i_0] = (var_1 / -6410);
        }
        arr_25 [i_0] = (((2363121220 / var_0) ? 208 : -138));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
    {
        var_19 = (6325578234329046315 != 13337606341051587324);
        var_20 = ((var_7 ? var_5 : var_1));
        arr_29 [i_6] = -var_12;
        var_21 = (min(var_21, -6413));
    }
    for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
    {
        var_22 = ((((min(var_0, 1))) >= (var_11 == 1242070683)));
        arr_34 [i_7] &= ((((5109137732657964292 & (((min(100, var_5)))))) - 18102632233764202902));
        var_23 = (((((((max(var_10, 145))) ? (min(288230376151711744, -4925499389712742821)) : 142))) ? (1 > 13096) : (((2141 > (-4925499389712742852 && var_12))))));
        var_24 = (((142 == 23218) ? var_10 : (var_0 < 61440)));
        arr_35 [i_7] = 13337606341051587324;
    }
    var_25 = (!var_8);
    #pragma endscop
}
