/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110678
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(12204895106312454557, ((var_10 ? 343339615659621630 : var_3))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 = ((+(min((arr_1 [i_0] [i_0]), 18103404458049929991))));
        var_13 = (~343339615659621624);
        arr_2 [i_0] = (((var_2 ^ (((max(var_1, -96)))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 3; i_2 < 8;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 7;i_3 += 1)
                {
                    {
                        var_14 = 1023;

                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            arr_15 [i_2] = ((8386560 ? -3 : var_8));
                            var_15 = (max(var_15, (((var_7 ? 8386560 : var_1)))));
                            var_16 = (((1 ? 70 : (arr_7 [i_0] [i_1]))));
                            arr_16 [i_2] [i_2] [i_2] = (((18103404458049929991 ^ 3) ? 793762563 : 2147483647));
                            var_17 ^= 343339615659621636;
                        }
                        arr_17 [2] [i_1] [i_2] [4] |= ((40 ? (-9223372036854775807 - 1) : var_10));
                    }
                }
            }
            arr_18 [9] [i_1] = var_5;
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
        {
            arr_21 [i_0] [i_5] = (var_5 ? (((((arr_8 [i_5] [i_5]) <= 2623771633145960672)))) : var_5);
            var_18 = ((~(arr_14 [i_5] [i_0] [i_0])));
        }
        for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
        {
            var_19 ^= (((((max(var_8, var_1)))) ? -653052410 : var_1));

            for (int i_7 = 3; i_7 < 6;i_7 += 1)
            {
                var_20 = (max(var_20, (((-1958834532 ? (((max(68, -4)))) : (((arr_5 [i_7 + 1] [i_7 + 1] [i_7 + 2]) ? 18446744073709551613 : (arr_5 [i_7 + 2] [i_7 + 1] [i_7 + 4]))))))));
                var_21 = (((arr_10 [i_0] [i_0] [i_7] [8]) + (((~8608512502963609313) % (0 ^ 343339615659621644)))));
                var_22 = (--56);
                var_23 -= (~1);
                var_24 = -var_7;
            }
            /* vectorizable */
            for (int i_8 = 0; i_8 < 10;i_8 += 1)
            {
                arr_29 [i_6] [i_8] [i_8] [i_0] = -20666;
                var_25 -= ((582962177 >= ((669711467 ? -20641 : var_0))));
            }
            var_26 = (arr_7 [i_6] [i_0]);
            var_27 *= var_0;
        }

        for (int i_9 = 0; i_9 < 10;i_9 += 1)
        {
            arr_32 [i_9] = (((5 ? (1 > -1513411992) : var_10)));
            arr_33 [i_9] = var_4;
        }
        for (int i_10 = 0; i_10 < 10;i_10 += 1) /* same iter space */
        {
            var_28 = (~(max((var_8 / -1089159719), var_0)));
            arr_36 [3] [3] = (((0 ? 18446744073709551615 : 68)));
            var_29 = (max(var_29, (((((((!(((var_1 << (var_10 - 17997156580307710741)))))))) / (max(13, (min(9290888556905984099, 18637)))))))));
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 10;i_11 += 1) /* same iter space */
        {
            arr_39 [i_11] [i_11] = 9155855516803567516;
            var_30 = (arr_31 [i_0]);
            var_31 = ((!42) ? (((~(arr_9 [5] [i_11] [5])))) : var_0);
        }
    }
    #pragma endscop
}
