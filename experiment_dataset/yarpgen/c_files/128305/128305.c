/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128305
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 -= ((((min(61, var_8))) & var_13));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    var_19 = (min(var_19, ((min(503316480, 52)))));
                    var_20 = (((17163815607739306171 > -30) << (var_12 - 28609)));
                    var_21 += (((arr_0 [i_0]) & (max(((1 * (arr_2 [i_0]))), -38))));

                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {

                        for (int i_4 = 1; i_4 < 17;i_4 += 1) /* same iter space */
                        {
                            arr_14 [i_0] [i_3] [i_2 + 2] [1] [11] = 1;
                            arr_15 [i_0] [7] [i_3] [i_3] [i_4] [i_2] = var_16;
                            arr_16 [i_3] = (arr_9 [i_0] [i_0] [i_0]);
                            var_22 = (arr_12 [i_1 - 2] [i_2] [i_1 - 2] [i_2 + 3] [i_4 + 1] [i_4]);
                            var_23 += (((1 | 1) << ((31 ? ((min(30, 232))) : var_12))));
                        }
                        for (int i_5 = 1; i_5 < 17;i_5 += 1) /* same iter space */
                        {
                            var_24 |= ((((((arr_10 [i_0] [i_1] [14] [i_0] [i_0] [i_0]) | (((arr_18 [i_0] [i_0] [i_2] [i_1]) ? -1 : 5973269533677982477))))) ? (max((min(18446744073709551615, 1)), (arr_8 [1] [i_2 + 3] [i_5 + 2]))) : var_16));
                            var_25 = (min(var_25, (((+(((var_17 < var_0) ? ((max(1, (arr_3 [i_2])))) : ((max((arr_12 [i_3 + 1] [i_1] [i_1] [i_3 + 1] [i_1] [i_1]), (arr_7 [i_0] [i_0] [6])))))))))));
                            var_26 = (min(var_26, -115));
                            var_27 = (min(var_27, ((((-4 & (~1660546160)))))));
                        }
                        /* vectorizable */
                        for (int i_6 = 1; i_6 < 17;i_6 += 1) /* same iter space */
                        {
                            var_28 = (var_2 % var_4);
                            var_29 *= (arr_0 [i_1 + 1]);
                        }
                        var_30 = (~((-(!1))));
                    }
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {

                        /* vectorizable */
                        for (int i_8 = 1; i_8 < 17;i_8 += 1)
                        {
                            var_31 = 108;
                            var_32 = (min(var_32, (arr_20 [i_1 - 1] [i_8 - 1] [i_1 - 1] [9] [i_8] [i_8] [i_8])));
                            arr_26 [i_7] [i_7] [13] [i_7] = (((arr_5 [i_1 + 1] [i_2]) & var_8));
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 19;i_9 += 1)
                        {
                            arr_30 [i_0] [i_0] [i_2] [i_7] [i_9] [i_9] = (arr_8 [i_0] [i_1 + 1] [i_2]);
                            var_33 = (max(var_33, 43));
                            arr_31 [i_7] = 65529;
                        }
                        arr_32 [i_0] [15] [i_7] = ((+((((arr_10 [i_0] [i_7] [i_0] [i_2] [i_7] [i_2]) <= -24143)))));
                    }
                }
            }
        }
    }
    var_34 = (-9223372036854775807 - 1);
    /* LoopNest 2 */
    for (int i_10 = 4; i_10 < 18;i_10 += 1)
    {
        for (int i_11 = 3; i_11 < 17;i_11 += 1)
        {
            {
                var_35 *= ((-((+((((arr_19 [i_10 - 3]) > -5240846302714899841)))))));
                var_36 = 246;
                var_37 ^= ((((var_10 > (1 != var_13)))));
            }
        }
    }
    #pragma endscop
}
