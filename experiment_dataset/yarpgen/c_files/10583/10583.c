/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10583
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_10;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_16 = 1;
        arr_3 [9] = ((70 ? 88 : 16777215));

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            arr_6 [i_0 - 1] = 16777215;
            arr_7 [i_0] [13] = ((arr_4 [i_0 + 1] [i_0 - 1] [i_0 + 2]) ? -16777216 : 9223372036854775807);
        }
        var_17 = 16777215;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 17;i_3 += 1)
            {
                {
                    var_18 = (4294967265 || -9099417866823244390);

                    for (int i_4 = 1; i_4 < 18;i_4 += 1) /* same iter space */
                    {
                        var_19 -= ((((arr_8 [i_4] [i_2]) && 9099417866823244418)) ? var_0 : ((1099511627775 ? var_4 : -1099511627776)));
                        var_20 = (arr_10 [i_0 - 1] [i_3]);
                        arr_17 [14] [i_3] [i_2] [i_2] [i_3] [6] = (~var_5);
                    }
                    for (int i_5 = 1; i_5 < 18;i_5 += 1) /* same iter space */
                    {
                        var_21 = (~134);
                        var_22 = (~-256);
                        var_23 = ((-((1 ? var_1 : var_6))));
                        var_24 = (min(var_24, (((((var_1 ? 4294967283 : var_6))) ? ((var_7 ? 9099417866823244416 : (arr_5 [i_2] [15]))) : (((206 >> (var_6 - 55))))))));
                    }
                    for (int i_6 = 1; i_6 < 17;i_6 += 1)
                    {
                        var_25 = (var_14 || 262143);

                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_26 = (arr_13 [i_3] [i_3 + 2] [i_0 + 2] [i_3]);
                            arr_27 [i_7] [i_3] [i_3] [i_3] [i_0] = ((-(arr_23 [i_3] [0] [i_3 - 1] [i_6 + 1])));
                            var_27 = ((3286552897258481993 ? var_12 : ((var_6 ? var_12 : var_11))));
                            var_28 += (((-9223372036854775807 - 1) + var_5));
                        }
                        for (int i_8 = 3; i_8 < 17;i_8 += 1)
                        {
                            var_29 = (max(var_29, (((-(-9099417866823244440 ^ var_8))))));
                            arr_30 [i_8] [i_3] [i_6] [i_3] [i_8 + 2] = (((-100 ? 31 : 2438013688)));
                            var_30 = (((arr_29 [i_8 - 2] [i_8 - 1] [i_6] [i_6 - 1] [i_6]) & 170));
                            var_31 = (min(var_31, (((1 ? -7835042718284064675 : (9223372036854775791 + -9099417866823244390))))));
                        }
                        for (int i_9 = 0; i_9 < 19;i_9 += 1)
                        {
                            arr_33 [i_3] [7] [i_3] = var_14;
                            var_32 = ((arr_10 [i_0 + 2] [i_3 - 1]) ? (((((arr_28 [i_0] [i_2] [12] [11] [i_3]) || var_5)))) : -21);
                        }
                    }
                    var_33 = (2 ? 255 : var_2);
                }
            }
        }
    }
    #pragma endscop
}
