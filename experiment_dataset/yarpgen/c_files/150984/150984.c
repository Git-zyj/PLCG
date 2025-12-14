/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150984
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_14 ? ((var_14 ? var_1 : ((min(var_6, var_2))))) : var_2));

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_19 = min((~var_4), ((~(arr_1 [i_0 + 1]))));
        arr_2 [i_0 - 1] [i_0] = arr_1 [i_0 - 1];
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                {
                    arr_13 [i_1] = (((arr_3 [i_1]) ? 10 : (min(2610671351, 1))));

                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        var_20 = ((var_1 ? (min((60106 * -29799), ((var_12 ? var_16 : (arr_11 [i_1]))))) : (arr_14 [20] [1] [i_1] [20])));
                        var_21 ^= (arr_17 [6] [i_3] [i_2] [12]);
                        var_22 = (min((arr_9 [i_2] [i_2]), var_2));
                    }
                    var_23 = (max(var_23, var_1));
                }
            }
        }

        for (int i_5 = 1; i_5 < 21;i_5 += 1) /* same iter space */
        {

            for (int i_6 = 3; i_6 < 22;i_6 += 1)
            {
                var_24 = (max(var_24, ((7295616674230445440 ^ (min(((((arr_17 [i_1] [i_1] [i_5] [i_1]) ? var_0 : var_1))), (min(-5993169170046387523, (arr_16 [i_5] [14] [14] [8])))))))));
                var_25 += var_14;
                var_26 = (max(var_26, ((((~28) ? (min((min((arr_22 [12]), (arr_18 [i_6] [i_6] [i_6]))), (((var_9 ? 9223372036854775803 : var_2))))) : 1)))));
                var_27 ^= var_13;
            }
            for (int i_7 = 4; i_7 < 22;i_7 += 1) /* same iter space */
            {

                /* vectorizable */
                for (int i_8 = 0; i_8 < 24;i_8 += 1)
                {
                    var_28 = var_6;
                    arr_30 [i_1] [i_5] [i_1] [i_7 - 3] [i_8] = (arr_10 [i_1] [i_1]);
                }
                var_29 = (max((-2061113520 && var_6), (arr_24 [i_7 - 1] [i_7] [i_7 - 1] [i_7])));
                var_30 = var_9;
                var_31 = 9223372036854775807;
            }
            for (int i_9 = 4; i_9 < 22;i_9 += 1) /* same iter space */
            {
                var_32 = var_9;
                arr_34 [i_1] [i_1] = var_8;
                var_33 ^= (((max(((max(var_17, var_10))), (min((arr_8 [i_9]), 8260)))) / (arr_23 [i_1] [i_1] [i_9] [i_1])));
                var_34 = (((((arr_27 [i_9 - 3] [i_9 - 3]) << (arr_27 [i_9 - 1] [i_9 - 4]))) - 740803749));
            }
            for (int i_10 = 4; i_10 < 22;i_10 += 1) /* same iter space */
            {
                arr_37 [i_1] [i_10] [8] [14] &= (arr_28 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5 - 1]);
                var_35 = (min(var_35, (((~(((arr_7 [i_1]) ? 1028159973 : (arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))))));
            }
            var_36 = (min(((((arr_28 [i_1] [i_1] [i_1] [i_5] [i_5] [i_5]) ? (arr_4 [i_1]) : var_4))), (arr_16 [i_5 + 3] [i_5 + 1] [i_5] [i_1])));
            var_37 |= -1074450446;
        }
        /* vectorizable */
        for (int i_11 = 1; i_11 < 21;i_11 += 1) /* same iter space */
        {
            var_38 = ((~(arr_16 [i_11 + 2] [i_11 + 3] [i_1] [i_1])));
            arr_42 [i_1] [i_11] = 1;
            var_39 = (-1771826001006303575 - 82);
            arr_43 [i_1] [i_1] = 1;
        }
        arr_44 [i_1] = (((arr_12 [19] [i_1]) ? (((min(var_16, (arr_31 [i_1] [i_1] [14] [i_1]))))) : ((~(((arr_26 [i_1]) ? (arr_4 [i_1]) : var_17))))));
        arr_45 [i_1] = (var_3 / 74);
    }

    for (int i_12 = 0; i_12 < 13;i_12 += 1)
    {
        arr_48 [i_12] = ((+((var_1 ? (arr_33 [i_12] [1] [1] [i_12]) : (arr_24 [i_12] [i_12] [i_12] [i_12])))));
        arr_49 [i_12] = ((+((min((arr_27 [i_12] [i_12]), (arr_27 [i_12] [i_12]))))));
    }
    for (int i_13 = 0; i_13 < 19;i_13 += 1)
    {
        var_40 += 7118946936674638052;
        var_41 = ((((arr_24 [i_13] [i_13] [i_13] [1]) ? var_16 : var_2)) & (arr_23 [i_13] [i_13] [i_13] [i_13]));
        arr_53 [i_13] = ((var_15 + ((max((((var_4 == (arr_9 [i_13] [i_13])))), (arr_20 [i_13] [i_13] [i_13]))))));
        var_42 = (max((min(1, -2061113519)), ((((arr_29 [i_13] [i_13] [i_13]) != (arr_29 [i_13] [11] [i_13]))))));
    }
    for (int i_14 = 0; i_14 < 19;i_14 += 1) /* same iter space */
    {
        var_43 |= (((((var_4 ? (arr_32 [i_14] [i_14] [i_14]) : (arr_32 [1] [i_14] [i_14])))) ? (arr_51 [i_14]) : (arr_32 [8] [i_14] [6])));
        var_44 = (((arr_5 [i_14]) ? (((arr_8 [i_14]) ? var_2 : (arr_8 [i_14]))) : (arr_15 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14])));
    }
    for (int i_15 = 0; i_15 < 19;i_15 += 1) /* same iter space */
    {
        arr_59 [i_15] = ((+(min((arr_40 [i_15] [i_15]), (~var_4)))));
        var_45 *= ((32767 ? var_16 : (((min(var_4, (arr_22 [i_15])))))));
        arr_60 [11] = (arr_31 [i_15] [i_15] [i_15] [i_15]);
        arr_61 [i_15] = (arr_54 [i_15]);
        arr_62 [i_15] = (arr_6 [i_15] [i_15]);
    }
    #pragma endscop
}
