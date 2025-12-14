/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111157
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_20 -= ((((max((arr_6 [i_0] [i_1] [i_2]), (arr_6 [i_2] [i_0] [i_0])))) & (((arr_6 [i_2] [i_1] [i_0]) << (arr_6 [i_2] [i_1 - 1] [i_0])))));
                    var_21 = var_19;
                    var_22 += 18816;
                    var_23 += (max((max(((var_8 ? -105 : (arr_0 [i_0]))), (arr_6 [i_0] [i_1 + 1] [i_0]))), (arr_8 [i_0] [i_0])));
                }
            }
        }
    }

    for (int i_3 = 1; i_3 < 19;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            var_24 = (max(var_24, (((2666363263022015178 ? var_17 : -48)))));
            var_25 = (~21);
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 20;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 20;i_6 += 1)
                {
                    {
                        var_26 += (max(((-47 ? 35184237871104 : 4633504814493460645)), (var_18 - 8868191587816073974)));
                        var_27 += ((var_2 % (arr_11 [i_4])));
                        var_28 = (arr_10 [i_4] [i_5]);
                    }
                }
            }

            for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
            {
                var_29 += (((min((arr_15 [i_3 + 2] [i_3 - 1] [i_3] [i_3 + 2]), 18170857068674430080)) >= (arr_22 [i_3 - 1] [i_4] [i_4] [i_7])));

                /* vectorizable */
                for (int i_8 = 3; i_8 < 18;i_8 += 1)
                {
                    arr_26 [i_3] [i_7] [i_7] [i_8] &= ((~(arr_15 [i_3] [i_4] [i_7] [i_8 + 1])));
                    var_30 = (min(var_30, 31));
                    var_31 ^= (((arr_21 [i_3 - 1] [i_4]) ? (arr_21 [i_3 - 1] [i_3 + 1]) : (arr_21 [i_3] [i_3 + 2])));
                }
            }
            /* vectorizable */
            for (int i_9 = 0; i_9 < 21;i_9 += 1) /* same iter space */
            {
                var_32 += ((!(arr_20 [i_3] [i_3 + 1] [i_3 - 1] [i_3 - 1])));
                arr_29 [i_4] = ((~((11084 ? var_6 : var_7))));

                for (int i_10 = 3; i_10 < 19;i_10 += 1) /* same iter space */
                {
                    var_33 = (max(var_33, ((((~var_2) != ((~(arr_30 [i_3] [i_3 + 2] [i_3] [i_9] [i_10 + 2] [i_10 - 1]))))))));

                    for (int i_11 = 0; i_11 < 21;i_11 += 1)
                    {
                        var_34 -= var_9;
                        arr_36 [i_4] = ((~((((arr_35 [i_3] [i_4] [i_4] [i_4] [i_10] [i_10] [i_10]) > 5)))));
                        var_35 -= ((55320 >> (-3434769403791673767 + 3434769403791673773)));
                        var_36 *= var_10;
                    }
                    for (int i_12 = 0; i_12 < 21;i_12 += 1)
                    {
                        var_37 = var_18;
                        var_38 = (min(var_38, (((arr_34 [i_10] [i_10 - 3] [i_10 - 3] [i_10] [i_10 - 2]) && (arr_34 [i_10] [i_10 - 1] [i_10] [i_10 + 2] [i_10 + 2])))));
                        var_39 = arr_9 [20];
                    }
                    for (int i_13 = 2; i_13 < 18;i_13 += 1)
                    {
                        var_40 = 8681403318231180500;
                        var_41 ^= 1;
                        var_42 = (((arr_33 [i_4] [i_4] [i_4] [i_13] [i_13]) || (arr_33 [i_3 + 1] [i_4] [i_9] [i_9] [i_9])));
                    }
                }
                for (int i_14 = 3; i_14 < 19;i_14 += 1) /* same iter space */
                {
                    arr_44 [i_4] [i_4] = -var_14;
                    var_43 ^= (((((arr_30 [i_3] [i_3 + 2] [i_3] [i_3 + 2] [i_3] [i_3]) + 2147483647)) >> (arr_43 [i_3] [i_3 + 2] [i_9] [i_14 + 2] [i_3 - 1] [i_9])));
                    var_44 = ((var_19 != (arr_43 [i_3] [i_3] [i_3 + 2] [i_3 + 1] [i_14 - 2] [i_3])));
                    var_45 = (max(var_45, 15653400645589265800));
                }
            }
            for (int i_15 = 4; i_15 < 18;i_15 += 1)
            {
                arr_47 [i_4] [i_4] [i_15] = (((arr_20 [7] [i_4] [i_15 + 2] [i_15 + 3]) ? (arr_35 [i_3] [i_3] [i_3 + 1] [i_4] [i_15] [i_15] [i_15 - 3]) : (-95 - 240)));
                var_46 = 2487417722;
                var_47 += 6221;

                for (int i_16 = 0; i_16 < 21;i_16 += 1)
                {
                    var_48 = (min(var_48, (var_6 || 149)));
                    var_49 *= (arr_28 [i_16] [i_3 + 2] [i_3 + 2]);
                }
                for (int i_17 = 0; i_17 < 21;i_17 += 1) /* same iter space */
                {

                    for (int i_18 = 0; i_18 < 21;i_18 += 1) /* same iter space */
                    {
                        var_50 -= (max(3191795483805293034, 68));
                        var_51 = (max((~33346), ((((max(var_16, (arr_9 [i_18])))) ? (arr_51 [i_15 + 2] [i_15] [i_15 + 2] [i_3 + 2] [i_3]) : ((max(var_7, var_4)))))));
                    }
                    for (int i_19 = 0; i_19 < 21;i_19 += 1) /* same iter space */
                    {
                        arr_58 [i_4] [i_4] [i_4] [i_4] [i_4] = 61400;
                        var_52 = (max(var_52, var_9));
                    }
                    var_53 = ((1 ^ (((-6042 == (arr_32 [i_3] [i_3] [1] [i_3 - 1]))))));
                    var_54 *= (((((max(var_7, var_13))) ? var_19 : (!var_17))));
                    arr_59 [i_4] [i_4] = (arr_16 [i_15] [i_4] [i_15] [i_17]);
                }
                for (int i_20 = 0; i_20 < 21;i_20 += 1) /* same iter space */
                {
                    arr_62 [i_4] [i_20] [i_15] [i_20] [i_20] = (~var_3);
                    arr_63 [i_20] [i_4] [i_4] [i_20] = ((var_7 ? ((~((var_1 & (arr_49 [i_3] [i_3 + 2] [i_3] [i_3 + 1] [i_3]))))) : (arr_33 [i_20] [i_15] [i_3 + 2] [i_3 + 2] [i_3 + 2])));
                }
                arr_64 [i_3] [i_3] [i_4] [i_3] = ((7 ? (2026288893 >= 15003378219282960083) : ((var_17 ? var_4 : 31232))));
            }
            var_55 ^= (var_2 <= var_4);
        }
        arr_65 [i_3] = (-6 & -46);
    }
    for (int i_21 = 0; i_21 < 20;i_21 += 1)
    {
        var_56 += (arr_22 [i_21] [i_21] [i_21] [i_21]);
        var_57 = var_14;
    }
    for (int i_22 = 0; i_22 < 1;i_22 += 1) /* same iter space */
    {
        var_58 = (min(var_58, ((((arr_52 [i_22] [i_22] [1] [i_22] [i_22]) ? (arr_60 [i_22] [i_22]) : (((~2038854939) ? ((var_2 ? (arr_7 [i_22] [i_22] [0]) : (arr_1 [i_22]))) : (((max(var_4, var_13)))))))))));
        var_59 = ((~(arr_22 [i_22] [i_22] [i_22] [i_22])));
        arr_72 [i_22] [2] = ((-((((((arr_50 [i_22] [i_22] [i_22] [7] [i_22]) >> (var_0 - 57))) != (-127 - 1))))));
    }
    for (int i_23 = 0; i_23 < 1;i_23 += 1) /* same iter space */
    {
        var_60 -= 91;
        var_61 -= (arr_51 [i_23] [i_23] [i_23] [i_23] [i_23]);
        var_62 = (max(var_62, ((((max((arr_24 [i_23] [i_23] [i_23] [i_23]), (arr_15 [i_23] [i_23] [i_23] [i_23]))) >> (((!(arr_19 [i_23] [i_23] [i_23] [i_23])))))))));
        var_63 = 58405;
    }
    var_64 = (var_12 && var_3);
    var_65 = (min(var_65, -1));
    #pragma endscop
}
