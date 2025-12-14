/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118319
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_2] = ((((min(((~(arr_7 [i_0] [i_0]))), (arr_2 [i_0])))) ? 1 : -1));

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        arr_12 [i_0] [i_1] [i_1 - 1] [i_2] [i_2] [i_1] = 27;
                        var_20 -= (min(-32752, (min(51261137, -126))));

                        /* vectorizable */
                        for (int i_4 = 2; i_4 < 14;i_4 += 1) /* same iter space */
                        {
                            var_21 ^= (~-23646);
                            var_22 -= 252;
                            arr_15 [i_2] [i_2] [i_2] = (((arr_2 [i_1 - 1]) < -453892026177065884));
                            arr_16 [i_2] [i_2] [i_3] [i_4 + 1] = (arr_3 [i_4 - 1]);
                        }
                        /* vectorizable */
                        for (int i_5 = 2; i_5 < 14;i_5 += 1) /* same iter space */
                        {
                            var_23 = (arr_18 [i_5] [i_5 - 1] [i_5] [i_5 + 2] [i_1 - 1] [i_1 + 1]);
                            var_24 = (~0);
                            var_25 += (arr_10 [i_1 - 2] [i_1 + 1] [i_5 - 1] [i_5 + 1] [i_5 - 1]);
                            var_26 += (-5 % (arr_13 [i_0]));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            arr_23 [i_0] [i_0] [i_2] [i_3] [i_6] &= (arr_21 [i_0] [i_0] [i_2] [i_3] [i_6] [i_1 - 2] [i_1 - 2]);
                            var_27 += ((+(((arr_7 [i_0] [i_3]) & 29924))));
                        }
                    }
                }
            }
        }
    }
    var_28 = (-394719804 + 4294901760);
    var_29 = (min(-98, var_8));
    var_30 -= (-65519 || 22238);

    for (int i_7 = 4; i_7 < 24;i_7 += 1)
    {
        arr_26 [i_7] |= (min((((!(((-26 ? -1 : (-2147483647 - 1))))))), ((1 / (arr_24 [i_7 - 1] [i_7])))));
        arr_27 [i_7] [i_7] = ((~((max(-1, (arr_25 [i_7 - 4] [i_7 - 4]))))));
        arr_28 [i_7] [i_7] = ((min(((201 / (arr_24 [i_7] [i_7]))), 3987861536)));
        arr_29 [i_7] = (((((arr_24 [i_7 - 1] [i_7 - 1]) ? -9 : (!255))) + 32736));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 24;i_8 += 1) /* same iter space */
    {
        var_31 = (max(var_31, (((!(((1262969061504260613 ? 2147483647 : (arr_24 [i_8] [i_8])))))))));
        arr_33 [i_8] = ((!(((44 ? 0 : 18446744073709551615)))));
    }
    for (int i_9 = 0; i_9 < 24;i_9 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_10 = 0; i_10 < 24;i_10 += 1)
        {
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 24;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 24;i_12 += 1)
                {
                    {

                        for (int i_13 = 0; i_13 < 24;i_13 += 1)
                        {
                            arr_49 [i_9] [i_10] [i_11] [i_10] = ((63 >> (65011712 - 65011701)));
                            var_32 -= ((71 ? (arr_48 [i_9] [i_10] [i_11] [i_9] [i_13]) : 16448555984279077146));
                        }
                        for (int i_14 = 0; i_14 < 24;i_14 += 1)
                        {
                            var_33 += -255;
                            arr_54 [i_9] [i_10] [i_10] = (arr_25 [i_9] [i_11]);
                            arr_55 [i_9] [i_10] |= 1998188089430474469;
                        }
                        arr_56 [i_9] [i_10] [i_9] = (((4583 << (21976 - 21973))));
                        arr_57 [i_10] [i_10] [i_10] [i_10] = (((8191 || 197326651013464974) < (arr_39 [i_12] [i_9])));
                        arr_58 [i_9] [i_11] [i_10] = ((4611123068473966592 ? (arr_37 [i_9] [i_10] [i_9]) : 44324));
                    }
                }
            }
            arr_59 [i_9] [i_10] [i_10] = 18446744073709551593;
        }
        for (int i_15 = 0; i_15 < 24;i_15 += 1)
        {
            var_34 = (arr_45 [i_9] [i_9] [i_15] [i_9] [i_15] [i_9]);
            var_35 += (arr_39 [i_9] [i_15]);
        }
        arr_63 [i_9] = (-(((arr_31 [i_9]) ? -1511021465 : 0)));
        var_36 = (min(var_36, (max((arr_53 [i_9] [i_9] [i_9] [i_9] [i_9]), 17023107064328839303))));
        var_37 -= (max(856417171, (((-84 ? -116 : 7)))));
    }
    #pragma endscop
}
