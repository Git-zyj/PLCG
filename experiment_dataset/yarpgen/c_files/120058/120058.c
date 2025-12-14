/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120058
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_20 = ((((min(((-(arr_0 [i_0]))), -11))) & (((arr_1 [i_0]) + var_4))));

        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                arr_6 [i_2] [i_2] &= ((~(((arr_4 [i_0] [i_1] [i_2]) ? (var_7 - var_10) : -28300))));
                var_21 = ((28296 ? 28296 : 77));
                arr_7 [i_0] [i_1] = (((max((min(var_6, var_12)), (34 == var_14)))) >= (!-28296));
                arr_8 [i_1] = (max(((min(234, (arr_5 [i_1 + 1] [i_1])))), (min(-28323, (~var_4)))));
            }
            var_22 = (min((arr_5 [i_0] [i_0]), ((var_10 / (arr_5 [i_1 + 1] [i_1 - 1])))));
            var_23 = 3;
            arr_9 [i_0] [i_1] [i_0] = arr_3 [i_0] [i_1] [12];
        }
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 15;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
        {
            arr_16 [i_3] [i_3] [i_4] = ((-28296 > (arr_13 [i_4] [i_4] [i_3 - 1])));
            var_24 = (var_16 ? 945947824 : var_11);
            var_25 = ((var_3 ? (arr_14 [i_4]) : (29 & 31)));
            arr_17 [i_4] [i_4] [i_4] = var_11;
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
        {
            var_26 = 28299;
            arr_22 [i_5] = (((~var_15) ^ 950182144));
        }
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            var_27 = (950182168 >= 37);
            arr_25 [i_3 - 2] [i_6] [i_6] = ((~(arr_12 [i_3 + 1])));
        }

        for (int i_7 = 3; i_7 < 16;i_7 += 1) /* same iter space */
        {
            var_28 = (((arr_21 [i_7]) + (((arr_12 [i_3]) ? (arr_19 [i_7]) : var_3))));
            var_29 = var_13;
            var_30 ^= (211 >= 221);
        }
        for (int i_8 = 3; i_8 < 16;i_8 += 1) /* same iter space */
        {
            arr_31 [1] [i_8] = (((22 ? var_19 : 28274)));
            arr_32 [i_3] = ((var_4 ? (arr_13 [i_3] [i_3] [i_3]) : 220));
        }
        for (int i_9 = 3; i_9 < 16;i_9 += 1) /* same iter space */
        {
            var_31 = (var_5 == 121);
            var_32 = (min(var_32, var_3));
        }
        for (int i_10 = 0; i_10 < 18;i_10 += 1)
        {
            var_33 = 3985713295410893765;
            arr_39 [i_3] = (arr_34 [i_3 - 1]);
        }
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 16;i_11 += 1)
    {
        arr_43 [5] = ((~(arr_36 [i_11])));
        var_34 ^= arr_11 [i_11];
        arr_44 [i_11] = (222 & var_2);
        var_35 = (!-950182144);
        arr_45 [i_11] = var_2;
    }
    for (int i_12 = 0; i_12 < 16;i_12 += 1)
    {
        var_36 = var_19;
        arr_49 [i_12] = var_12;

        for (int i_13 = 0; i_13 < 16;i_13 += 1)
        {
            arr_52 [i_12] [i_12] [i_12] = (min((arr_28 [i_13] [i_12]), var_11));
            var_37 = var_17;
        }
        for (int i_14 = 0; i_14 < 16;i_14 += 1)
        {
            var_38 = ((((((max((arr_12 [9]), (arr_13 [i_14] [i_14] [i_12])))) ? (((arr_37 [i_12]) * var_16)) : (!var_3))) * (((var_18 > (max(var_9, (arr_29 [i_12]))))))));
            var_39 = (min(var_39, ((max((arr_41 [i_12]), var_17)))));
        }
        /* vectorizable */
        for (int i_15 = 0; i_15 < 1;i_15 += 1)
        {
            var_40 = ((arr_21 [i_15]) ? (arr_21 [i_15]) : 2);
            arr_58 [i_15] = (arr_24 [i_12]);
        }
        var_41 ^= ((((arr_23 [i_12] [i_12] [i_12]) ? (arr_23 [i_12] [i_12] [i_12]) : -28327)));
    }

    /* vectorizable */
    for (int i_16 = 3; i_16 < 17;i_16 += 1)
    {
        arr_61 [2] &= (arr_60 [i_16]);
        var_42 |= arr_60 [i_16];
    }
    for (int i_17 = 4; i_17 < 20;i_17 += 1)
    {

        for (int i_18 = 0; i_18 < 22;i_18 += 1)
        {
            arr_66 [i_17] [i_18] [i_17] &= (max((((((-(arr_65 [i_18] [16] [i_18])))) && var_10)), ((!(arr_63 [i_17 - 3] [i_17 + 2])))));

            for (int i_19 = 1; i_19 < 21;i_19 += 1)
            {
                var_43 = -950182148;
                var_44 -= (arr_65 [i_17] [i_17] [i_17]);
                arr_69 [i_17] [i_18] [i_19] = (arr_67 [i_19] [11] [i_17] [i_17]);
                arr_70 [i_17] [i_18] = (max(6228786134557434662, (arr_62 [i_19 + 1] [i_17 - 3])));

                /* vectorizable */
                for (int i_20 = 2; i_20 < 21;i_20 += 1)
                {
                    var_45 = ((arr_63 [i_17] [i_17 + 2]) ^ (~var_17));
                    var_46 ^= var_9;
                    arr_73 [i_19] [i_19] [i_19] [i_19] [i_19] = var_2;
                    var_47 = (max(var_47, -48));
                }
                for (int i_21 = 0; i_21 < 22;i_21 += 1)
                {
                    var_48 = (((-28299 || 56) && (-950182144 & 156610637)));
                    arr_77 [i_21] [i_19] [i_19] [0] [i_17] [i_17] = ((var_9 >= ((-55 ? (max(var_19, var_9)) : (((1 + (arr_68 [i_17]))))))));
                }
            }
        }
        for (int i_22 = 0; i_22 < 22;i_22 += 1)
        {
            arr_80 [21] [i_17] [21] = 189;
            var_49 = (max((arr_72 [i_17 - 4] [i_17 - 4] [i_17] [i_17 + 1] [i_17] [i_22]), (max((max((arr_62 [i_17] [i_17]), (arr_68 [i_22]))), (arr_78 [i_17 - 2])))));
        }
        arr_81 [i_17] = (950182144 != 1);
        var_50 -= (min(1, (32747 * 221)));
        var_51 = 34;
    }
    for (int i_23 = 3; i_23 < 19;i_23 += 1)
    {

        /* vectorizable */
        for (int i_24 = 0; i_24 < 1;i_24 += 1)
        {
            var_52 ^= (((((arr_84 [i_23 - 3] [i_23 - 2] [i_23 - 2]) + 2147483647)) >> (((arr_83 [12]) - 1465719273))));
            var_53 &= ((var_6 ? (arr_84 [i_23 - 1] [i_23 + 3] [i_23]) : 1));
        }

        for (int i_25 = 2; i_25 < 20;i_25 += 1)
        {
            var_54 = (max(((((((arr_83 [i_23]) ^ -950182147)) | (arr_82 [i_23 - 2])))), (((((arr_82 [17]) ? var_3 : (arr_89 [i_23 - 1]))) + (((1 ? 133 : 513974596)))))));
            var_55 -= var_7;
        }
        var_56 = 15374;
        arr_90 [i_23] = ((~(((~132) ? 15 : 4294967295))));
    }
    var_57 &= (min(var_12, ((((min(225, var_9))) && var_6))));
    #pragma endscop
}
