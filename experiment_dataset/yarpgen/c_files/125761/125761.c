/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125761
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] = var_2;
        arr_4 [1] = var_1;
        arr_5 [i_0] = 1;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            arr_12 [i_2] = (arr_8 [i_1] [i_2]);
            var_10 = (((arr_8 [i_2] [5]) >> (((arr_2 [i_2]) + 6404729331366104396))));
            var_11 = (arr_2 [18]);
            /* LoopNest 3 */
            for (int i_3 = 1; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 0;i_5 += 1)
                    {
                        {
                            arr_21 [12] [i_1] [i_1] = (7043724890925466956 >= var_1);
                            arr_22 [11] [i_3] [i_2] = (((((arr_2 [i_3 - 1]) + 9223372036854775807)) >> (var_7 - 2752289784)));
                        }
                    }
                }
            }
        }
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            var_12 = (((arr_13 [i_1]) + (arr_7 [i_1])));
            arr_26 [i_6] = (var_5 - var_6);
        }
        arr_27 [i_1] [14] = var_5;
        var_13 = -7043724890925466971;

        for (int i_7 = 3; i_7 < 21;i_7 += 1)
        {
            arr_30 [i_7] = ((var_5 >> ((var_6 ? 20 : (arr_7 [i_1])))));
            var_14 = var_5;
            /* LoopNest 3 */
            for (int i_8 = 1; i_8 < 20;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 19;i_10 += 1)
                    {
                        {
                            arr_39 [i_1] [i_7] [12] [i_9] [i_10] = ((1800948061 != (arr_17 [i_10 - 1] [i_8 + 2] [i_8 + 2] [i_9] [11])));
                            arr_40 [i_1] [i_7] [16] = var_0;
                            arr_41 [i_1] [i_1] [i_1] [i_7] [i_1] = -352999502;
                        }
                    }
                }
            }
        }
        for (int i_11 = 0; i_11 < 22;i_11 += 1) /* same iter space */
        {
            arr_44 [14] [i_11] [14] = (((arr_20 [i_1] [i_11]) ? 1970324836974592 : (arr_20 [i_1] [i_1])));
            arr_45 [i_1] [i_11] = (4099136708 ^ 7043724890925466970);
            arr_46 [i_11] [i_11] = (arr_36 [i_11] [i_11] [i_11] [i_1] [18]);
            arr_47 [i_11] [i_1] = arr_17 [19] [i_11] [i_1] [i_1] [19];
            /* LoopNest 2 */
            for (int i_12 = 3; i_12 < 20;i_12 += 1)
            {
                for (int i_13 = 2; i_13 < 18;i_13 += 1)
                {
                    {
                        arr_54 [i_12] [i_12 - 2] [i_11] [i_12] = var_7;

                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            var_15 = (((arr_37 [i_12 - 2] [i_12] [i_12 + 1] [i_12 + 1] [i_12 + 1]) ? var_4 : 2016));
                            var_16 = ((-1055061939 || (arr_49 [i_12])));
                        }

                        for (int i_15 = 1; i_15 < 21;i_15 += 1)
                        {
                            arr_59 [i_12] = 2044;
                            arr_60 [i_1] [i_12] [i_12] [i_12] [i_1] = ((((((arr_38 [i_1] [i_11] [i_12 - 2] [i_12 - 2] [i_13 + 2] [i_15 + 1] [i_12 - 2]) + var_8))) ? var_7 : var_9));
                        }
                        arr_61 [i_12] = 4294967295;
                        arr_62 [i_13] [i_13 + 1] [i_13] [i_12] = (((var_4 * var_8) * var_9));
                    }
                }
            }
        }
        for (int i_16 = 0; i_16 < 22;i_16 += 1) /* same iter space */
        {
            arr_65 [i_1] [i_1] = (arr_7 [i_1]);
            arr_66 [i_1] = var_3;
            arr_67 [i_1] [i_16] [i_16] = var_9;
            var_17 = 2673081719;
        }
        for (int i_17 = 3; i_17 < 21;i_17 += 1)
        {
            /* LoopNest 2 */
            for (int i_18 = 3; i_18 < 20;i_18 += 1)
            {
                for (int i_19 = 2; i_19 < 20;i_19 += 1)
                {
                    {
                        arr_76 [i_1] [i_17] [i_18] [i_1] [12] [i_17] = (39006 == 2959408252);
                        var_18 = var_8;
                        arr_77 [9] [i_17] = (-7043724890925466956 <= 7);
                        arr_78 [i_1] [i_1] [i_18 + 2] [i_18 + 2] [i_1] [i_17] = 6677896678211141830;
                    }
                }
            }
            arr_79 [i_1] [i_17 - 2] [i_17] = (arr_17 [i_1] [10] [i_1] [i_17] [i_1]);
        }
    }
    var_19 = var_5;
    var_20 = min(var_5, var_5);
    #pragma endscop
}
