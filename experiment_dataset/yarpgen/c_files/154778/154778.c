/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154778
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = 251;
        arr_4 [i_0] = (!107);
        arr_5 [i_0] = (~130);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 20;i_2 += 1)
        {
            arr_11 [i_1] [i_2 - 1] [i_1] = var_11;
            arr_12 [0] [i_1] [i_1] = (var_10 - var_5);
        }
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            arr_15 [i_1] [i_1] = ((-((76 ? var_4 : -113))));
            arr_16 [i_1] [i_3] [i_3] = (((var_5 > var_7) / -var_12));
            arr_17 [i_1] [i_3] = (255 | -76);

            for (int i_4 = 3; i_4 < 20;i_4 += 1)
            {
                arr_21 [i_1] [i_4] [i_4] [i_3] = 246;
                arr_22 [18] [i_4] [i_1] [i_4] = ((var_8 ? var_0 : 82));
            }
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                arr_25 [i_5] [i_5] = (!-30);
                arr_26 [i_5] [i_5] [i_5] = ((-1 ? var_10 : 90));

                for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
                {
                    arr_30 [i_3] [i_3] = var_7;
                    arr_31 [i_1] [9] [i_5] [i_1] = var_3;
                    arr_32 [i_5] [i_3] = ((var_2 ? -1 : var_6));
                    arr_33 [i_5] [i_3] [i_5] [1] [i_6] = var_0;
                }
                for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
                {
                    arr_36 [i_1] [i_5] [i_5] [i_7] = var_0;
                    arr_37 [i_1] [i_5] [i_5] = ((var_2 / (~31)));
                }
                for (int i_8 = 0; i_8 < 22;i_8 += 1) /* same iter space */
                {
                    arr_41 [i_1] [i_5] [i_5] [i_5] [i_8] = var_8;
                    arr_42 [i_1] [i_5] [i_5] = var_12;
                    arr_43 [i_1] [i_3] [i_5] [i_5] [i_8] = (!-93);
                    arr_44 [i_5] [7] = (((!248) ? var_12 : var_2));
                }
                for (int i_9 = 0; i_9 < 22;i_9 += 1) /* same iter space */
                {
                    arr_48 [i_5] = ((127 ? 212 : ((32 ? var_8 : var_2))));
                    arr_49 [9] [i_5] [i_5] [i_5] = ((-1 || (((125 ? var_0 : 255)))));
                    arr_50 [i_1] [i_3] [i_5] [i_5] [i_1] [i_3] = (!232);
                    arr_51 [i_9] [i_9] [i_5] [i_5] = (!var_4);
                }
            }
            for (int i_10 = 4; i_10 < 21;i_10 += 1)
            {
                arr_54 [i_1] [i_3] [14] = ((var_7 ? (~var_12) : var_7));
                arr_55 [i_1] [i_3] [i_10 - 2] = var_8;
                arr_56 [i_1] [i_3] [i_10] [i_10 - 4] = ((251 ? 79 : 21));
                arr_57 [i_1] [i_1] [i_3] [i_1] = var_8;
                arr_58 [i_1] [i_3] [13] [i_10] = (!107);
            }
        }
        for (int i_11 = 0; i_11 < 22;i_11 += 1)
        {
            arr_63 [i_1] [4] [i_11] = var_11;

            for (int i_12 = 1; i_12 < 20;i_12 += 1)
            {
                arr_66 [i_1] = 5;
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 22;i_13 += 1)
                {
                    for (int i_14 = 3; i_14 < 18;i_14 += 1)
                    {
                        {
                            arr_72 [i_1] [i_11] [i_13] [i_1] [14] = ((var_10 ? (var_12 - 120) : var_0));
                            arr_73 [i_1] [i_11] [i_12] [6] [i_14] = (((((63 ? 212 : 245))) ? (var_9 | -64) : ((46 >> (252 - 246)))));
                            arr_74 [i_11] [i_13] [i_14] = (!127);
                            arr_75 [12] [12] [i_14] [i_13] [i_14] [i_14] [i_13] = 127;
                        }
                    }
                }
                arr_76 [i_12] [i_12] [i_12] [i_12] = -8;
                arr_77 [2] = ((!(-69 * -85)));
                arr_78 [i_1] [i_1] = ((~((var_13 ? 255 : var_5))));
            }
            for (int i_15 = 0; i_15 < 22;i_15 += 1)
            {
                arr_81 [i_1] = (((var_11 ? 105 : var_3)));
                arr_82 [i_1] [i_11] [i_11] = (((~255) ? ((192 ? var_7 : var_7)) : (!83)));
                arr_83 [i_1] [i_1] [1] [i_15] = ((!(((var_6 ? var_13 : var_6)))));
            }
            for (int i_16 = 2; i_16 < 21;i_16 += 1)
            {
                arr_88 [i_1] [5] [i_1] [i_1] = (((((var_0 ? var_1 : var_11))) ? ((136 >> (var_7 - 222))) : ((116 ? var_12 : var_8))));

                for (int i_17 = 3; i_17 < 21;i_17 += 1)
                {
                    arr_91 [i_1] [i_11] [i_16] [i_11] = (((var_9 ? 32 : var_2)));
                    arr_92 [i_1] [i_1] [i_1] = 239;
                    arr_93 [i_1] [i_11] [i_11] [i_16] [i_17 - 2] = ((var_10 ? ((var_11 ? var_6 : var_13)) : 230));
                    arr_94 [21] [21] [i_17] [12] = (~0);
                    arr_95 [i_1] [i_11] [i_1] [i_17] [i_17] &= ((240 ? 90 : 255));
                }
            }
            arr_96 [i_1] = var_7;

            for (int i_18 = 1; i_18 < 19;i_18 += 1)
            {
                arr_99 [i_1] [i_11] [i_18] [i_1] = (--86);
                arr_100 [i_1] [i_11] [14] [i_11] = (-23 != 81);
                arr_101 [i_11] [i_18] |= var_0;
            }
            for (int i_19 = 0; i_19 < 22;i_19 += 1)
            {
                /* LoopNest 2 */
                for (int i_20 = 0; i_20 < 22;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 22;i_21 += 1)
                    {
                        {
                            arr_109 [i_21] [i_21] [20] [i_21] [18] = ((var_8 ? ((var_0 ? -85 : var_6)) : ((var_1 ? var_3 : 1))));
                            arr_110 [i_1] [i_21] [i_19] [i_20] [i_19] [i_11] [i_20] = var_9;
                            arr_111 [i_1] [7] [i_1] [i_1] [i_1] [i_21] = ((((!(-127 - 1))) ? ((-23 ? 54 : var_2)) : ((var_4 ? 162 : -106))));
                        }
                    }
                }
                arr_112 [i_11] [i_19] = (!212);
            }
            arr_113 [i_1] = (((var_11 / 239) ? (~-1) : var_4));
        }
        arr_114 [i_1] [i_1] = var_4;
    }
    var_14 = (((((-((var_5 ? var_9 : 1))))) ? -18 : (((((var_7 ? var_12 : var_0))) ? var_1 : -93))));
    var_15 = ((50 ? (-127 - 1) : 0));
    var_16 = ((((((-var_7 + 2147483647) << ((((var_7 ? var_9 : -14)) - 112))))) ? ((((var_13 <= var_0) < 255))) : (!-var_2)));
    var_17 = var_7;
    #pragma endscop
}
