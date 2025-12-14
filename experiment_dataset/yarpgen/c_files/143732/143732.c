/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143732
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = ((var_7 ? (min(var_1, ((max((arr_2 [i_0]), var_5))))) : (arr_1 [i_0])));
        var_10 = ((~((var_4 ? (max((arr_0 [i_0]), (arr_1 [1]))) : (var_2 + var_3)))));
        var_11 = ((((min((max(8150862692261189010, -2433352575112297288)), (var_0 / var_1)))) ? var_6 : ((min((arr_1 [i_0]), (arr_0 [6]))))));
        arr_4 [i_0] = (((-4980476980965985113 + 54565) * (max(0, -1))));

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                arr_11 [i_0] [i_2] [i_1] [10] = max((min((arr_8 [i_0 + 2] [i_0 - 1]), var_3)), -var_5);
                var_12 = ((-((((((arr_2 [1]) ? -660437585 : var_3))) ? (18446744073709551615 + var_3) : var_8))));
                arr_12 [i_0] [i_2] [i_2] = ((var_3 ? 172882207 : (((((min(var_8, var_1)))) + (min((arr_2 [i_1]), 4808549965404777345))))));
                arr_13 [i_2] [i_2] [8] = (((((~(min(3233296365, var_9))))) ? ((-(min((arr_7 [i_0] [i_1]), var_5)))) : (((~((-1 ? var_3 : var_8)))))));
            }
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 13;i_4 += 1)
                {
                    {
                        var_13 = (((min((max(var_4, (arr_2 [i_0 + 2]))), (max((arr_16 [i_0] [i_1] [i_3] [i_1] [i_4]), 4161536)))) + (0 / 87)));
                        arr_18 [i_1] [i_1] &= var_3;
                        arr_19 [i_0] [i_1] [i_4] [i_4 - 1] = 1198292617;

                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_14 &= ((1917402833 / (((arr_7 [i_0 + 3] [i_3 - 1]) ? (arr_10 [i_0 - 1]) : (arr_7 [i_0 + 4] [i_3 - 1])))));
                            arr_23 [i_1] [i_1] [i_3] [i_4] [i_5] = ((var_7 ? var_7 : ((((min((arr_6 [1]), var_3))) ? (max(var_0, (arr_21 [i_4 - 1] [i_4 - 1] [i_3] [14] [i_5]))) : ((((arr_14 [i_0 + 1]) / 45644)))))));
                            var_15 = (max(((max(((var_3 ? var_4 : (arr_16 [7] [i_1] [10] [i_4] [i_5]))), (var_1 / var_1)))), (((((45644 ? var_2 : (arr_6 [i_5])))) ? (max(65535, var_6)) : ((max((arr_7 [i_3] [2]), 87)))))));
                        }
                    }
                }
            }
            arr_24 [i_0] [i_1] [12] = (max((max((!3449716250816193374), (arr_20 [1] [1] [1] [i_0] [1] [1] [14]))), (arr_22 [5] [i_1] [i_0] [i_1] [i_0] [i_0])));
            var_16 = (arr_22 [i_0] [i_0] [i_0] [i_1] [i_0] [i_1]);

            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {

                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    var_17 = ((min((max((arr_6 [i_0]), (arr_10 [i_0]))), var_0)));
                    arr_32 [i_7] [i_6] [i_0] [i_0] &= var_5;
                }
                arr_33 [i_0] [i_0] &= arr_22 [i_0] [i_0 + 1] [i_0 + 1] [i_6] [i_0] [i_0];
                var_18 += (((arr_21 [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1]) ? -437385224706033047 : (!47223)));
                var_19 = (max(((((((arr_31 [i_6]) ? var_5 : var_4))) ? (max(var_9, (arr_8 [5] [i_0]))) : (~var_3))), var_2));
            }
            /* vectorizable */
            for (int i_8 = 4; i_8 < 11;i_8 += 1)
            {
                var_20 = (~(arr_20 [i_0 + 3] [i_0 - 1] [11] [i_0] [i_0 + 2] [i_8 - 2] [i_0 + 3]));
                var_21 = var_6;
                arr_36 [i_0] [i_1] [i_8 + 1] [i_1] = (arr_6 [i_1]);
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 12;i_10 += 1)
                    {
                        {
                            arr_41 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = 255;
                            var_22 = ((var_4 + var_3) + var_8);
                        }
                    }
                }
                var_23 = var_5;
            }
            for (int i_11 = 0; i_11 < 15;i_11 += 1)
            {
                arr_45 [10] [i_0] [5] [i_0] = ((((((arr_39 [14] [i_0] [9] [i_1] [i_1]) ? (arr_38 [i_11] [i_11] [2] [i_0] [i_0]) : -7186057352163795454))) + (max((((arr_25 [i_0 - 1] [i_1]) ? (arr_39 [12] [i_1] [12] [i_1] [i_1]) : (arr_44 [i_11] [i_1] [i_1] [i_0]))), ((min(-55, 17259)))))));
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 15;i_12 += 1)
                {
                    for (int i_13 = 1; i_13 < 14;i_13 += 1)
                    {
                        {
                            var_24 = (-(arr_6 [i_0 - 1]));
                            var_25 = (((min(-26661, (((arr_20 [i_0 + 1] [12] [i_0] [i_12] [i_13 - 1] [i_12] [i_12]) + -8255726327505037311))))) ? (max(116, 562915593682944)) : 136);
                        }
                    }
                }
                var_26 = (max((!65535), -437385224706033043));
            }
        }
    }
    for (int i_14 = 1; i_14 < 12;i_14 += 1)
    {
        var_27 = ((~((28 ? 65528 : 5550))));
        arr_53 [i_14] [i_14] = var_7;
    }
    var_28 &= 172882234;
    #pragma endscop
}
