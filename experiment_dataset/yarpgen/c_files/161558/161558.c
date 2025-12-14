/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161558
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_18 = (min(var_18, 3069034562));
        var_19 += var_2;
        var_20 -= 2810022194948043832;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_21 *= (arr_1 [i_1]);
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 20;i_3 += 1)
            {
                {
                    var_22 = var_16;
                    arr_13 [i_3] [i_3] [i_3] [i_1] = 0;
                }
            }
        }
        var_23 = 1;
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 21;i_5 += 1)
            {
                {
                    var_24 = (arr_8 [i_4] [i_5 + 2] [i_5 + 2]);
                    var_25 += (((~var_0) ? ((~(arr_6 [i_4] [i_1]))) : (((arr_15 [i_5]) ? var_16 : 1))));
                    /* LoopNest 2 */
                    for (int i_6 = 4; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 4; i_7 < 22;i_7 += 1)
                        {
                            {
                                var_26 = (max(var_26, ((1 ^ (arr_19 [i_7 - 2] [i_7] [i_7 - 2] [i_7 - 2] [i_7 - 2])))));
                                var_27 = ((!(var_10 || var_6)));
                                var_28 = -2136762946;
                                arr_24 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = 81;
                            }
                        }
                    }
                }
            }
        }
    }
    var_29 = (~-var_12);
    var_30 &= ((~((~(~var_12)))));
    #pragma endscop
}
