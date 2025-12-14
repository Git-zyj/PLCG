/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119240
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((~((max(var_3, (!67))))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = var_15;

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            arr_7 [i_0] [i_1] [i_1] = var_13;

            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                var_17 = (min(var_17, ((((arr_4 [i_0]) ^ 3)))));
                var_18 -= ((3 ? (-178908610 / var_13) : (((!(~var_6))))));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        {
                            var_19 = (~var_5);
                            var_20 -= (min((arr_10 [i_0] [i_0] [23] [i_0]), ((min((!var_9), 218)))));
                            arr_16 [i_0] [i_3] [i_2] [i_3] [i_4] = (((((-(~57)))) || 64));
                            var_21 = ((((!-58) ? (min(var_3, var_8)) : 2)));
                        }
                    }
                }
                arr_17 [i_0] [i_1] [i_2] [i_1] = ((((!(-2147483647 - 1))) || (((-127 - 1) || 951332984))));
            }
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 22;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        {
                            arr_28 [6] [i_1] [i_5] [6] [i_7] [i_5] = arr_8 [i_7] [i_6] [i_5] [8];
                            var_22 = (min(var_22, ((min((~-64), 24)))));
                        }
                    }
                }
                arr_29 [i_0] [i_1] [20] [i_5] = (arr_8 [i_0] [i_0] [i_0] [i_0]);
            }
            for (int i_8 = 0; i_8 < 25;i_8 += 1)
            {
                arr_32 [i_0] [i_1] [i_0] [i_8] = var_13;
                arr_33 [i_0] [i_0] [i_0] [i_0] = (((((-127 - 1) ^ 3)) ^ (var_13 / var_3)));
            }
        }
        for (int i_9 = 0; i_9 < 25;i_9 += 1)
        {

            for (int i_10 = 2; i_10 < 21;i_10 += 1)
            {
                var_23 = (min(var_23, (((2 ? (-127 - 1) : -9)))));
                arr_40 [2] [i_9] [2] = ((!((((((110 ? -32 : var_6))) ? 191 : (min(18, 178908628)))))));
            }
            /* vectorizable */
            for (int i_11 = 3; i_11 < 24;i_11 += 1)
            {
                arr_44 [i_0] [i_9] [i_11] = ((arr_13 [i_11 - 2] [i_11 - 1] [i_11 - 2] [i_11 - 1] [i_11]) ^ (arr_18 [i_0] [i_0] [i_0] [i_0]));
                var_24 = (min(var_24, (-10 & -123)));
            }
            arr_45 [i_9] [i_9] = (max((-127 - 1), var_14));
            arr_46 [i_9] = (min((((arr_26 [i_0] [i_0] [i_0] [i_9] [i_9]) & (arr_2 [i_9]))), ((211 ? 197 : ((64 ? var_10 : 110))))));
        }
        for (int i_12 = 0; i_12 < 25;i_12 += 1)
        {
            /* LoopNest 3 */
            for (int i_13 = 0; i_13 < 25;i_13 += 1)
            {
                for (int i_14 = 1; i_14 < 21;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 25;i_15 += 1)
                    {
                        {
                            var_25 = (~193);
                            arr_59 [i_0] [i_12] [3] = ((32767 ? 853400479 : 192));
                        }
                    }
                }
            }

            for (int i_16 = 0; i_16 < 25;i_16 += 1)
            {
                arr_62 [i_0] [i_12] [i_12] = (((127 ? (arr_20 [i_0] [i_0] [i_12] [i_16]) : 20)));
                arr_63 [i_0] [i_12] [i_16] = ((-2 ? var_8 : ((((((arr_27 [i_0] [i_0] [i_0] [i_0]) ? (arr_54 [i_0] [i_0] [i_0] [i_16]) : var_0))) ? 152 : var_11))));
            }
            for (int i_17 = 0; i_17 < 25;i_17 += 1)
            {
                /* LoopNest 2 */
                for (int i_18 = 1; i_18 < 23;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 25;i_19 += 1)
                    {
                        {
                            arr_73 [i_19] [6] [i_18] [i_18] [i_0] [i_0] = (((-1458364544 & 197) ? 0 : 64));
                            arr_74 [i_18] [i_12] [i_17] [i_17] [i_19] [i_18] [i_17] = -32;
                            arr_75 [i_0] [i_18] [i_12] [i_18] [17] = (min(-1319756484, var_6));
                            arr_76 [i_0] [i_18] [8] [6] [i_18] [i_18] [i_19] = (-(((!(!128)))));
                        }
                    }
                }
                arr_77 [i_0] [1] [i_17] [i_17] = (min(127, var_1));
                var_26 = ((var_1 ? (arr_30 [i_0] [i_0]) : (min(var_6, ((-96 ? -96 : 33553408))))));
            }
            var_27 = (min(138, (max((min((arr_69 [i_0]), (arr_42 [i_0] [20] [i_0]))), 255))));

            for (int i_20 = 1; i_20 < 23;i_20 += 1)
            {
                arr_80 [i_0] = var_0;
                arr_81 [i_0] [i_0] [i_20] = var_5;
            }
            var_28 = var_13;
        }
        var_29 = ((((max(220, var_0)) / var_11)));
        var_30 = (min(var_30, ((var_14 ^ ((127 ? ((max(83, var_1))) : 2096640))))));
    }
    var_31 = var_3;
    #pragma endscop
}
