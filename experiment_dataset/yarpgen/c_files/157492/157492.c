/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157492
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(((((min(var_0, 62475))) ? ((4927674632581406378 ? var_3 : var_7)) : var_11)), var_11));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = (min(var_15, (arr_1 [i_0] [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0] [i_2] [i_0] [i_3 - 1] [i_4] = (max((max((arr_5 [i_4] [i_2] [i_3 + 2] [i_2]), (arr_5 [i_4] [i_3] [i_3 + 2] [i_3]))), 1));
                                var_16 = (min(var_16, (min(((max((arr_2 [i_2]), (min(var_1, var_12))))), var_3))));
                                var_17 = (min((min((((62491 ? 3015 : var_1))), (arr_7 [i_4] [i_3 - 3] [i_1] [i_0]))), (arr_8 [i_3 + 1] [i_3])));
                                var_18 = var_3;
                            }
                        }
                    }

                    for (int i_5 = 4; i_5 < 20;i_5 += 1)
                    {

                        for (int i_6 = 2; i_6 < 21;i_6 += 1)
                        {
                            arr_21 [i_0] [i_0] [i_5] = 16777215;
                            var_19 *= (var_5 ? (((!(min(0, (arr_3 [i_0] [i_5 + 2])))))) : (((var_7 >= (max((arr_18 [i_0] [i_1] [i_1] [i_6 - 2]), var_10))))));
                            var_20 = ((!((min((arr_18 [i_0] [i_5] [i_5] [i_6]), var_2)))));
                        }
                        arr_22 [i_0] [i_5] [i_2] [i_2] [i_5 - 3] [i_5 - 1] = 8191;
                        arr_23 [i_0] [i_5] [i_0] [i_0] = (((arr_4 [i_1]) << (((arr_10 [i_0] [i_0] [i_1] [i_2] [i_5 - 2]) - 166))));
                    }
                    for (int i_7 = 1; i_7 < 20;i_7 += 1)
                    {
                        arr_28 [i_1] [i_1] [i_1] [i_1] [i_1] [i_7] = (arr_10 [i_0] [i_0] [i_0] [i_7] [i_1]);
                        var_21 = var_3;
                        arr_29 [i_0] [i_1] [i_2] [i_7] = ((max(((min((arr_1 [i_1] [i_1]), (arr_4 [i_0])))), 62503)));
                        var_22 -= (max((arr_17 [i_2] [i_2] [i_2] [i_2] [i_1]), (((var_7 ? 1 : 62521)))));
                    }
                }
            }
        }
    }
    for (int i_8 = 2; i_8 < 14;i_8 += 1)
    {
        arr_33 [i_8 + 2] = (max(((max(3015, (arr_24 [i_8 - 2] [i_8 + 2] [i_8 - 2] [i_8 + 1])))), ((~(arr_24 [i_8 + 1] [i_8 - 2] [i_8 - 2] [i_8])))));
        arr_34 [i_8] [i_8] = 1073741823;

        for (int i_9 = 0; i_9 < 16;i_9 += 1)
        {
            var_23 = (min(var_23, var_10));
            var_24 = (max((!3154872864), ((1140094411 ? 3154872864 : 65532))));

            for (int i_10 = 0; i_10 < 16;i_10 += 1)
            {
                arr_42 [i_8] [i_8] [i_9] [i_10] = var_13;
                var_25 = var_3;
                var_26 = (((var_10 >= 23183) ? 349668523448412871 : (min(377070819, (arr_16 [i_8 + 1] [i_8 + 1] [i_8 + 1])))));
                var_27 -= min((65530 || var_3), (min(65532, 11)));
                var_28 = (max(62480, ((((arr_11 [i_8 + 1] [i_9] [i_8 + 1] [i_9] [i_10] [i_10] [i_10]) * 1)))));
            }
            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                var_29 = (((231 << (((arr_46 [i_8] [i_8 + 2]) + 46)))));
                var_30 = (((~62506) ? 3044 : 17863));
                var_31 = var_8;
                var_32 = (max((min(var_1, (((arr_1 [i_9] [i_9]) ^ (arr_41 [i_8] [i_9] [i_8] [i_11]))))), (((3917896476 < (arr_38 [i_8 + 1] [i_9] [i_9] [i_11]))))));

                for (int i_12 = 0; i_12 < 16;i_12 += 1)
                {
                    var_33 = (min(((((arr_49 [i_8 - 2]) ? ((3029 ? var_7 : 3015)) : (arr_14 [i_12] [i_11] [i_8 + 2] [i_8 + 2] [i_8 + 2])))), (arr_0 [i_8 + 2])));
                    var_34 -= (((var_12 ? ((3040 ? var_7 : 3154872865)) : (((min(1, var_2)))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_13 = 0; i_13 < 16;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 16;i_14 += 1)
            {
                {
                    var_35 = (max((arr_7 [i_8] [i_8] [i_8 - 2] [i_8]), (arr_24 [i_13] [i_13] [i_13] [i_8])));
                    var_36 = (max(1140094429, 157));
                    arr_57 [i_8 - 1] [i_8] [i_8 - 1] = (min(3045, ((((max(var_0, 730038358))) ? ((var_7 + (arr_46 [i_8] [i_14]))) : 3030))));
                }
            }
        }
        var_37 = (((((var_5 << (((arr_0 [i_8 - 1]) - 4235020629)))) << (((var_7 + 1382109085) - 11)))));
    }
    var_38 = (min(var_0, ((((max(var_9, 3154872862)) <= (max(-1, 3154872867)))))));
    #pragma endscop
}
