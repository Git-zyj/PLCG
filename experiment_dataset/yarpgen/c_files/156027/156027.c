/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156027
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_0] = (((arr_2 [i_0]) ? 18446744073709551615 : 0));
                var_10 -= -6961374465638908082;
                arr_7 [i_0] = 18446744073709551604;
                var_11 = ((~(arr_5 [i_0] [i_1 + 1] [1])));
            }
        }
    }

    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        var_12 = (max(var_12, ((((max(((max(0, 2157228786))), ((var_0 ? 18446744073709551610 : 18446744073709551605)))) < (-127 - 1))))));
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 15;i_4 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        arr_20 [i_2] [i_3] [i_3] |= (arr_11 [i_5] [i_3] [i_5]);
                        var_13 = (~1);

                        for (int i_6 = 1; i_6 < 16;i_6 += 1)
                        {
                            var_14 = (!-0);
                            arr_25 [i_2] [i_2] [i_5] [i_5] [i_3 - 1] [i_5] [i_5] = ((~((1 ? var_9 : 13))));
                            var_15 = (min(var_15, 114));
                            var_16 = (15533460741892882319 || 18446744073709551615);
                            var_17 = (max(var_17, (((((8726860024161555564 ? var_0 : (arr_8 [i_2] [8]))) / (arr_22 [i_2] [1] [i_3] [2] [i_6]))))));
                        }
                        for (int i_7 = 2; i_7 < 16;i_7 += 1)
                        {
                            arr_30 [i_2] [i_7 - 2] [i_7] [i_5] [i_7 - 2] &= ((1 ? 43118 : 8304133200636881269));
                            arr_31 [i_2] [i_3] [i_3] [i_5] [i_7] [i_5] = (((var_9 < 1) % ((var_7 ? var_5 : 9719884049547996051))));
                        }
                        for (int i_8 = 3; i_8 < 16;i_8 += 1)
                        {
                            var_18 = (arr_10 [i_4]);
                            arr_34 [i_2] [i_2] [i_2] [i_5] [i_8] = -3650575487168314284;
                            var_19 = ((-((7 ? 4 : 65535))));
                        }
                        var_20 ^= ((arr_11 [2] [i_4 - 1] [i_3 - 2]) < (arr_11 [i_2] [i_4 - 1] [i_3 - 2]));
                    }
                    var_21 = (-49 * -2);
                }
            }
        }
        var_22 -= ((((((!(arr_23 [i_2]))))) * (~6762318837569707559)));
    }
    var_23 = 1;
    var_24 = 0;
    var_25 = (max(var_0, ((var_3 ? ((-7613 ? -1574 : 10)) : ((var_7 ? var_2 : var_9))))));
    #pragma endscop
}
