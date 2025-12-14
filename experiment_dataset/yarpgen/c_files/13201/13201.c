/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13201
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = (~189034191);
        var_13 = 496086483881601012;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_2] = (!7);
                    arr_9 [i_0] [i_1] [i_1] [i_2] = ((!(!11545353841042469541)));
                }
            }
        }
        arr_10 [i_0] [i_0] = (!-7);
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {

        /* vectorizable */
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            arr_18 [i_3] [i_4] [i_4] = (!1215558885);
            var_14 = -149;
            var_15 = (min(var_15, 4099430891));
            var_16 = 8506663381313897666;
        }
        arr_19 [i_3] = (!9223372036854775807);

        for (int i_5 = 1; i_5 < 12;i_5 += 1)
        {
            var_17 = 3042019925038064202;
            arr_22 [13] [i_3] = (!1);
            var_18 = (!(!70));
        }
        /* vectorizable */
        for (int i_6 = 1; i_6 < 12;i_6 += 1)
        {
            var_19 = (!20639);
            arr_26 [i_6] = (!1);
            arr_27 [i_3] [2] |= 2634;
        }
        arr_28 [i_3] [i_3] |= ((!(!6409224978893761356)));
        arr_29 [i_3] = ((!(!18446744073709551615)));
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 23;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 23;i_9 += 1)
            {
                {
                    arr_37 [i_7] [i_7] [i_9] [i_9] = 1465795104;
                    var_20 = -2634;

                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        var_21 -= (((-(!664863122755323491))));
                        var_22 = (!275277944);
                        var_23 = (min(var_23, (((!(!1313614472))))));
                    }
                    for (int i_11 = 0; i_11 < 23;i_11 += 1)
                    {

                        for (int i_12 = 4; i_12 < 20;i_12 += 1)
                        {
                            arr_44 [i_7] [i_8] [i_7] [i_7] = ((!(~4009363051)));
                            arr_45 [i_7] [i_8] [i_7] [i_7] [i_11] [i_12] [i_12] = 201;
                            var_24 = 64;
                            var_25 = (!2426233292);
                        }
                        /* vectorizable */
                        for (int i_13 = 1; i_13 < 1;i_13 += 1)
                        {
                            var_26 &= 4099430919;
                            var_27 = (max(var_27, ((!(~32754)))));
                            var_28 = (min(var_28, ((-(~-17540)))));
                        }
                        for (int i_14 = 2; i_14 < 22;i_14 += 1) /* same iter space */
                        {
                            arr_53 [i_7] [i_11] [i_7] = 1039656708;
                            arr_54 [i_7] [i_7] [i_9] [i_11] [i_14 - 1] [i_14 - 1] [i_7] = ((((!(!38930)))));
                        }
                        for (int i_15 = 2; i_15 < 22;i_15 += 1) /* same iter space */
                        {
                            var_29 = -16;
                            var_30 = ((~(!241)));
                            var_31 += 2197935680;
                        }
                        var_32 *= (!0);
                        var_33 = -1;
                    }
                }
            }
        }
    }
    #pragma endscop
}
