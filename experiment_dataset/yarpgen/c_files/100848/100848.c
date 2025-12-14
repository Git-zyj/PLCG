/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100848
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_19 = ((var_10 ? ((~(arr_1 [i_0]))) : var_10));
                    var_20 ^= var_1;
                }
            }
        }
        var_21 |= (~1398582679);

        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            arr_9 [i_0] [i_3] = ((((!(arr_3 [7] [i_3] [i_0]))) ? var_12 : (((arr_6 [i_0] [i_3]) ? (arr_7 [9] [i_3]) : var_7))));
            var_22 = ((1 == ((6747227117832485378 ? var_10 : (arr_4 [i_0] [i_0] [i_0])))));
            var_23 = var_14;
        }
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_24 = (min(((((36666 == var_13) | (6747227117832485384 == -6747227117832485397)))), ((2560186842729071670 ? (arr_11 [i_4] [i_4]) : (arr_13 [i_4] [i_4])))));

        for (int i_5 = 2; i_5 < 19;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {
                        var_25 = var_13;

                        /* vectorizable */
                        for (int i_8 = 3; i_8 < 21;i_8 += 1)
                        {
                            var_26 = 2560186842729071677;
                            var_27 *= ((-((((arr_14 [i_5] [16] [16]) <= (arr_10 [i_4] [i_4]))))));
                        }
                        var_28 = var_6;
                        var_29 = (max(var_29, ((((((((var_0 ? (arr_23 [i_4] [i_7] [22] [i_7]) : var_17)) + (15886557230980479941 != var_2)))) ? ((1612202292 ? -2849170928749711735 : -973768493883414306)) : var_3)))));
                    }
                }
            }
            var_30 = ((((((arr_27 [i_4] [i_4] [i_5] [i_5]) ? var_3 : var_3))) % (arr_23 [i_4] [i_5 + 4] [i_5] [i_4])));
            var_31 = 48389;
            arr_28 [i_4] = (((~16269410666456083043) >= ((2147483647 ? (~var_2) : (arr_12 [i_5 - 1] [i_4])))));
        }
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 23;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 23;i_10 += 1)
            {
                for (int i_11 = 2; i_11 < 22;i_11 += 1)
                {
                    {
                        var_32 = -var_4;
                        arr_36 [2] [1] [i_4] [i_11] [i_10] = (arr_20 [i_4] [i_4] [i_10] [i_11]);
                    }
                }
            }
        }
    }
    var_33 = (((((min(26612, 9608791518587472610)) >> var_12)) != ((min((~var_3), (var_0 / -1))))));
    /* LoopNest 2 */
    for (int i_12 = 3; i_12 < 16;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 18;i_13 += 1)
        {
            {
                var_34 |= (min((~2560186842729071666), (((((min(1, var_4))) - (var_16 / 3))))));
                var_35 &= (min(((+(((arr_15 [i_13]) ? (arr_13 [1] [i_13]) : -1)))), (~var_0)));
            }
        }
    }
    #pragma endscop
}
