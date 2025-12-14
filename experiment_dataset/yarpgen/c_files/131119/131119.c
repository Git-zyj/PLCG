/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131119
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            arr_5 [i_0] = ((!(!0)));

            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                var_17 = (max(var_17, ((((arr_6 [i_0] [i_1 - 2] [i_2]) ? var_8 : var_10)))));

                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    var_18 = ((237 > (~var_12)));
                    arr_12 [i_2] [i_1] [i_2] = var_14;
                    var_19 = (min(var_19, (~-var_1)));
                    var_20 &= (((arr_8 [i_1 + 1] [i_0 - 2]) != (arr_8 [i_1 + 4] [i_0 + 4])));
                    var_21 = ((-(((arr_1 [i_0]) ? var_1 : (arr_3 [i_0])))));
                }
                for (int i_4 = 4; i_4 < 12;i_4 += 1)
                {
                    var_22 &= (var_14 << var_5);
                    arr_15 [i_2] [i_1] [i_2] = var_3;
                    var_23 = (((((var_15 > (arr_2 [i_0])))) & (((!(arr_2 [9]))))));
                    arr_16 [i_4 - 3] [i_2] [i_2] [i_2] [12] = ((~(arr_10 [i_0 - 1] [i_0 - 1] [12] [i_4 + 1] [i_4])));
                    var_24 += (arr_6 [i_0] [i_1] [i_2]);
                }
                for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
                {
                    var_25 = (((arr_8 [i_0 + 4] [i_0 - 3]) <= (((arr_9 [i_2] [i_1] [i_2] [i_1]) ? var_12 : (arr_6 [i_0] [i_0] [2])))));
                    arr_20 [i_0] [i_0 - 2] [i_0 - 1] [i_2] = ((-(((arr_19 [i_2]) ? var_13 : var_0))));
                }
                for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
                {
                    var_26 = (max(var_26, (((!(arr_21 [i_1 + 2] [i_0] [i_0 - 3] [i_0 - 2] [i_0 + 4]))))));
                    var_27 = (var_13 > ((((arr_10 [i_0] [i_1] [i_0] [i_6] [2]) != var_6))));
                }
                var_28 = var_1;
            }
        }
        for (int i_7 = 1; i_7 < 11;i_7 += 1)
        {
            var_29 ^= ((((var_6 >> (((arr_1 [i_7]) - 21957)))) >> (var_0 + 28)));
            arr_26 [i_0 + 3] = ((-((((arr_17 [i_0 - 2] [i_0] [i_0] [i_0] [1] [i_0]) && (arr_0 [i_0] [i_0]))))));
            var_30 = (arr_0 [i_7 - 1] [i_7 - 1]);
            var_31 = ((~(((arr_4 [i_7]) & (arr_3 [i_0])))));
        }
        arr_27 [i_0] [i_0] = (((1 | 4002251853112461814) ? ((((arr_18 [12] [i_0] [i_0] [0] [i_0] [12]) << (var_9 - 38834)))) : (~var_7)));
        var_32 = (min(var_32, var_16));
    }
    for (int i_8 = 3; i_8 < 23;i_8 += 1)
    {

        for (int i_9 = 3; i_9 < 23;i_9 += 1) /* same iter space */
        {
            var_33 = (min(var_3, (max((max(var_6, (arr_30 [i_8]))), ((((arr_32 [i_8]) != var_6)))))));
            var_34 = (max((max(((var_3 & (arr_32 [i_9]))), (((-(arr_31 [i_8] [i_9])))))), var_4));
            var_35 *= var_10;
        }
        for (int i_10 = 3; i_10 < 23;i_10 += 1) /* same iter space */
        {
            arr_36 [i_8] = var_5;
            var_36 = (i_8 % 2 == zero) ? ((((((var_12 >> ((((min((arr_29 [i_8] [i_10]), var_11))) + 96))))) != (min(((max(var_11, (arr_31 [19] [i_10])))), (arr_33 [8] [8])))))) : ((((((var_12 >> ((((((min((arr_29 [i_8] [i_10]), var_11))) + 96)) + 44))))) != (min(((max(var_11, (arr_31 [19] [i_10])))), (arr_33 [8] [8]))))));
        }
        for (int i_11 = 3; i_11 < 23;i_11 += 1) /* same iter space */
        {
            var_37 = (((arr_29 [i_8] [i_11 - 2]) | ((((arr_37 [i_8] [i_8] [i_8 - 2]) <= (arr_37 [i_8] [i_8] [i_8 - 2]))))));
            arr_39 [i_8] = (min((((((((!(arr_34 [i_8] [i_11] [i_8]))))) >= (((arr_35 [i_8] [i_8] [i_8]) ? var_9 : var_4))))), (((4162155090 >> (1288237227 - 1288237221))))));
            arr_40 [i_8] [i_11] = (max(((((max((arr_30 [i_8]), var_12)) <= (arr_35 [i_8] [i_11] [i_11])))), (min((arr_33 [i_8] [i_8]), (min((arr_29 [i_8] [i_8 + 1]), var_15))))));
        }
        var_38 = (~49152);
        var_39 = (max((((((min(var_6, var_3))) != (arr_30 [i_8 - 2])))), (((max((arr_38 [i_8 - 3] [i_8] [i_8]), (arr_28 [i_8 + 1]))) & (((var_6 & (arr_38 [i_8] [i_8] [i_8]))))))));
    }
    for (int i_12 = 1; i_12 < 23;i_12 += 1) /* same iter space */
    {
        arr_44 [2] = (arr_42 [i_12 + 1]);

        /* vectorizable */
        for (int i_13 = 0; i_13 < 0;i_13 += 1)
        {
            var_40 = (min(var_40, var_3));
            var_41 = (arr_30 [i_12]);
        }
    }
    for (int i_14 = 1; i_14 < 23;i_14 += 1) /* same iter space */
    {

        for (int i_15 = 0; i_15 < 24;i_15 += 1)
        {
            var_42 += ((((((!var_11) % var_1))) ? (((var_15 & var_6) + (min((arr_50 [i_14] [i_14] [i_15]), (arr_32 [i_14]))))) : var_15));

            for (int i_16 = 4; i_16 < 23;i_16 += 1) /* same iter space */
            {
                var_43 = ((((var_6 / (min((arr_46 [i_14] [i_15] [i_16]), var_4)))) >> (((((var_8 ? var_4 : var_1))) + 7330341409477259783))));
                arr_56 [i_14] [i_15] [i_14] [i_14] = (i_14 % 2 == zero) ? ((((max(var_16, (arr_48 [i_14] [i_14]))) << (((((arr_29 [i_14] [i_15]) + 100)) - 18))))) : ((((max(var_16, (arr_48 [i_14] [i_14]))) << (((((((((arr_29 [i_14] [i_15]) + 100)) - 18)) + 47)) - 1)))));

                for (int i_17 = 0; i_17 < 24;i_17 += 1)
                {
                    var_44 -= (min(var_12, (arr_32 [i_14])));
                    var_45 += (min((((max(var_0, var_15)) % (((((arr_34 [i_14 - 1] [i_14 - 1] [i_14 - 1]) <= var_7)))))), (arr_49 [i_16])));
                    arr_59 [i_16] [i_14] [i_14] = var_8;
                    var_46 *= (min((min((min(var_8, (arr_33 [i_14] [i_14]))), (((!(arr_41 [i_17])))))), ((max(var_5, (max((arr_46 [i_14] [i_14] [i_14]), (arr_34 [i_14] [i_15] [i_16]))))))));
                }
                for (int i_18 = 0; i_18 < 24;i_18 += 1)
                {
                    var_47 = (arr_58 [i_14] [i_14] [i_16] [i_18]);
                    arr_63 [i_18] [1] [i_18] [i_14] = (min((max(((2155588587114364003 ? 4002251853112461792 : -1)), (max(var_15, var_10)))), var_15));
                }
            }
            for (int i_19 = 4; i_19 < 23;i_19 += 1) /* same iter space */
            {
                var_48 -= 5947414109525700494;
                var_49 ^= ((~((-(arr_58 [i_14] [i_19] [i_14] [6])))));
            }
            for (int i_20 = 4; i_20 < 23;i_20 += 1) /* same iter space */
            {
                arr_69 [i_14] [i_14] = (min(var_14, (((arr_28 [i_14]) ? (max(var_16, (arr_43 [i_20] [i_15]))) : ((var_14 << (var_9 - 38819)))))));
                var_50 *= var_2;
            }
            for (int i_21 = 2; i_21 < 23;i_21 += 1)
            {
                var_51 = (-(min((min(var_15, var_0)), (max((arr_48 [i_14] [6]), (arr_57 [i_14]))))));
                arr_74 [i_21] [i_14] [i_14] [i_14] = ((!((((((arr_47 [i_21]) ? var_7 : var_14))) && (((-(arr_65 [i_14] [i_14] [1] [i_14]))))))));
            }
            var_52 &= ((arr_68 [20]) != (((min(1, 1)))));
        }
        var_53 = (min((arr_28 [i_14]), ((max((arr_48 [i_14] [i_14 - 1]), (arr_38 [i_14] [i_14] [i_14]))))));
    }
    var_54 ^= 4002251853112461817;
    var_55 &= ((~((~(max(var_12, var_15))))));
    #pragma endscop
}
