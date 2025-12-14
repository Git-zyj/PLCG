/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175414
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_20 = 1;
                    arr_10 [i_0] [11] = (((arr_9 [i_0] [i_0] [i_2]) || (((125 <= var_18) && (~3069051828)))));
                    arr_11 [i_0 - 1] [i_1] [5] [i_2] |= (max((max(1921721687112379017, -28232)), ((var_4 ? (max(var_8, var_13)) : ((((-9718 + 2147483647) >> 1)))))));
                    var_21 = (((max((1 ^ 1), (arr_1 [i_1] [0]))) & (((!((max(1, var_15))))))));
                }
            }
        }
    }
    var_22 = 1;

    /* vectorizable */
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        var_23 = (min(var_23, ((((-2147483647 - 1) ? (1 * 812447489231960125) : (arr_12 [1]))))));
        arr_14 [i_3] [i_3] = 3436550028081051937;
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {

        /* vectorizable */
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            var_24 &= -var_15;
            var_25 = (((!1) ? (arr_15 [i_4] [i_4]) : 1262192686471525802));
            var_26 = ((-27125 ? 3543655657 : 1689257668));
        }
        for (int i_6 = 1; i_6 < 21;i_6 += 1)
        {
            var_27 = ((-1487734207497903822 & (!0)));
            var_28 = 19229;
            arr_21 [i_4] [i_4] = (((((-89 && (!-15512)))) & 1023));
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            var_29 = (min(var_29, (arr_20 [i_4] [i_4] [i_4])));
            var_30 = ((-3012757189278464118 + (arr_17 [i_7] [i_4])));
            arr_26 [i_7] = (((arr_25 [i_4] [i_7]) ? (arr_25 [i_4] [i_7]) : var_8));
        }
        var_31 = (((((var_11 ? (-9223372036854775807 - 1) : (arr_24 [12])))) % (((max(-141059510, 2918604769)) / ((max(var_7, var_6)))))));
        arr_27 [i_4] = (max(3717377378, ((~(arr_22 [i_4] [i_4])))));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 19;i_8 += 1)
    {
        arr_30 [i_8] = (-32767 - 1);
        var_32 ^= ((-var_19 ? ((1376362527 * (arr_12 [i_8]))) : 0));
        arr_31 [i_8] = 537337496;
        var_33 = (-32767 - 1);

        for (int i_9 = 1; i_9 < 18;i_9 += 1) /* same iter space */
        {
            var_34 = ((245 % ((113 ? var_18 : 7))));

            for (int i_10 = 1; i_10 < 18;i_10 += 1) /* same iter space */
            {
                var_35 &= (((~44) + var_0));
                arr_36 [i_8] [i_9] [i_8] = (!var_11);
                arr_37 [i_8] [i_9] [i_10 - 1] [i_9] = (((arr_34 [i_9] [i_10 - 1] [i_9]) * -125));
            }
            for (int i_11 = 1; i_11 < 18;i_11 += 1) /* same iter space */
            {
                var_36 = (arr_29 [i_11 + 1] [i_9 - 1]);
                /* LoopNest 2 */
                for (int i_12 = 3; i_12 < 17;i_12 += 1)
                {
                    for (int i_13 = 2; i_13 < 18;i_13 += 1)
                    {
                        {
                            var_37 += (~var_16);
                            var_38 *= (arr_38 [i_13 - 1] [i_9 - 1] [12]);
                        }
                    }
                }
                var_39 = (max(var_39, (arr_41 [i_8] [i_9 - 1] [i_11 - 1] [i_11] [i_8])));
                arr_45 [i_8] [i_8] [i_8] &= 1;
            }
            for (int i_14 = 0; i_14 < 19;i_14 += 1)
            {
                var_40 = (arr_48 [i_8] [i_8]);
                var_41 *= ((((~(arr_17 [i_8] [i_14])))) || (arr_40 [i_8] [i_8] [12] [i_9 - 1]));
                var_42 = ((392454431 ? -23 : 4611));
                arr_50 [i_9] [i_9] [i_9] [i_9] = var_18;
            }
            for (int i_15 = 0; i_15 < 19;i_15 += 1)
            {
                var_43 += ((53104 > (arr_52 [i_8] [i_9] [i_8] [i_9 + 1])));
                arr_53 [i_8] [i_9] [i_15] = ((var_9 >> (781142366 - 781142336)));
            }
        }
        for (int i_16 = 1; i_16 < 18;i_16 += 1) /* same iter space */
        {
            var_44 = (((-15512 & var_18) || (var_4 > var_2)));
            var_45 = -7;
            arr_57 [i_8] [i_16] = (((arr_42 [i_16] [i_16] [i_16 - 1]) - (arr_33 [i_8])));
        }
    }
    #pragma endscop
}
