/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10666
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    var_20 = (min(255, 9223372036854775807));
                    var_21 = (min(var_21, ((((((-((var_11 ? var_18 : 255))))) ? (((-((-(arr_2 [i_1] [i_0])))))) : (max(var_14, var_4)))))));
                }
            }
        }

        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {

            for (int i_4 = 1; i_4 < 11;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 11;i_6 += 1)
                    {
                        {
                            var_22 = (min((~var_18), (arr_3 [i_0])));
                            arr_19 [i_0] [5] [i_0] [i_5] [i_6 - 1] = ((~(max((((arr_16 [i_3]) ? 3083438173515739941 : 2218052622)), 2076914697))));
                            arr_20 [i_0] [i_3] [i_0] [i_5] [i_0] |= 15301293724197909890;
                        }
                    }
                }
                var_23 = (-(((arr_10 [i_3] [i_3] [i_0]) ? (max(-9223372036854775799, 20)) : (var_2 != var_17))));
                var_24 = (((min(9575653087860666292, ((255 ? (arr_14 [i_0]) : 8388607)))) ^ 32));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 13;i_8 += 1)
                    {
                        {
                            var_25 ^= ((!(((arr_11 [i_4] [i_7] [i_8]) && 2218052622))));
                            var_26 = ((((min(((var_9 ? (arr_13 [i_0] [i_3] [i_4 + 1] [i_0]) : -1051797992)), (5837246811847340424 != -21032)))) >= 12288427516572325512));
                        }
                    }
                }

                /* vectorizable */
                for (int i_9 = 0; i_9 < 14;i_9 += 1)
                {

                    for (int i_10 = 1; i_10 < 1;i_10 += 1)
                    {
                        arr_29 [i_0] [i_3] [i_4] [i_4] [i_3] [i_0] [i_0] = ((var_11 || (~2076914674)));
                        var_27 = (min(var_27, ((((((4115891981379937265 ? var_4 : 65521))) ? (((arr_26 [i_0] [i_3] [i_3] [i_4 + 1] [i_0] [i_4 + 1]) ? var_8 : 6684665267369712559)) : 17)))));
                    }
                    var_28 &= var_6;
                    arr_30 [i_9] [i_4 + 1] [i_3] [i_0] = (arr_2 [i_0] [i_3]);
                    var_29 ^= (((-16879 / -7804) ? 227 : var_19));
                }
                for (int i_11 = 0; i_11 < 14;i_11 += 1)
                {
                    var_30 = 7578;
                    var_31 = (((~(var_5 & var_5))));
                    var_32 = var_0;

                    for (int i_12 = 0; i_12 < 14;i_12 += 1)
                    {
                        arr_38 [i_0] [i_0] [i_0] [i_11] [i_12] = ((-(~220)));
                        var_33 = 131;
                    }
                }
                /* vectorizable */
                for (int i_13 = 2; i_13 < 13;i_13 += 1)
                {
                    var_34 = ((-(~4031464098)));
                    var_35 |= (!7367957940288216381);
                }
            }

            for (int i_14 = 4; i_14 < 11;i_14 += 1)
            {
                var_36 = (~12);
                arr_44 [i_0] [i_3] [i_14 - 3] [6] |= (arr_22 [i_3] [i_3] [i_3] [i_3] [i_3]);
            }

            for (int i_15 = 1; i_15 < 12;i_15 += 1)
            {
                arr_47 [i_15] [i_0] [i_0] [i_0] = var_8;
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 14;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 14;i_17 += 1)
                    {
                        {
                            var_37 = (min((max(-7804, ((var_16 ? (arr_27 [i_0] [i_15] [i_15]) : 0)))), -var_11));
                            arr_53 [i_17] [i_15] = (!2076914674);
                            var_38 = ((~((~((1170521381 ^ (arr_2 [i_16] [i_15])))))));
                        }
                    }
                }
            }
        }

        for (int i_18 = 0; i_18 < 14;i_18 += 1)
        {
            var_39 = (arr_49 [i_18]);
            var_40 = max(var_19, (arr_42 [i_18]));
        }
    }
    var_41 = var_3;
    #pragma endscop
}
