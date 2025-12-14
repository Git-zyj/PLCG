/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137073
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_8;

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        var_20 *= (((((((var_1 ? var_11 : var_15))) ? (~var_0) : var_12)) <= ((((8294413325070973557 && ((((arr_1 [i_0 + 1]) ? -436554043 : var_5)))))))));
        var_21 = max(((0 ? (-9223372036854775807 - 1) : 3433313478)), (arr_0 [i_0]));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_22 = ((-((((((arr_2 [i_1]) > var_3)) || var_12)))));

        /* vectorizable */
        for (int i_2 = 2; i_2 < 16;i_2 += 1)
        {
            arr_10 [i_2 + 1] [i_1] = ((0 << (var_11 - 2076885398)));
            arr_11 [i_1] [i_2] = (((-1 != 2737927646) & 3070818894147802605));
            var_23 = (((arr_3 [i_2 + 3]) & -6));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        arr_17 [6] [i_2] = (((((1 ? 1265729931 : var_2))) ? (arr_2 [i_4]) : (((arr_1 [9]) << (((arr_16 [i_2] [i_1]) - 9350))))));
                        var_24 *= (((arr_7 [i_3]) || (arr_4 [i_1])));

                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            arr_20 [i_1] [i_2] [i_2 + 3] = (861653817 ? (255 / -1358680942) : 0);
                            var_25 *= (9223372036854775807 ^ 48956);
                            arr_21 [i_1] [14] [i_2 + 1] [i_3] [14] [6] [14] = (((((arr_3 [2]) ? (arr_2 [i_3]) : var_18))) ? var_16 : -105);
                        }
                        arr_22 [i_1] [i_1] [i_2] [i_3] [i_4] [i_1] = -var_14;
                    }
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
    {
        arr_27 [i_6] = ((((((var_10 ? 0 : var_8)) - (1557039647 - 133955584))) << ((((-21 ? 3800636692 : 2187204839)) - 3800636689))));
        arr_28 [i_6] = (((arr_5 [i_6] [1]) | ((var_13 * (arr_2 [i_6])))));
        var_26 = (max((((arr_26 [i_6] [i_6]) - (arr_26 [i_6] [i_6]))), ((((min(0, 133955584)) >= ((var_17 ? var_6 : (arr_1 [14]))))))));
    }
    for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
    {
        var_27 = var_12;
        arr_32 [2] = ((((((max((arr_24 [i_7]), var_5)) & var_14))) && (((var_7 ? var_18 : var_15)))));
    }

    for (int i_8 = 0; i_8 < 24;i_8 += 1)
    {
        arr_36 [i_8] = ((((((arr_35 [i_8]) & (arr_33 [3] [i_8])))) || ((!(arr_35 [i_8])))));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 24;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 0;i_10 += 1)
            {
                {
                    arr_43 [i_10] [i_10] [i_10] [i_8] = ((var_16 > ((((((arr_35 [i_8]) + var_7))) ? ((var_11 >> (var_9 + 5160631937830533443))) : 861653833))));
                    arr_44 [i_8] [i_8] [i_10] [i_10] = (arr_41 [i_8]);
                }
            }
        }
        arr_45 [i_8] = (((var_1 > (!var_4))) && ((var_7 > (arr_33 [i_8] [i_8]))));

        /* vectorizable */
        for (int i_11 = 3; i_11 < 21;i_11 += 1)
        {
            var_28 = (min(var_28, ((((((0 / (arr_35 [i_11])))) ? (((var_2 ? 4194869443 : var_17))) : ((var_17 ? -5274488066927444602 : 50)))))));
            var_29 = (((arr_42 [i_11] [i_11]) | (arr_37 [i_8] [i_11])));
            arr_49 [i_11] [i_11] [i_11] = (((((((arr_42 [i_11] [i_11]) >= var_9)))) >= var_0));
        }
    }
    var_30 = var_18;
    #pragma endscop
}
