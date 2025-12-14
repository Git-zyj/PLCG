/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107015
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_15 += 80;
        var_16 = (min(var_16, ((max((!5933), (!-32379))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_17 += 5;
                                var_18 += 384;
                                arr_15 [i_1] [i_1] [0] [i_1] [i_4] = ((-((-385 ? -32380 : 133))));
                            }
                        }
                    }
                    var_19 = -374466057883045902;
                }
            }
        }
        var_20 += (max(((-32363 ? 2646956462481487628 : 35)), ((max(-32378, -7)))));
    }
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        var_21 += (max((((((max(32368, 4096))) ? -6305 : 513220977))), ((0 ? (min((-9223372036854775807 - 1), 140)) : ((max(563753704, 33325)))))));
        var_22 = (min(var_22, -101));

        for (int i_6 = 0; i_6 < 0;i_6 += 1)
        {
            var_23 += (-127 - 1);
            var_24 = (min(((min(-32392, 32672))), 13307794982412579498));
            var_25 = -24024;
            var_26 += (!121);
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    {
                        var_27 += 32863;
                        var_28 = (max(var_28, (~18072278015826505698)));

                        for (int i_10 = 0; i_10 < 22;i_10 += 1) /* same iter space */
                        {
                            var_29 += 3777245801;
                            var_30 += -119;
                            var_31 += ((-728933083 ? 90 : 1));
                        }
                        for (int i_11 = 0; i_11 < 22;i_11 += 1) /* same iter space */
                        {
                            var_32 = (max(var_32, (~7845892273610019873)));
                            arr_37 [i_5] [6] [i_8] [16] [16] [9] = 536854528;
                            var_33 = (-2147483640 ? -536854514 : 32);
                            var_34 += ((728933101 ? 1073741816 : 1));
                            arr_38 [15] [15] [i_7] [i_7] [i_7] [i_11] [15] = 4;
                        }
                        var_35 = (max(var_35, 148));
                    }
                }
            }
            var_36 = ((3400776634 ? -728933095 : 32377));
            arr_39 [i_5] [i_5] = (!8128);
            var_37 = 0;
        }
        for (int i_12 = 0; i_12 < 22;i_12 += 1) /* same iter space */
        {
            var_38 += ((30 ? (((~124) ? (~2097151) : (~-1))) : -227838983));
            var_39 = (min(var_39, -5860));
            var_40 = (max(var_40, 1));
        }
        for (int i_13 = 0; i_13 < 22;i_13 += 1) /* same iter space */
        {
            var_41 = (max(var_41, 3533486200253118573));
            arr_46 [i_13] [18] = ((!(((34923 ? -820576168 : 1)))));
        }
    }
    var_42 = (max(var_42, var_8));
    #pragma endscop
}
