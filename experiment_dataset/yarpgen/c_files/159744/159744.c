/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159744
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_15;
    var_21 = ((var_5 - (min(var_1, (min(var_12, 1))))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_22 = (!var_14);
        arr_3 [7] = var_7;
        var_23 = ((var_11 > (1 - 10)));
        var_24 = (((arr_0 [i_0] [5]) >> ((((var_17 && -20) && -10)))));
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 12;i_2 += 1)
            {
                {
                    var_25 *= -855960402;

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        arr_12 [i_0] [i_1 - 1] [i_2] [i_3] = ((-((var_19 / (-127 - 1)))));
                        arr_13 [3] [i_1] [3] = ((31 > ((((arr_0 [i_1 - 3] [i_1 - 3]) < var_3)))));

                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            arr_18 [12] [i_2 - 3] [12] [6] = (((((arr_15 [i_1 - 3] [i_1 - 4] [i_2 - 3] [i_2 - 3]) == (arr_15 [i_1 - 3] [i_1 + 1] [i_2 + 2] [i_2 - 1]))) || (arr_15 [i_1 + 1] [i_1 + 1] [i_2 - 2] [i_2 - 1])));
                            var_26 = (min(var_26, (((((1 << (34 - 22))) == 15)))));
                        }

                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            var_27 = 12819;
                            var_28 = (!213);
                        }
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            var_29 *= 140;
                            var_30 = (((!112) ? ((((arr_6 [i_1 - 2] [i_1] [i_1 - 4]) & (arr_6 [i_1 - 4] [i_1 - 3] [i_1 - 2])))) : (((arr_6 [i_1 - 2] [i_1 - 2] [i_1 - 1]) + (arr_10 [2] [i_2 - 4] [5] [i_1 - 2])))));
                            var_31 = max(((max(15, (arr_17 [i_2] [i_2] [i_2 - 3] [i_2 + 2] [i_2])))), (max((((arr_2 [i_0] [i_0]) << (((arr_23 [i_0] [i_1] [i_2] [i_0] [i_1] [i_2] [i_0]) - 16893375516695791876)))), (~var_6))));
                            var_32 *= ((~(855960396 / 1179621265)));
                        }
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        arr_29 [i_0] [i_1] [i_7] = ((var_14 || (((15 ? 2147483647 : -896596071)))));
                        var_33 = (arr_15 [i_2 - 1] [i_1 - 2] [i_1 - 1] [i_1 - 2]);
                    }
                    for (int i_8 = 1; i_8 < 13;i_8 += 1)
                    {
                        arr_34 [i_8] [i_8] [i_8] = ((((min((min(268435456, 2147483647)), (!var_8)))) || var_16));
                        var_34 = (((((!(arr_26 [i_8 - 1] [i_8 - 1] [i_8 + 1] [i_8] [i_8 + 1] [i_8 - 1])))) - var_9));
                    }
                    var_35 = ((~((((var_16 ^ var_12) || 35519)))));
                    var_36 *= (min((~var_17), (~17089735906955247551)));
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 12;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 14;i_10 += 1)
                        {
                            {
                                var_37 *= (max((max((arr_8 [i_2 - 4] [i_2 - 4] [i_2 + 2] [i_2 + 2]), 13205)), (((!(arr_8 [i_2] [i_2 - 2] [i_2 - 2] [i_2 + 2]))))));
                                arr_40 [13] = (-268435457 < -4);
                            }
                        }
                    }
                }
            }
        }
    }
    var_38 = (max(var_0, (max(var_6, var_6))));
    #pragma endscop
}
