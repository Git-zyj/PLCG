/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181169
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_0 + 1] [i_1] [i_2] = var_10;
                    var_11 *= ((6161813733525034344 % 6161813733525034344) ? 6161813733525034344 : ((((!((min(var_7, var_3))))))));
                }
            }
        }
        var_12 = (min(var_12, (-6161813733525034344 == 195)));
    }
    for (int i_3 = 1; i_3 < 22;i_3 += 1) /* same iter space */
    {
        arr_11 [i_3] [i_3] = (min(871411861, (((var_10 <= ((var_8 ? 6161813733525034339 : var_9)))))));
        var_13 = (((6209274485360027106 | 0) / ((70 ? var_7 : -6209274485360027106))));
    }
    for (int i_4 = 1; i_4 < 22;i_4 += 1) /* same iter space */
    {

        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            arr_16 [i_5] [i_5] [i_4] = (~-194804880);
            arr_17 [i_4] [i_5] = 2267;
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
        {
            var_14 += var_3;
            var_15 += ((var_8 ? (-32767 - 1) : var_7));
            var_16 = (255 >> 0);
        }
        for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
        {
            arr_22 [i_4] [i_4] [i_4] |= ((var_6 ^ (~var_5)));
            var_17 = var_8;
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 21;i_9 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_10 = 3; i_10 < 21;i_10 += 1)
                        {
                            arr_31 [i_9] = var_3;
                            arr_32 [i_4] [i_9] = (var_9 & 1);
                            arr_33 [2] [i_4 - 1] [i_8] [i_9] [i_10] [i_7] [i_10] = (var_4 + 65535);
                            arr_34 [i_10] [i_9] = 4287;
                        }
                        for (int i_11 = 1; i_11 < 22;i_11 += 1)
                        {
                            var_18 |= (((max(6209274485360027106, 2267)) << (255 - 254)));
                            var_19 = (~(((!(~var_10)))));
                        }

                        /* vectorizable */
                        for (int i_12 = 4; i_12 < 22;i_12 += 1)
                        {
                            arr_41 [i_4 - 1] [i_7] [i_7] [i_9] [i_9 + 2] [i_12] = ((!(~var_7)));
                            arr_42 [i_4 + 1] [10] [i_9] [i_9] = ((var_1 >> (39700 - 39698)));
                        }
                        for (int i_13 = 4; i_13 < 19;i_13 += 1)
                        {
                            var_20 = ((min(var_4, 3)));
                            arr_47 [i_4] [i_7] [i_8] [i_9] [i_9] = (~var_7);
                            arr_48 [i_9] [i_9] [i_9] [i_8] [i_7] [i_9] = (((675486863 ? 1830997444013902578 : var_6)) * (((min(var_6, var_2)))));
                        }
                        var_21 ^= -var_0;
                        arr_49 [i_4 - 1] [i_4 - 1] [i_9] = (min((max(156, 15666330642652328101)), (((0 ? (var_6 && 40665) : (-2147483647 - 1))))));
                        arr_50 [3] [i_4] [i_9] [i_4] [i_9] = ((!((max((!var_3), var_2)))));
                    }
                }
            }
            var_22 *= var_7;
        }
        /* LoopNest 3 */
        for (int i_14 = 3; i_14 < 22;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 1;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 23;i_16 += 1)
                {
                    {
                        arr_59 [i_15] [i_15] [i_15] [i_15] = ((min(2267, (max(var_10, 18446744073709551615)))));
                        arr_60 [i_4] [i_14] [i_15] [i_16] = -255;
                        var_23 = ((min(var_1, -2595271012269807516)) != (((max(0, 241)))));
                        arr_61 [i_4] [i_4] [i_14] [i_15] [i_16] [i_16] = (~((min((var_7 > 239), var_9))));
                    }
                }
            }
        }
        arr_62 [5] [i_4 - 1] = var_0;

        for (int i_17 = 1; i_17 < 22;i_17 += 1)
        {
            var_24 = (min(18446744073709551605, (var_0 & 2780413431057223521)));

            /* vectorizable */
            for (int i_18 = 0; i_18 < 23;i_18 += 1)
            {
                var_25 = (max(var_25, (!9007199254740991)));
                arr_69 [i_4] [i_18] [14] [i_18] = (~2913096702);
            }
        }
        /* vectorizable */
        for (int i_19 = 0; i_19 < 1;i_19 += 1)
        {
            var_26 += var_4;
            var_27 = (max(var_27, var_1));
            arr_73 [i_19] [19] [i_4] = (!255);
            var_28 += ((var_0 ? -var_3 : (var_10 / var_4)));

            for (int i_20 = 0; i_20 < 1;i_20 += 1)
            {
                arr_78 [i_4 + 1] [i_19] [i_20] = var_5;
                arr_79 [1] [i_19] = -194804880;
            }
            for (int i_21 = 2; i_21 < 21;i_21 += 1)
            {
                arr_83 [i_4] [i_19] [11] [i_21] = (((-194804880 / 255) ^ 8062992704146501591));
                arr_84 [i_21 + 1] [i_21] [i_19] [20] = (~var_4);
            }
        }
        arr_85 [i_4] [i_4 + 1] &= (!((max(var_10, 216593916151588903))));
    }
    var_29 = ((((min(var_4, var_0))) ? (((1 || ((((((((-2147483647 - 1) + 2147483647)) + 2147483647)) >> (4002 - 3995))))))) : var_10));
    #pragma endscop
}
