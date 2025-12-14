/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= -12500;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        var_19 = ((arr_1 [i_0]) ? (((2147483647 | (arr_2 [i_0] [i_0])))) : 123002702591299015);
                        arr_8 [11] [11] [i_1] [i_1] [i_0] [4] = (!787014367);
                    }
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        var_20 = (((((min(185235060112723356, var_13)))) ? (min((~var_1), (((arr_4 [i_0] [i_1] [i_0] [16]) ? (arr_9 [i_2] [i_0]) : 185235060112723356)))) : (max((-8120 | -1797504297), 185235060112723356))));

                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            var_21 = (~(max((arr_3 [i_0]), (arr_3 [i_0]))));
                            var_22 = (max((1 * 1797504285), ((((((arr_13 [i_0]) ? var_2 : -48)) < 1)))));
                            arr_14 [i_0] [i_1] [i_0] = (arr_10 [i_0] [i_2] [i_4]);
                            arr_15 [i_0] [i_0] = 1;
                        }
                        for (int i_6 = 2; i_6 < 19;i_6 += 1) /* same iter space */
                        {
                            var_23 |= (((var_1 + 2147483647) >> (!-613121565)));
                            var_24 = ((~(min(((((arr_16 [i_0] [i_4] [5] [i_0] [i_0] [i_0]) ? (arr_7 [i_0] [i_0] [i_2] [i_6]) : 1099511627712))), ((var_8 ? 18051791485918191887 : var_3))))));
                        }
                        /* vectorizable */
                        for (int i_7 = 2; i_7 < 19;i_7 += 1) /* same iter space */
                        {
                            var_25 = (max(var_25, (arr_12 [i_7] [i_7] [i_4] [i_0] [i_1] [i_0])));
                            var_26 = (min(var_26, -22623));
                            arr_20 [i_4] |= (~var_5);
                            arr_21 [i_0] [i_1] [i_2] [i_7 - 2] |= ((1797504319 ? (-22624 | 3225971226068679124) : -22608));
                        }
                        arr_22 [i_0] [1] [i_0] [i_2] [17] = (((((((((arr_11 [i_0] [i_1] [i_2] [i_0]) * -5457))) ? var_17 : ((max((arr_7 [i_0] [i_1] [12] [i_4]), 22608)))))) * (min((arr_0 [i_0]), 4294967294))));
                        var_27 = (i_0 % 2 == zero) ? (((7 ? (max(((var_8 ? -5468 : var_11)), (((arr_16 [i_0] [i_0] [19] [i_2] [i_2] [i_0]) >> (((arr_16 [i_0] [4] [4] [i_1] [i_0] [i_0]) - 8106)))))) : ((var_5 ? 2395565370 : (~5)))))) : (((7 ? (max(((var_8 ? -5468 : var_11)), (((arr_16 [i_0] [i_0] [19] [i_2] [i_2] [i_0]) >> (((((arr_16 [i_0] [4] [4] [i_1] [i_0] [i_0]) - 8106)) - 163)))))) : ((var_5 ? 2395565370 : (~5))))));
                        var_28 = 30720;
                    }
                    var_29 ^= (134 - 0);
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 17;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            {
                                arr_29 [i_0] [i_0] [i_0] [i_8] [7] = -1;
                                arr_30 [i_8] [i_1] [i_0] = (max(((var_3 ? ((min(1, 4960))) : var_1)), -1991442823));
                                var_30 = (((((3 + (arr_12 [10] [i_1] [i_2] [7] [0] [7])))) ? ((max(var_2, (arr_5 [i_2] [i_0])))) : ((65535 ? (arr_12 [i_9] [i_8] [i_2] [1] [i_1] [i_0]) : (arr_5 [i_2] [i_0])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 2; i_10 < 16;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 0;i_11 += 1)
                        {
                            {
                                var_31 &= (((1 != var_2) >= ((((((-32 ? (-127 - 1) : -108))) && 0)))));
                                var_32 += ((var_10 ? (((max((arr_33 [i_1] [i_1] [i_10] [2] [2] [i_1]), var_3)))) : -23));
                                var_33 &= ((min(var_5, (arr_6 [i_2] [i_10 + 1] [i_2] [i_10] [i_11 + 1]))));
                            }
                        }
                    }
                    var_34 &= var_16;
                }
            }
        }
    }
    #pragma endscop
}
