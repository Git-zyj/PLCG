/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125632
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((65535 ? ((var_2 ? 229 : var_1)) : ((0 ? var_9 : var_10))));
        var_13 = (~var_5);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_5 [i_1] = (((var_4 ? (max(1, var_11) : (((min(2329, var_6))))))));

        for (int i_2 = 1; i_2 < 13;i_2 += 1)
        {
            var_14 = var_2;
            var_15 = (~var_8);
        }
        var_16 = (~1);
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 11;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    {
                        var_17 = (max(var_17, (((((min(1, ((240 ? 1 : 17293822569102704640))))) ? ((65535 ? 42326 : 80)) : (~var_0))))));

                        /* vectorizable */
                        for (int i_6 = 1; i_6 < 12;i_6 += 1)
                        {
                            var_18 = ((var_8 ? 1 : var_2));
                            var_19 = 1;
                        }

                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            var_20 = 3215;
                            var_21 = var_3;
                        }
                    }
                }
            }
        }
        var_22 &= ((min(((3215 ? 17 : var_6)), ((min(var_4, var_10))))));
    }
    /* vectorizable */
    for (int i_8 = 3; i_8 < 21;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 22;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 22;i_10 += 1)
            {
                {
                    var_23 = (((((42310 ? -119 : var_12))) ? ((252 ? 1 : 1)) : 1));

                    for (int i_11 = 0; i_11 < 22;i_11 += 1)
                    {
                        var_24 *= 277076930199552;

                        for (int i_12 = 0; i_12 < 22;i_12 += 1)
                        {
                            var_25 = ((var_2 ? var_8 : 63));
                            var_26 = ((-((var_6 ? var_5 : var_3))));
                            var_27 = var_2;
                        }
                        for (int i_13 = 0; i_13 < 22;i_13 += 1)
                        {
                            var_28 ^= ((var_10 ? var_3 : var_0));
                            arr_38 [i_8 - 3] [11] [3] = (((((var_2 ? 116 : var_8))) ? var_9 : (~1)));
                            var_29 = (~1);
                            var_30 = (~var_1);
                        }
                        var_31 = ((173 ? 30 : 1));
                    }
                    var_32 = -60;
                    var_33 = ((var_8 ? 32 : var_5));
                }
            }
        }
        var_34 = (min(var_34, ((((((277076930199560 ? 11164 : var_10))) ? -14333 : 6674170323077503088)))));
    }
    var_35 = ((-((min(var_8, var_0)))));
    #pragma endscop
}
