/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168282
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_10 = (min(var_10, 27791));
                                var_11 = var_3;
                                var_12 = var_5;
                            }
                        }
                    }
                    arr_15 [i_0] [i_2] [i_2] [i_2] = ((((max(11235317372032631893, 8626178400309280564))) ? (((arr_12 [i_0] [i_0] [i_2]) ? var_2 : (max(15, (arr_2 [i_1 + 1] [i_1] [i_1]))))) : ((((1023 ^ 1) | var_8)))));

                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        var_13 = (max(var_13, var_7));

                        for (int i_6 = 1; i_6 < 12;i_6 += 1)
                        {
                            var_14 = (min(8626178400309280550, ((min(249, 1)))));
                            var_15 = ((8626178400309280565 ? (((max(18446744073709551615, 0)))) : (arr_14 [i_0] [i_0] [i_0])));
                        }
                        for (int i_7 = 1; i_7 < 11;i_7 += 1)
                        {
                            var_16 = (min(((max(1, 255))), (((var_9 ? var_9 : (arr_22 [i_2] [i_1] [i_2] [i_5] [i_7 - 1]))))));
                            var_17 |= 0;
                            var_18 = ((!((((18446744073709551615 ? 475735148 : var_6))))));
                            var_19 = 1467010222;
                            arr_26 [i_0] [i_2] [i_2] = 0;
                        }
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        var_20 = (min(var_20, ((((((70 ? (min(-1265784555, 1)) : 11))) ? 7153368504308928328 : 1)))));

                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            arr_32 [i_0] [i_1] [i_2] [i_2] [i_8] [i_8] [i_2] = var_6;
                            var_21 |= -475735148;
                            arr_33 [i_0] [i_1] [i_2] [i_8] [i_9] [i_2] [i_9] = 50481;
                        }
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            arr_37 [i_0] [i_0] [i_2] = var_6;
                            var_22 = (max(var_22, (((((1 ? 1 : 12250)) < ((((min(1, 53056))) ? (~-1315138706) : (arr_1 [i_8]))))))));
                        }
                        var_23 = (min(var_23, 20512));

                        /* vectorizable */
                        for (int i_11 = 1; i_11 < 1;i_11 += 1) /* same iter space */
                        {
                            arr_41 [i_0] [i_1 + 1] [i_2] [i_0] [i_8] [i_11] |= 18446744073709551615;
                            var_24 = (min(var_24, 0));
                            arr_42 [i_0] [i_1 + 1] [i_1] [i_2] [i_0] = (1206458277 + 179);
                        }
                        for (int i_12 = 1; i_12 < 1;i_12 += 1) /* same iter space */
                        {
                            arr_45 [i_0] [i_2] [2] [i_0] [i_0] = min((min(1, (max(-1315138706, -1206458277)))), (arr_11 [i_2] [i_1 + 1]));
                            var_25 = (min(var_25, (4172485690715516011 % 2147483647)));
                        }
                    }
                }
            }
        }
    }
    var_26 |= (((-2590 ? (((524287 ? 2909357420 : 2827957071))) : (var_6 / var_4))));
    var_27 = ((max((min(var_5, 12480)), 55)));
    #pragma endscop
}
