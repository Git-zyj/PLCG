/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106690
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_11 = 17340;
        var_12 = (min(var_12, var_3));
        var_13 = (max(var_13, 4503599627370495));
        var_14 = (arr_2 [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = var_9;
        arr_8 [i_1] = ((((((var_2 >= (arr_5 [i_1]))))) != ((var_2 ? var_2 : 17340))));

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            var_15 = (max(var_15, 63));

            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                var_16 = (arr_5 [i_1]);
                var_17 = var_7;
            }
            var_18 = (arr_10 [i_1] [i_2] [i_1]);
            var_19 = 13190;
        }
        for (int i_4 = 3; i_4 < 16;i_4 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 18;i_6 += 1)
                {
                    {
                        arr_20 [i_4] [i_5] = var_3;
                        var_20 = (min(var_20, (411109737 > var_8)));
                        var_21 = 3389391329668994791;
                        var_22 = ((var_9 - (((32372 ? 55 : 6795)))));
                        var_23 = (i_5 % 2 == zero) ? ((((arr_12 [i_5] [i_5] [i_6 + 1]) >> (((arr_12 [i_5] [i_6 + 1] [i_6 - 1]) - 3700833536))))) : ((((arr_12 [i_5] [i_5] [i_6 + 1]) >> (((((arr_12 [i_5] [i_6 + 1] [i_6 - 1]) - 3700833536)) - 3229097762)))));
                    }
                }
            }
            var_24 = (arr_11 [16] [i_4] [i_4]);

            for (int i_7 = 2; i_7 < 17;i_7 += 1)
            {
                var_25 = var_5;
                var_26 = ((var_2 <= (arr_21 [i_1] [i_4] [i_1])));
                var_27 = 6795;
                var_28 = 26509;
            }
        }
        for (int i_8 = 3; i_8 < 16;i_8 += 1) /* same iter space */
        {
            var_29 |= 1405863225;
            var_30 = (max(var_30, 102));
        }
    }
    for (int i_9 = 0; i_9 < 19;i_9 += 1) /* same iter space */
    {

        for (int i_10 = 1; i_10 < 17;i_10 += 1) /* same iter space */
        {
            var_31 = var_4;
            arr_31 [i_9] [i_9] [i_9] = (~114);
            var_32 = ((!(arr_4 [i_9] [i_10])));
        }
        for (int i_11 = 1; i_11 < 17;i_11 += 1) /* same iter space */
        {
            var_33 = 8888394648400510416;
            var_34 &= ((-(14378 - var_6)));
            arr_35 [i_9] [i_9] = 7;

            for (int i_12 = 2; i_12 < 17;i_12 += 1)
            {
                var_35 = (((55 ? (arr_2 [i_11 + 1] [i_11 + 1]) : ((var_7 ^ (arr_26 [i_9]))))));
                var_36 = (max(var_36, (((~(((arr_27 [i_11]) >> (((arr_16 [i_9] [i_9] [i_9]) - 9749238290590729694)))))))));
            }
            var_37 = ((!(((arr_29 [i_11] [i_9] [i_9]) <= 4294967293))));
        }

        for (int i_13 = 3; i_13 < 16;i_13 += 1)
        {

            for (int i_14 = 0; i_14 < 19;i_14 += 1) /* same iter space */
            {
                var_38 = (((arr_34 [i_13] [i_13 + 1] [i_9]) ? (arr_34 [i_13 - 1] [i_13 + 1] [i_9]) : 9558349425309041225));
                var_39 ^= (-1463924912949796452 == 3136455099);

                for (int i_15 = 0; i_15 < 19;i_15 += 1)
                {
                    var_40 = arr_38 [i_9];

                    for (int i_16 = 0; i_16 < 19;i_16 += 1)
                    {
                        arr_52 [i_9] [i_14] [i_9] = ((((~(var_0 >= -6791)))) * 4811447174546691749);
                        var_41 = ((((((1 >> (-1 + 29)))) % var_6)) >> ((((-((var_3 + (arr_50 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]))))) - 3103675541)));
                        var_42 = 2383281437276418066;
                    }
                    arr_53 [i_9] [i_9] [i_9] [i_15] = max((var_10 ^ var_5), 32760);
                }
            }
            for (int i_17 = 0; i_17 < 19;i_17 += 1) /* same iter space */
            {
                var_43 ^= (max(((min((-127 - 1), (arr_39 [4])))), (((arr_39 [4]) ? (arr_39 [18]) : (arr_39 [16])))));
                var_44 = (max(var_44, (((103 ? 8070450532247928832 : -23)))));
            }
            var_45 = (((((9558349425309041200 ? -8888394648400510397 : (((-(arr_13 [i_13]))))))) ? 1 : (max(var_1, var_9))));
        }
        var_46 = var_2;
        var_47 = (arr_14 [i_9]);
        var_48 = ((((min(-2666972060923407726, 34015) ^ ((((-6792 + 2147483647) >> (((arr_36 [i_9] [i_9] [i_9] [i_9]) + 50)))))))));
    }
    for (int i_18 = 2; i_18 < 22;i_18 += 1)
    {
        arr_60 [i_18] = var_6;
        var_49 = (((((-98 + 2147483647) >> (((((((arr_58 [i_18]) + 2147483647)) >> (-9978 + 9983))) - 27947016)))) << (137438953471 - 137438953466)));
    }
    var_50 = 0;
    var_51 ^= (var_8 ? (min((-101 * var_9), var_6)) : (((0 ? -145422874 : -96))));
    var_52 = var_5;
    var_53 = ((((((var_5 & var_6) ? ((220 ? -5 : 4294967285)) : 14378))) ? var_1 : var_9));
    #pragma endscop
}
