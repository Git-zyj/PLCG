/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18689
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    var_16 = ((var_5 || ((((((var_11 ? var_2 : -1699089191617879158))) ? (5998677955371806267 != var_12) : (47707 + 5143459595117215254))))));

                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        arr_11 [i_3] [i_3] [i_1] [i_0] [i_3] [i_0] = (((((((92 ? -1 : var_2))) || (var_1 ^ var_11))) ? ((min(-95, 28270))) : ((-95 ? ((var_11 ? var_10 : 26)) : ((var_11 ? 34 : var_4))))));
                        arr_12 [i_3] [i_1] [i_2] = ((var_12 * (var_5 % var_13)));
                        var_17 = (max(var_17, ((max((var_12 ^ var_9), -105)))));
                        var_18 |= (min(13235145858838043753, 102));
                        var_19 = (max(((24 ? 222 : 18824)), 1));
                    }
                    var_20 = ((((61874 ? 26 : -5143459595117215255)) <= 1));
                }
            }
        }
    }
    var_21 = (((((var_9 + (var_13 * -105)))) ? (max((var_6 * 5485), (95 / -5998677955371806268))) : (max(-7496021455722460926, ((((-2147483647 - 1) ? var_3 : var_7)))))));
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            {
                var_22 = (min(-512, 33));
                arr_17 [i_4] [i_5] [i_5] = (((var_6 / 9148) || var_9));

                for (int i_6 = 2; i_6 < 13;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            {
                                var_23 = (max((((((var_15 ? var_3 : var_2))) || (((var_9 >> (var_15 + 32218)))))), (((((50056 ? var_1 : var_6))) || var_8))));
                                arr_25 [i_4] [i_4] [i_8] [i_8] [i_4] = (min(var_8, (var_11 > var_9)));
                                var_24 -= var_9;
                                var_25 ^= (((((((min(var_8, -59))) ? var_1 : -18795))) || ((((-5998677955371806253 ^ var_5) ? var_13 : ((max(38, -20310))))))));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        arr_28 [i_4] [i_5] [i_9] [i_9] = (((((20 ? var_11 : var_3))) ? var_2 : ((var_11 ? 201 : var_3))));
                        var_26 = ((var_3 ^ ((47397963 ? 226 : var_8))));
                        var_27 = ((~(var_5 >> var_3)));
                        arr_29 [i_9] [i_6] [i_5] [i_4] |= (var_0 / var_10);
                        arr_30 [i_4] [2] [i_6 - 1] [1] [i_5] = 58;
                    }
                    for (int i_10 = 1; i_10 < 11;i_10 += 1)
                    {
                        var_28 = var_13;
                        var_29 *= ((~(var_7 | var_13)));
                        var_30 = var_2;
                        arr_35 [i_10] [1] [i_6 - 2] [i_6] = (((min((var_6 * 96), var_1)) + (((((min(var_5, var_3))) - ((222 >> (94 - 90))))))));
                        var_31 = ((((((((var_12 ? var_10 : 1))) | (min(-7498484452647418993, var_0))))) ? (((var_15 ^ var_5) | var_1)) : (5485 & 1)));
                    }
                    for (int i_11 = 1; i_11 < 14;i_11 += 1)
                    {

                        /* vectorizable */
                        for (int i_12 = 2; i_12 < 12;i_12 += 1)
                        {
                            var_32 = ((var_15 - ((3327 ? -114 : var_7))));
                            var_33 = (var_14 ^ var_3);
                        }
                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 15;i_13 += 1)
                        {
                            arr_43 [i_4] [i_5] [i_6 + 2] [i_4] [i_5] [i_5] [i_6] = (((var_0 ? var_10 : var_12)));
                            var_34 = -268435456;
                            var_35 = (min(var_35, var_15));
                        }
                        var_36 = (min(var_36, ((((var_11 - var_9) ? (((var_4 ? var_3 : var_3))) : ((-7498484452647418993 ? 2350218133803555935 : var_1)))))));
                        arr_44 [i_6] [i_5] [i_6] [i_11 + 1] = var_2;
                    }
                }
                arr_45 [i_4] [i_5] [i_5] = ((((((((213 ? var_15 : var_2))) ? 1 : ((min(var_5, var_6)))))) || ((((((var_5 ? var_12 : 8080234373868825283))) ? ((min(var_2, -1))) : 1)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_14 = 0; i_14 < 13;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 13;i_15 += 1)
        {
            {
                arr_52 [i_15] = (((((var_0 >> var_3) / var_8)) >> (var_8 - 1944768144)));
                var_37 = (max(var_37, (((((((min(18446744073709551615, var_3)) < -var_2))) << ((((((max(var_12, 16376))) ? ((var_5 ? 50 : var_7)) : (var_6 ^ 43))) - 42)))))));
                var_38 = ((((min((((-51 ? var_5 : 1))), (max(918058184, var_10))))) ? (65084 - 1) : (((var_6 ? ((var_4 ? var_4 : var_6)) : -25997)))));
            }
        }
    }
    #pragma endscop
}
