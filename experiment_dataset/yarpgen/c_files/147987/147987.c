/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147987
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_10;
    var_12 = var_8;
    var_13 -= var_5;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_5 [i_0] [i_0] = (arr_2 [17]);
            arr_6 [i_1] = (((arr_0 [i_0]) ^ (arr_0 [i_1])));
            var_14 = var_4;
            var_15 = (max(var_15, ((((arr_4 [1] [i_1]) != 18446744073709551615)))));
        }
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_16 ^= 86;
            var_17 = (((arr_8 [0]) ? ((49608 ? (arr_9 [i_0] [i_0]) : var_5)) : (arr_3 [i_0] [i_2])));
            arr_10 [i_0] [16] = 19;
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 22;i_4 += 1)
                {
                    {
                        var_18 = (min(var_18, ((((arr_12 [i_4 - 1] [i_4 - 1] [i_0] [i_4]) ? var_10 : 2148166985)))));
                        var_19 &= ((~((-(arr_1 [i_3])))));
                        var_20 = -1821646011;
                        var_21 = 128;
                        arr_15 [i_4] [i_2] = ((~(arr_2 [i_4 - 1])));
                    }
                }
            }
        }

        for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
        {
            var_22 = (min(var_22, (((~(arr_1 [i_5]))))));
            var_23 ^= ((~(arr_9 [i_5] [i_5])));
            arr_19 [i_0] [i_5] = ((252 ? (arr_17 [i_0]) : -116));
            var_24 = (arr_14 [i_0]);
        }
        for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
        {
            var_25 = ((~(arr_1 [i_0])));
            var_26 = (min(var_26, (48533 - 65299)));
            var_27 = (((18446744073709551595 ^ var_10) ? var_2 : 18446744073709551597));
            var_28 = (((arr_7 [i_6] [i_6] [i_6]) >> (arr_16 [i_0] [i_6] [14])));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    {
                        arr_27 [5] [15] [13] [i_6] &= 34;
                        var_29 += (var_2 || 17850);
                        var_30 = (max(var_30, (!34)));
                        var_31 -= (~0);
                    }
                }
            }
        }
        for (int i_9 = 0; i_9 < 23;i_9 += 1) /* same iter space */
        {
            arr_31 [17] [17] = ((var_10 ? (arr_9 [i_9] [i_9]) : (arr_9 [i_0] [16])));
            var_32 = (((arr_14 [i_0]) << (((~var_3) + 30126))));
            arr_32 [i_0] [i_0] [22] = ((10638669858845552227 ? 1 : 32747));

            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                arr_36 [i_0] [i_10] [i_0] [17] = (!32767);

                for (int i_11 = 0; i_11 < 23;i_11 += 1)
                {
                    var_33 ^= ((1 ? 1 : 4647010297202445728));
                    arr_39 [0] [16] [i_10] = 1;
                    var_34 = 6;
                }
                for (int i_12 = 0; i_12 < 23;i_12 += 1)
                {

                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        var_35 = 6;
                        arr_45 [i_0] [1] [1] [1] [i_0] [i_10] = ((!(arr_14 [i_12])));
                    }
                    for (int i_14 = 2; i_14 < 20;i_14 += 1)
                    {
                        arr_50 [i_9] [22] [22] [i_10] [i_14] [i_14] [18] = 2147483645;
                        var_36 -= ((1 ? 7453 : 1));
                        var_37 *= -49624;
                        arr_51 [13] [13] [i_10] [13] = ((((((arr_0 [i_0]) + 45396))) ? (1 || 1) : ((1 ? var_7 : 65535))));
                        arr_52 [i_0] [18] [i_10] [12] [i_10] [21] = var_4;
                    }
                    for (int i_15 = 4; i_15 < 20;i_15 += 1)
                    {
                        arr_56 [1] [1] [i_10] [i_10] [6] [5] = (~113);
                        var_38 = (arr_48 [i_0] [3] [3] [i_9] [i_0]);
                        var_39 += (arr_38 [1] [i_0] [i_9] [i_0]);
                        arr_57 [1] [i_10] [i_10] [12] [i_0] = (!(arr_8 [i_15 + 3]));
                    }
                    for (int i_16 = 1; i_16 < 1;i_16 += 1)
                    {
                        arr_62 [i_10] = -0;
                        var_40 = (~25201);
                        var_41 = ((~(arr_48 [i_16 - 1] [6] [i_16 - 1] [i_16 - 1] [i_16])));
                    }
                    var_42 = (~1);
                }
                for (int i_17 = 0; i_17 < 23;i_17 += 1)
                {
                    arr_65 [i_10] = (((arr_29 [i_0]) / (arr_7 [i_0] [i_10] [18])));
                    var_43 *= ((((arr_28 [i_9]) == 2275868458)));
                    var_44 += (~12060374295572234662);
                }
            }
        }
        var_45 = (18446744073709551595 - -1);
        var_46 = (((arr_35 [6]) ? (arr_17 [15]) : (((var_2 != (arr_11 [i_0]))))));
    }
    var_47 |= ((!((((var_1 && 0) << (((var_2 | 33759) - 33749)))))));
    #pragma endscop
}
