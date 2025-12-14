/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180056
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = var_6;
        var_10 = (max((((((var_4 ? var_7 : var_3))) ? 1 : var_6)), (min(var_9, (max((arr_0 [i_0]), var_4))))));

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                var_11 = ((min(647444227, 1008)));
                var_12 = max(((var_9 ? var_4 : 1745441782)), var_2);
                var_13 = ((((((arr_1 [i_0]) ? var_0 : 1914690305))) ? var_8 : (((arr_1 [i_0]) ? 1745441782 : 20652))));
            }
            for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
            {
                arr_10 [i_0] [i_0] [i_0] [i_3] = (arr_4 [i_0]);
                arr_11 [i_3] [i_0] [i_0] [i_0] = 65535;
                var_14 = (min(121, var_0));
            }
            for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
            {
                var_15 = min((((arr_3 [i_1]) ? (arr_8 [i_1]) : (arr_8 [i_0]))), (min((arr_8 [i_0]), (arr_8 [i_1]))));
                var_16 = ((((max((arr_3 [i_0]), (arr_3 [i_0])))) ? var_2 : (((6 | (arr_3 [i_1]))))));
                var_17 = (min((((min(0, (arr_12 [i_0] [i_1] [i_0]))))), 1));
            }
            for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
            {
                arr_17 [i_1] = var_4;
                var_18 = (min((~var_2), (77 * var_4)));
                arr_18 [i_0] [i_5] = (min((((1 ? -647444216 : -590392480))), (((arr_6 [i_1] [i_5]) ? var_0 : (arr_6 [i_0] [i_1])))));
            }
            var_19 = ((-(min(1, -647444234))));
            var_20 = ((~((min((((arr_4 [i_1]) || 133)), (15426 && 909852212))))));

            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                var_21 = (((((var_6 ? -7973672095557282260 : 192))) ? var_5 : (arr_15 [i_6] [i_6] [i_6])));

                for (int i_7 = 1; i_7 < 23;i_7 += 1)
                {
                    arr_25 [7] [i_1] [i_1] [i_6] [i_7] = ((((!((min(var_0, var_8))))) ? var_0 : (~1745441782)));
                    var_22 = ((~((((!25265) && ((max(194, var_0))))))));
                    var_23 = (var_1 ? (((min((arr_8 [8]), (arr_4 [21]))))) : (((var_7 ? var_5 : (arr_15 [i_7] [i_6] [i_0])))));
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 25;i_8 += 1)
                {
                    var_24 = var_3;

                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        var_25 = 61;
                        var_26 = ((var_4 ? (arr_16 [i_1] [1] [i_1] [i_9]) : (arr_20 [2] [i_1])));
                        var_27 = (arr_5 [i_0] [i_1] [i_6] [i_9]);
                        arr_32 [i_1] = ((arr_20 [i_0] [i_0]) - (arr_20 [i_1] [i_9]));
                        arr_33 [i_0] [i_0] [i_0] [i_0] [i_0] = (((var_3 ? var_7 : (arr_12 [i_1] [i_8] [i_1]))));
                    }
                    for (int i_10 = 1; i_10 < 24;i_10 += 1)
                    {
                        arr_36 [i_10 + 1] [i_6] [i_6] [i_8] [1] = (arr_31 [i_0] [i_1] [i_6] [i_8] [i_10]);
                        arr_37 [5] [19] [19] [1] [i_1] = var_9;
                    }
                    var_28 = ((var_4 ? var_7 : 1745441777));
                    var_29 = var_4;
                }
                for (int i_11 = 0; i_11 < 25;i_11 += 1) /* same iter space */
                {
                    var_30 = ((21 ? (~4095) : var_5));
                    var_31 = max(((min(84, (arr_21 [i_0])))), var_4);
                    var_32 = ((!((max(-31327, var_9)))));
                }
                for (int i_12 = 0; i_12 < 25;i_12 += 1) /* same iter space */
                {
                    arr_44 [i_0] [i_0] [i_0] = var_8;
                    var_33 = ((((min(2380276990, (var_9 && var_4)))) ? 83 : (((arr_41 [i_0] [i_0] [i_0] [i_12]) ? (max(var_9, (arr_34 [i_0] [i_0] [17] [i_1] [i_0] [i_6] [i_0]))) : (arr_7 [i_0] [i_1] [i_6] [i_0])))));
                    var_34 = (((arr_14 [i_0] [i_1] [i_6] [i_12]) ? (((var_5 <= (arr_14 [i_0] [i_1] [18] [i_12])))) : var_3));
                }
                arr_45 [i_6] [i_6] [i_6] [i_6] = (((((2033514325 ? 1049629538795747908 : 22))) || ((max((var_6 > 1), ((22 ? (arr_8 [i_0]) : 1)))))));
            }
            /* vectorizable */
            for (int i_13 = 0; i_13 < 25;i_13 += 1)
            {
                arr_49 [i_0] [i_1] [1] = -var_4;
                var_35 = ((1 ? (((arr_40 [1] [i_13]) >> (var_6 - 1830355008260100039))) : (arr_40 [i_0] [i_1])));
            }
            /* vectorizable */
            for (int i_14 = 0; i_14 < 1;i_14 += 1)
            {
                var_36 = (((~var_0) ? (arr_47 [i_0] [i_14]) : (arr_46 [i_0] [i_1] [i_14])));
                var_37 = (((arr_47 [i_1] [i_14]) || var_6));
                var_38 = var_7;
                var_39 = (((arr_39 [i_14] [i_0] [i_1] [i_0] [i_0] [i_0]) ? (var_5 != var_0) : 83));
            }
        }
    }
    for (int i_15 = 0; i_15 < 13;i_15 += 1)
    {
        arr_55 [i_15] = (((arr_50 [i_15]) == -926939911));

        for (int i_16 = 0; i_16 < 13;i_16 += 1) /* same iter space */
        {
            arr_59 [9] = ((63 ? ((1 ? 183 : (-2147483647 - 1))) : -83));
            arr_60 [i_15] [i_15] [i_16] = (max((((1522749783922253312 ? var_5 : 0))), (!var_1)));
        }
        for (int i_17 = 0; i_17 < 13;i_17 += 1) /* same iter space */
        {
            var_40 = 98;
            /* LoopNest 3 */
            for (int i_18 = 0; i_18 < 13;i_18 += 1)
            {
                for (int i_19 = 4; i_19 < 10;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 13;i_20 += 1)
                    {
                        {
                            var_41 = (min((arr_69 [i_15] [i_17]), ((((141989492 ? var_5 : var_8))))));
                            var_42 = ((((((((arr_22 [1]) ? var_5 : var_5))) ? (arr_56 [i_19]) : 1)) >= ((((max(170, (arr_66 [i_15] [2] [i_18] [i_20]))))))));
                            var_43 = (min((max(23, (min(var_2, (arr_31 [i_15] [i_17] [i_18] [i_19 + 3] [i_20]))))), (((var_6 ? var_0 : (arr_53 [1] [i_19 - 4]))))));
                            arr_70 [i_15] [i_17] [8] [i_19 + 3] [i_20] [i_20] = var_8;
                            var_44 = ((!((((arr_13 [i_19 - 3] [i_19 - 2] [i_19 + 1] [18]) ? (arr_13 [i_19 + 1] [i_19 - 1] [6] [13]) : var_0)))));
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_21 = 0; i_21 < 13;i_21 += 1) /* same iter space */
        {
            var_45 = var_3;

            for (int i_22 = 0; i_22 < 13;i_22 += 1)
            {
                var_46 = (((arr_19 [i_15]) ? var_8 : 1));
                var_47 = 15208807857968256880;
            }
            for (int i_23 = 0; i_23 < 1;i_23 += 1)
            {
                var_48 = (((!98) ? (arr_20 [i_15] [i_23]) : 5955547693679343047));
                var_49 = (arr_76 [i_23]);
                arr_79 [i_23] [i_23] = 6443510996387736333;
            }
            for (int i_24 = 0; i_24 < 13;i_24 += 1)
            {
                var_50 = ((1 ? 5839436948820393099 : 45));
                var_51 = (((arr_64 [11] [i_21] [i_21] [i_24]) ? var_4 : (arr_38 [i_15] [i_15] [i_15] [i_15] [i_21] [i_24])));
                arr_83 [i_24] [i_24] [5] [i_24] = var_8;
                var_52 = (((((var_6 ? 64 : var_2))) == var_6));
            }
            for (int i_25 = 2; i_25 < 12;i_25 += 1)
            {
                arr_86 [i_15] [i_21] [i_15] [i_15] = 1418978547;
                var_53 = 1;
                var_54 = ((4 ? 83 : -5));
                var_55 = (((arr_29 [i_15] [i_25 + 1] [i_25] [i_25 - 2] [i_15]) ? var_0 : (arr_29 [i_25 - 1] [i_25 + 1] [i_25 - 2] [i_25 - 2] [i_21])));
            }
        }
    }
    var_56 = var_3;
    #pragma endscop
}
