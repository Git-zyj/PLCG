/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101915
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = ((((126 ? 13552 : 65535))) && 65513);
        var_14 = (((arr_2 [i_0]) - (arr_2 [i_0])));
        var_15 = (max(var_15, ((((arr_3 [7]) ? var_12 : (arr_1 [i_0] [5]))))));
        arr_4 [i_0] = (((((-(arr_1 [i_0] [1])))) && (3439006323 ^ 14)));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_16 = -1;
        var_17 += (((1 % 17546407847891810979) ? (((-(max(var_1, (arr_5 [i_1] [i_1])))))) : (min((((3345691753459124040 ? var_2 : 94))), var_3))));
        var_18 = var_7;
    }
    var_19 = var_10;

    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        var_20 = (((((((min(var_11, (arr_7 [i_2])))) ? 65535 : (arr_7 [i_2])))) ? 15883 : 1));
        var_21 = min((((!(arr_9 [i_2])))), (((((var_9 ? var_5 : (arr_8 [i_2] [i_2])))) ? 1 : ((min(37, (arr_0 [i_2] [i_2])))))));
        arr_10 [11] = ((((arr_1 [i_2] [i_2]) ^ (arr_5 [i_2] [i_2]))));
    }
    for (int i_3 = 1; i_3 < 23;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            var_22 = ((-19928 ? -3345591489559712713 : (((max(1, 1))))));
            var_23 = (arr_11 [i_4]);
            arr_15 [i_3 + 1] [i_4] = (arr_13 [i_4]);
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            var_24 *= ((var_3 ? var_2 : (arr_11 [i_3 + 1])));
            var_25 = (max(var_25, (((((arr_12 [i_5]) ? var_8 : -13))))));
            var_26 ^= ((!(arr_11 [i_3 - 1])));
        }
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            var_27 = (max((arr_19 [i_3] [i_3 + 1]), (arr_17 [i_3 + 1] [i_6] [4])));
            arr_20 [i_3] [i_6] [i_3 - 1] = (((arr_11 [i_6]) ? (var_10 && var_6) : (((arr_13 [i_3]) ? ((((arr_17 [i_6] [i_6] [i_6]) ? (arr_18 [i_6]) : 2080374784))) : (max((arr_18 [i_3]), (arr_11 [i_3])))))));
            var_28 *= (((!1797454340) < var_5));

            for (int i_7 = 0; i_7 < 0;i_7 += 1)
            {
                /* LoopNest 2 */
                for (int i_8 = 4; i_8 < 22;i_8 += 1)
                {
                    for (int i_9 = 3; i_9 < 22;i_9 += 1)
                    {
                        {
                            var_29 = ((~(min((min(var_10, (arr_26 [i_6]))), (((var_7 | (arr_13 [i_3]))))))));
                            var_30 *= (arr_25 [i_3] [i_3] [i_7] [i_6] [i_9 - 2]);
                            var_31 = 855960998;
                        }
                    }
                }
                arr_27 [i_7] [i_7] = ((min(119, 48)));
                var_32 = var_3;
            }

            /* vectorizable */
            for (int i_10 = 2; i_10 < 20;i_10 += 1)
            {
                var_33 = ((((arr_17 [i_6] [i_6] [i_3]) >= 4621582334153561421)) ? 16544246708124863681 : ((((arr_12 [i_6]) && -4))));
                arr_32 [i_10] [10] [i_10 + 3] [i_10] = (arr_28 [i_10 - 2] [i_3 + 1]);
            }
            /* vectorizable */
            for (int i_11 = 3; i_11 < 22;i_11 += 1)
            {
                var_34 ^= (arr_18 [i_11 - 3]);
                var_35 = (~(((arr_11 [i_11]) ? (arr_21 [i_3 + 1] [i_6] [i_11] [i_11]) : (arr_26 [i_3 + 1]))));
                var_36 = ((1 == (arr_24 [i_11 - 2] [i_6] [i_3 - 1] [i_6] [i_3])));
            }
        }
        var_37 = (((24 ? (arr_12 [i_3]) : (arr_22 [i_3] [i_3 - 1] [i_3] [i_3 + 1]))));
        var_38 = (((arr_26 [i_3]) ? (((!((((arr_33 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1]) | 13)))))) : var_11));
        arr_36 [i_3] [i_3] = (arr_13 [i_3]);
    }
    var_39 = (min(var_39, var_12));
    var_40 = var_11;
    #pragma endscop
}
