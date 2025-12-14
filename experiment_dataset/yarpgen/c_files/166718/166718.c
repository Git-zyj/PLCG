/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166718
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = ((~(((3 == 9374371242713262256) ? var_4 : var_12))));
        arr_3 [i_0] = (max(171, ((((((3 != (arr_0 [8]))))) ^ (max(-1, -218196982767537695))))));
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = (var_3 > -218196982767537678);
        var_15 = (max(var_15, (arr_4 [i_1])));
        arr_8 [0] = ((~((((((-(arr_4 [i_1 + 2])))) != ((var_12 ? 218196982767537690 : var_0)))))));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        arr_11 [3] = (max((arr_9 [i_2] [i_2]), (((arr_4 [i_2]) ? var_8 : 8))));
        var_16 = (max(var_16, ((min((((((max((arr_6 [i_2] [i_2]), (arr_6 [17] [i_2]))))) - (~-218196982767537690))), (641378947384042177 == 218196982767537690))))));
        var_17 |= (arr_6 [i_2] [i_2]);
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {

        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            var_18 = (max(var_18, (((((arr_6 [i_3] [i_4]) * var_13))))));
            var_19 = -1197;
        }
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            var_20 = (min(var_20, (((~(!var_8))))));
            arr_20 [i_3] [i_3] [i_3] = max((72 ^ 4398046478336), ((max(3402765185, (arr_19 [i_3] [i_3] [i_5])))));
        }
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {
                    {
                        arr_30 [i_6] [i_6] [i_6] [i_6] = 2057532890;

                        for (int i_9 = 2; i_9 < 16;i_9 += 1)
                        {
                            arr_34 [i_9 - 1] [i_6] [i_7] [i_6] [i_6] [i_6] = (arr_24 [i_6] [i_6] [i_7] [i_7]);
                            var_21 = (max(var_21, 6526174007956924428));
                            var_22 = (((((-1 + 2147483647) << (1 - 1))) != ((-(arr_32 [i_9 + 1] [i_9 + 1] [i_9 - 2] [i_9] [i_6])))));
                        }
                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 18;i_10 += 1)
                        {
                            var_23 = var_9;
                            var_24 = (((((arr_36 [i_3] [i_6] [11] [i_7] [i_10]) % 11)) > var_11));
                            arr_38 [i_3] [i_6] [i_6] [i_8] [i_10] = 82;
                        }
                        for (int i_11 = 1; i_11 < 16;i_11 += 1)
                        {
                            var_25 = -127;
                            arr_41 [i_3] [i_7] [i_3] [i_3] [i_7] |= (1 == 91);
                            var_26 = 8;
                            var_27 = (max(var_27, (((~((var_4 ? (arr_19 [i_6] [i_7] [i_8]) : (arr_19 [i_8] [i_6] [i_8]))))))));
                        }
                    }
                }
            }
        }

        for (int i_12 = 1; i_12 < 16;i_12 += 1)
        {
            var_28 = (max(var_28, var_6));
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 18;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    {
                        var_29 = (!-29423);
                        var_30 = var_11;
                        var_31 = (max(var_31, ((((min(1, (arr_4 [i_3]))) ^ (((-(112 * 0)))))))));
                    }
                }
            }
            var_32 = var_7;
        }
    }
    var_33 = (~63);

    for (int i_15 = 0; i_15 < 1;i_15 += 1)
    {
        var_34 = -104;
        arr_55 [i_15] [i_15] = ((((min(-218196982767537690, 40312) % (arr_4 [i_15])))));
    }
    /* vectorizable */
    for (int i_16 = 0; i_16 < 14;i_16 += 1)
    {
        arr_59 [i_16] |= (95 == var_7);
        var_35 = (-218196982767537696 | 91);
    }
    for (int i_17 = 0; i_17 < 12;i_17 += 1)
    {
        /* LoopNest 2 */
        for (int i_18 = 0; i_18 < 12;i_18 += 1)
        {
            for (int i_19 = 1; i_19 < 11;i_19 += 1)
            {
                {
                    var_36 = (((!-48874) ? var_9 : (((((var_5 ? (arr_9 [i_17] [i_17]) : (arr_56 [i_17] [i_17])))) ? 236 : (var_12 & var_0)))));
                    var_37 |= ((var_8 ? var_0 : (((-17764 ? (8128 * 12) : (min((arr_1 [i_19]), 9223372036854775807)))))));
                }
            }
        }
        arr_70 [i_17] [i_17] |= ((-22 ? (min(var_11, ((~(arr_10 [8] [i_17]))))) : 0));
    }
    var_38 = ((-var_2 ? (!var_4) : var_4));
    #pragma endscop
}
