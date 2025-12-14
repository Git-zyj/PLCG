/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184058
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        var_14 = ((((max(((var_6 ? var_2 : 1528060920)), ((max(var_5, -16864)))))) ? (min(var_3, ((max(24113, -5979))))) : var_6));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 8;i_2 += 1)
            {
                {
                    arr_6 [i_0] [5] [i_2] = (~var_7);
                    arr_7 [0] [6] [i_0] = (!3132141720);
                    arr_8 [1] [i_0] [i_2] = var_5;
                    var_15 += ((~(max(((var_8 ? var_10 : var_2)), var_13))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_0] = (min((((((var_4 ? 28581 : -25))) ? ((24 ? 849782842 : -25)) : -11498)), ((max(((max(var_12, var_12))), (min(var_5, var_7)))))));
                                arr_14 [i_4] [i_0] [6] [i_0] [i_0] = (((~var_4) ? var_0 : 64));
                                arr_15 [i_0] = min((((~((1162825573 ? 16858 : var_13))))), 0);
                                arr_16 [i_0] [i_3] [3] [i_1] [i_0] = (max((min((~1162825576), ((1518231952 ? 1973547470 : var_3)))), (((~((max(-26382, var_6))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 21;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            {
                arr_21 [2] = 64;
                var_16 = (max(var_16, ((((min(((max(var_2, var_2))), -var_8))) ? ((-(min(var_4, 32512)))) : (min(((3132141705 ? 414997221 : 415992526)), (-32767 - 1)))))));
                var_17 = (max(var_17, ((min((min(922350061, 65535), ((min(var_2, var_7)))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 3; i_7 < 18;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            {
                arr_28 [i_8] [17] = (~(max(((min(var_5, var_8))), ((3684648458 ? 1162825590 : -49)))));
                var_18 = var_0;
                var_19 = 25;

                for (int i_9 = 1; i_9 < 15;i_9 += 1)
                {
                    var_20 *= 1162825588;
                    var_21 = var_0;

                    for (int i_10 = 0; i_10 < 19;i_10 += 1)
                    {
                        arr_33 [i_7] [12] [12] [12] [11] = (max((max(-53, var_5)), (min(((20963 ? var_8 : 32767)), -9818))));
                        var_22 = ((1466638928 ? ((min(var_2, var_0))) : (!15169)));
                        arr_34 [i_7] [i_8] [17] [i_10] = 6452;
                    }
                    for (int i_11 = 3; i_11 < 17;i_11 += 1)
                    {
                        arr_39 [4] [i_7] [i_8] [i_7] [18] [i_7] = (min(var_3, (~3132141718)));

                        /* vectorizable */
                        for (int i_12 = 0; i_12 < 19;i_12 += 1)
                        {
                            var_23 = (!var_5);
                            arr_42 [16] = -18585;
                            var_24 *= ((~(~-25928)));
                            arr_43 [i_7] [4] [i_9] [17] [11] = (((~-53) ? (~-18585) : (!53631)));
                        }
                        /* vectorizable */
                        for (int i_13 = 1; i_13 < 17;i_13 += 1)
                        {
                            var_25 |= -53;
                            arr_46 [i_7] [i_7] [i_9 + 1] [i_13] [i_13] [8] [i_11 + 1] = var_2;
                        }
                    }
                    var_26 *= ((~(((!(!var_12))))));
                }
                for (int i_14 = 0; i_14 < 19;i_14 += 1)
                {
                    var_27 -= (min((((~var_11) ? ((var_12 ? var_8 : 28672)) : 18585)), (!var_12)));
                    var_28 = ((3024919554 ? ((min((!var_4), (!-1)))) : ((var_5 ? var_7 : ((min(var_9, var_13)))))));
                }
                for (int i_15 = 0; i_15 < 19;i_15 += 1)
                {
                    var_29 = var_5;
                    var_30 = (-32758 ? -18601 : (min(var_4, ((min(var_13, 34162))))));
                    arr_54 [i_15] = min(3113042544, ((((min(31373, -53))) ? (((var_11 ? var_8 : 1948))) : (max(2301400498, var_10)))));
                }
                /* LoopNest 2 */
                for (int i_16 = 1; i_16 < 15;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 19;i_17 += 1)
                    {
                        {
                            var_31 = (~(min(699178786, -27)));

                            for (int i_18 = 2; i_18 < 18;i_18 += 1)
                            {
                                var_32 = var_0;
                                arr_61 [i_16] [i_17] [11] [i_8] [i_16] = (max(4160319322, (max(1466638928, (max(669174104, var_0))))));
                                arr_62 [i_7 + 1] [11] [10] [i_16] [i_17] [i_18] = -53;
                                var_33 = (max(var_33, 58512));
                            }
                            var_34 = ((~(min(922350053, -31962))));
                            arr_63 [i_7] [9] [9] [i_16] [17] [i_17] = (max((~var_7), -45));
                            var_35 = ((-25941 ? (max(var_5, -48336)) : (~var_1)));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
