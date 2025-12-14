/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112300
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, var_10));
    var_12 = ((204 ? (((var_8 ^ var_2) | (~4036236708257883812))) : (((51589796 ? ((var_2 & (-32767 - 1))) : var_2)))));

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_13 = (-4036236708257883825 != var_3);
            var_14 = (arr_2 [i_0]);
        }
        var_15 = var_2;
        /* LoopNest 3 */
        for (int i_2 = 3; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 12;i_4 += 1)
                {
                    {
                        var_16 = (((((var_1 << (231 - 207)))) <= (((-4036236708257883825 ? (arr_2 [i_0]) : var_4)))));
                        arr_13 [i_0] [i_3] [i_0] = 21453;
                        arr_14 [i_0 + 1] [5] [12] [i_0] [i_4] = (((((arr_8 [i_0]) + 9223372036854775807)) << (4036236708257883824 - 4036236708257883824)));
                    }
                }
            }
        }
        arr_15 [i_0] = (((arr_0 [i_0] [i_0]) < 255));
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                {
                    var_17 = (min(var_17, (((var_0 >= (-1 >= var_7))))));

                    for (int i_8 = 2; i_8 < 14;i_8 += 1)
                    {
                        var_18 *= var_3;
                        var_19 = (max(var_19, (((var_10 ? -2 : (arr_23 [i_8 + 1] [i_8 - 1] [i_8 + 2]))))));
                        var_20 |= arr_20 [i_8 - 2] [10] [i_5];
                    }
                    arr_27 [i_5] [i_5] [i_7] [7] = (arr_16 [i_5]);
                    arr_28 [i_5] [15] [i_6] [i_6] = (arr_24 [i_5] [i_5] [i_7]);
                }
            }
        }
        arr_29 [14] [14] &= arr_24 [2] [i_5] [1];
        /* LoopNest 2 */
        for (int i_9 = 2; i_9 < 14;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 17;i_10 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 1; i_11 < 14;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 17;i_12 += 1)
                        {
                            {
                                arr_41 [i_5] [i_9] [i_9 + 1] [1] [i_11] [i_12] [i_12] = 0;
                                arr_42 [i_12] [i_10] [i_5] [i_11] [i_11] [i_9] = var_3;
                            }
                        }
                    }
                    arr_43 [i_5] [i_9] [i_5] = (arr_40 [i_5] [i_5] [i_10] [i_9] [i_10] [i_5]);
                }
            }
        }
    }
    for (int i_13 = 0; i_13 < 23;i_13 += 1)
    {
        var_21 = ((((((25 * 71) ? -4036236708257883816 : (((((arr_45 [i_13]) || var_10))))))) ? 234 : 18));
        arr_46 [i_13] = ((36 ? var_8 : var_7));
        arr_47 [i_13] [13] = 4036236708257883838;
        var_22 = (min(var_22, (((var_1 ? 4294967295 : ((-116 ? 24 : var_5)))))));
    }
    /* LoopNest 3 */
    for (int i_14 = 0; i_14 < 18;i_14 += 1)
    {
        for (int i_15 = 4; i_15 < 15;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 18;i_16 += 1)
            {
                {
                    var_23 = (arr_52 [i_15 - 1] [i_16]);
                    arr_55 [i_14] [i_16] [i_16] = arr_53 [i_16] [i_16];
                }
            }
        }
    }
    #pragma endscop
}
