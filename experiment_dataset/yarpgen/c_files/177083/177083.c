/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177083
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = (((((((var_4 ? var_3 : 4127745093567436767))) ? 127 : var_12)) + (arr_1 [i_0] [5])));
        var_15 = (((((-((min(var_1, var_1)))))) ? (((var_11 ? (arr_2 [i_0]) : (min((arr_2 [i_0]), (arr_2 [i_0])))))) : (min((((var_5 ? var_2 : var_14))), ((~(arr_1 [7] [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_16 -= 1582135945;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    var_17 ^= (-38 + 0);
                    var_18 = (((((((min(250, var_14))) >> (((var_13 & var_12) - 2080))))) & ((var_12 ? (arr_4 [i_1] [i_2]) : 3))));
                }
            }
        }
        var_19 = (min(((8398963555192060680 ? var_4 : (arr_7 [i_1]))), (min((arr_8 [i_1] [i_1] [i_1] [3]), var_13))));
    }
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        var_20 = (255 || 10476313900528381121);
        var_21 |= (((arr_11 [i_4] [i_4]) ? var_3 : ((min(var_11, (arr_12 [2]))))));
        var_22 = (arr_10 [i_4]);
    }
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        var_23 = (min(var_23, 18446744073709551615));
        var_24 -= (max(var_2, (max((arr_14 [i_5] [i_5]), 21762))));
    }
    var_25 = var_4;

    /* vectorizable */
    for (int i_6 = 0; i_6 < 17;i_6 += 1)
    {
        arr_20 [i_6] &= (((78 >= var_7) ? 1582135962 : (var_4 == var_14)));

        for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
        {

            for (int i_8 = 0; i_8 < 17;i_8 += 1)
            {
                var_26 ^= 126;
                arr_26 [i_7] = (((arr_16 [i_7]) ? (arr_22 [i_7]) : (((arr_22 [i_7]) ? -29751 : (arr_24 [i_7])))));
            }
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                var_27 -= var_8;
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 17;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 17;i_11 += 1)
                    {
                        {
                            var_28 = (max(var_28, var_4));
                            var_29 = ((var_6 ? 14876 : (arr_21 [i_10] [i_9])));
                            var_30 = ((((var_6 ? var_3 : var_2)) % (arr_30 [i_7])));
                            var_31 -= (((((~(arr_24 [i_6])))) ^ 2097151));
                        }
                    }
                }
                var_32 *= (var_8 > 1);
            }
            var_33 &= ((((var_1 ? (arr_32 [8] [i_7] [1] [i_6] [1] [i_6] [i_6]) : var_6)) >> ((((131 ? (arr_28 [i_6]) : (arr_22 [i_6]))) - 1546342002))));
            arr_33 [i_6] [i_7] = (arr_17 [i_6]);
            var_34 = -3;
            var_35 = (arr_29 [i_6] [i_6] [i_6] [i_6]);
        }
        for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
        {
            arr_37 [i_6] &= ((13591438550083065510 == (arr_19 [i_6] [i_12])));
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 17;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 17;i_14 += 1)
                {
                    {
                        var_36 |= 18446744073707454472;
                        var_37 += ((arr_17 [i_12]) > (arr_32 [i_6] [i_6] [i_6] [i_13] [i_13] [i_13] [1]));
                        arr_42 [i_12] = 2712831359;
                    }
                }
            }
            arr_43 [i_6] [i_12] [i_12] = (((arr_41 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]) <= (arr_41 [i_6] [i_12] [i_6] [i_12] [i_12] [i_12])));
            var_38 -= ((21555 ? (arr_38 [i_6] [i_12] [i_12]) : (arr_22 [i_6])));
        }
        var_39 = (max(var_39, 21535));

        for (int i_15 = 0; i_15 < 17;i_15 += 1)
        {
            var_40 &= (((arr_27 [i_15] [i_15] [i_6] [i_15]) + (arr_25 [i_6] [i_15])));
            var_41 = (max(var_41, (-5 != 245)));
            arr_48 [i_6] [i_6] &= (((((arr_32 [i_6] [i_6] [0] [i_15] [i_15] [i_15] [9]) + var_1))) & (arr_23 [i_15] [i_15] [i_6] [i_6]));
            var_42 = (min(var_42, 45559832));
        }
        for (int i_16 = 0; i_16 < 1;i_16 += 1)
        {
            var_43 &= (((arr_50 [i_6] [i_6] [i_6]) ? 4294967277 : (arr_36 [i_6] [i_16])));
            arr_53 [i_6] [i_16] |= ((((((-1 + 2147483647) >> (var_1 - 101)))) ? (11 - var_2) : (arr_29 [13] [i_6] [13] [i_6])));
            var_44 = (arr_28 [i_6]);
            arr_54 [i_6] [4] = ((((((arr_31 [i_6] [i_6] [i_6] [i_16]) ? (arr_38 [i_6] [i_6] [i_6]) : var_12))) ? (arr_38 [i_6] [11] [i_16]) : -var_8));
        }
        for (int i_17 = 0; i_17 < 17;i_17 += 1)
        {
            var_45 = (min(var_45, (var_3 & 0)));
            arr_57 [i_6] [i_6] |= (((((arr_40 [11] [i_17] [11] [i_6]) ^ var_10)) <= (arr_41 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])));
            arr_58 [i_6] &= (arr_51 [i_6] [i_6]);
        }
        var_46 -= var_12;
    }
    /* vectorizable */
    for (int i_18 = 0; i_18 < 19;i_18 += 1)
    {
        var_47 &= (((arr_59 [16]) ? (arr_59 [8]) : var_8));

        for (int i_19 = 0; i_19 < 19;i_19 += 1)
        {
            arr_63 [i_18] [i_18] [i_19] &= 25396;
            /* LoopNest 2 */
            for (int i_20 = 0; i_20 < 19;i_20 += 1)
            {
                for (int i_21 = 0; i_21 < 19;i_21 += 1)
                {
                    {
                        var_48 = (arr_65 [i_18]);
                        arr_69 [i_18] [i_20] [17] [12] [i_18] = -912608980;
                        arr_70 [i_21] [i_21] [i_18] [i_19] [i_18] = ((!(arr_60 [i_18])));
                        arr_71 [i_18] [i_19] [i_20] = var_9;
                    }
                }
            }
        }
        for (int i_22 = 0; i_22 < 19;i_22 += 1)
        {
            var_49 = var_0;
            var_50 = (max(var_50, (1 / var_4)));
            var_51 = (var_7 & var_13);
        }
        for (int i_23 = 0; i_23 < 19;i_23 += 1)
        {
            var_52 = (arr_73 [1] [i_18]);
            var_53 = (((arr_75 [i_18]) & (arr_73 [i_18] [i_18])));
        }
        arr_79 [i_18] = 1;
        var_54 = var_12;
        arr_80 [i_18] = ((var_0 & ((-4717379360741320416 ? (arr_78 [i_18] [i_18] [i_18]) : var_5))));
    }
    for (int i_24 = 0; i_24 < 25;i_24 += 1)
    {

        for (int i_25 = 0; i_25 < 25;i_25 += 1)
        {
            var_55 = (((((arr_82 [i_24]) ? var_12 : (arr_82 [i_24])))) ? ((255 + (arr_82 [i_24]))) : var_12);
            arr_88 [2] [12] [2] |= arr_82 [14];
            var_56 = (min(var_56, ((min(((((max(21568, 0))) ? ((min((arr_85 [i_24] [22]), 1979091080))) : var_0)), 0)))));
            var_57 = (min(var_57, ((((((((((var_8 >> (var_4 - 74)))) ? -2625855272008524382 : 4249407464)) + 9223372036854775807)) << ((-((var_6 ? 0 : (arr_83 [4]))))))))));
        }
        var_58 += ((((((min(var_10, 0)) > (((max(var_2, 0))))))) + (((var_0 + 2147483647) << (((arr_83 [14]) - 3818765914))))));
        var_59 *= var_5;
    }
    var_60 |= ((((max((max(-1805108217, -1805108217)), var_4))) < (max(var_10, var_8))));
    #pragma endscop
}
