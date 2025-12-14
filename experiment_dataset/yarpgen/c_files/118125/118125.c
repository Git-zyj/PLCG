/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118125
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_16 = (min(var_16, ((((13 ^ 18446744073709551585) | (((((4121132658526359338 ? 3163623573867792930 : -596562971))))))))));

        for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
        {
            var_17 &= (arr_1 [i_0 + 3]);
            arr_7 [i_0 - 2] [i_1] [i_1] = (arr_4 [i_1] [i_1]);
        }
        for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
        {
            arr_11 [i_0] [i_0 - 2] = (arr_3 [i_2]);
            var_18 = ((~(arr_9 [i_0 - 2] [i_2] [i_0 - 2])));
            var_19 = (11 < 22);
        }
        /* vectorizable */
        for (int i_3 = 3; i_3 < 17;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                var_20 = (max(var_20, (((1489641968 ? 991607479 : (arr_10 [i_0 - 2] [i_0] [i_0 - 1]))))));
                var_21 *= 0;
                arr_18 [i_0] [i_3 - 2] [i_4] = ((!(arr_2 [i_0 + 1])));
            }
            for (int i_5 = 2; i_5 < 16;i_5 += 1)
            {
                arr_21 [i_3 + 1] [i_3] [i_5] [i_3 + 1] = ((2147483647 ? -991607477 : (var_0 && var_15)));
                arr_22 [i_5] = (((((~var_2) + 2147483647)) << (((var_9 + 72) - 18))));
            }
            arr_23 [i_0 - 1] = ((~(arr_9 [i_3] [i_0 + 1] [i_0])));
        }
    }
    for (int i_6 = 0; i_6 < 17;i_6 += 1)
    {
        var_22 -= ((~(((((((arr_6 [i_6] [i_6] [i_6]) ? (arr_19 [i_6] [i_6] [i_6] [i_6]) : (arr_27 [i_6])))) || (!184))))));

        for (int i_7 = 4; i_7 < 16;i_7 += 1)
        {
            var_23 = ((((98 / (arr_14 [i_7 - 3]))) * (arr_14 [i_6])));
            var_24 = (arr_2 [i_6]);
            var_25 = ((((min(860008008, ((~(arr_8 [i_7] [i_6] [i_6])))))) ^ (arr_30 [i_6] [i_7 + 1] [i_7 - 2])));
            arr_31 [i_7] [i_6] [i_6] &= ((12982 << (2109681675 - 2109681674)));
        }
        for (int i_8 = 1; i_8 < 15;i_8 += 1) /* same iter space */
        {

            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                arr_38 [i_9] [i_9] [i_8] [i_6] = ((((arr_34 [i_6] [i_8 - 1] [i_9]) >> (((arr_34 [i_6] [i_8 - 1] [i_9]) - 171)))));
                arr_39 [i_9] [i_8] [i_8 + 2] [i_9] = (((min(1364302351, (arr_20 [i_8 + 2] [i_8 - 1] [i_8 + 2]))) <= (((((max(var_4, var_2))) ? (min((arr_0 [i_8]), var_15)) : (arr_37 [i_8 + 1] [i_8] [i_8 + 2] [i_9]))))));
            }
            var_26 = (max(var_26, var_14));
        }
        /* vectorizable */
        for (int i_10 = 1; i_10 < 15;i_10 += 1) /* same iter space */
        {
            var_27 ^= (((arr_15 [i_6]) != (((3827608669 == (arr_14 [i_6]))))));

            for (int i_11 = 1; i_11 < 16;i_11 += 1)
            {
                arr_47 [i_11 + 1] [i_10] = (((arr_35 [i_10 + 1] [i_11] [i_11 - 1]) ? (arr_35 [i_10 + 2] [i_10] [i_11]) : 3));
                var_28 = -var_9;
                arr_48 [i_6] [i_10 - 1] = (arr_16 [i_10 + 2] [i_11 + 1]);
            }
            var_29 = var_1;
            var_30 = var_14;
        }
        var_31 = (arr_37 [i_6] [i_6] [i_6] [i_6]);
    }
    for (int i_12 = 0; i_12 < 19;i_12 += 1)
    {

        for (int i_13 = 0; i_13 < 19;i_13 += 1)
        {

            /* vectorizable */
            for (int i_14 = 0; i_14 < 19;i_14 += 1)
            {
                arr_58 [i_14] [i_14] = (((arr_50 [i_12] [i_13]) ? (arr_50 [i_14] [i_12]) : (arr_50 [i_13] [i_12])));
                var_32 = (min(var_32, (arr_19 [i_14] [i_13] [i_13] [i_12])));

                for (int i_15 = 0; i_15 < 19;i_15 += 1)
                {

                    for (int i_16 = 0; i_16 < 19;i_16 += 1)
                    {
                        arr_64 [i_16] [i_16] [i_15] [i_14] [i_14] [i_13] [i_12] = (+-860008009);
                        arr_65 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12] = var_14;
                        var_33 *= (((arr_52 [i_13] [i_14] [i_16]) != (arr_52 [i_16] [i_14] [i_13])));
                    }
                    arr_66 [i_15] [i_14] [i_13] [i_12] = var_3;
                }
            }
            arr_67 [i_12] [i_13] = ((min((((12902382575711906851 < (arr_16 [i_12] [i_13])))), var_8)));
        }
        arr_68 [i_12] = 14680064;
    }
    var_34 = var_11;
    #pragma endscop
}
