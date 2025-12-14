/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10487
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_14 ^= (var_12 * 65518);
        var_15 = (((arr_1 [i_0]) * ((min((!var_8), (arr_0 [i_0] [i_0 + 1]))))));
        var_16 = ((-((var_12 & (((max((arr_0 [15] [i_0]), (arr_0 [i_0] [i_0])))))))));

        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            var_17 = (var_5 & var_0);
            var_18 = (((((var_6 >= (arr_3 [i_0 - 1] [i_0 - 1] [i_1 - 1])))) & ((~(arr_3 [i_0 - 1] [i_1] [i_1 - 2])))));
            var_19 = ((-(arr_2 [i_1] [i_1 + 1])));

            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                arr_7 [i_0] [i_0] [i_2] = (max((arr_2 [i_1] [i_1]), (!var_2)));

                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    arr_12 [i_0] [i_0] [1] [1] = (max((!var_12), (max((arr_9 [5] [i_0 - 1] [i_1 - 2] [i_1]), (arr_1 [i_0])))));
                    var_20 = var_8;
                }
                var_21 = ((~(min((arr_5 [i_0 + 1] [i_0 - 1] [i_1 + 1] [i_2]), (arr_5 [i_0 + 1] [i_1 - 1] [i_1 - 2] [i_2])))));
            }
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            var_22 = (!var_5);
            var_23 = (((arr_2 [i_0] [i_0]) - 2339171432));
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_24 = (min(var_24, ((((-(var_8 <= var_13))) < ((~(arr_1 [8])))))));
            var_25 ^= ((!((-6643081876947876445 >= (arr_4 [i_0 - 1])))));
            var_26 = (min((min((arr_2 [i_0 + 2] [i_0 - 1]), var_4)), (((arr_2 [i_0 + 1] [i_0 + 2]) ? var_3 : (arr_2 [i_0 + 2] [i_0 + 2])))));
        }
        var_27 = ((-(((-var_10 >= (((!(arr_4 [1])))))))));
    }
    for (int i_6 = 3; i_6 < 11;i_6 += 1)
    {
        var_28 = (min((min(-6643081876947876445, var_0)), 0));
        var_29 -= (arr_13 [i_6 - 3] [i_6]);

        for (int i_7 = 2; i_7 < 10;i_7 += 1)
        {
            var_30 = (min(((~(arr_2 [i_6 - 1] [i_6 + 2]))), (((var_0 || (((var_10 ? var_0 : var_1))))))));
            var_31 ^= (max((((arr_8 [i_6 - 3] [i_7 + 3] [11] [i_7 + 3]) ? (arr_8 [i_6 - 3] [i_7 + 3] [i_7] [i_7]) : var_1)), (~0)));
        }
        for (int i_8 = 3; i_8 < 12;i_8 += 1) /* same iter space */
        {
            var_32 ^= (-var_3 >= var_5);

            for (int i_9 = 0; i_9 < 13;i_9 += 1)
            {
                var_33 -= (min((arr_2 [i_6 + 1] [i_6]), (min((arr_11 [14] [i_6 + 1] [i_8] [i_9] [i_9]), var_4))));
                var_34 = (min(var_34, ((max((min(0, (arr_9 [i_6] [i_6] [1] [1]))), ((((var_10 <= (arr_5 [i_6] [i_8] [i_9] [i_9]))) ? ((((arr_22 [i_6] [i_8]) ? 76 : (arr_26 [3] [i_9] [i_9])))) : var_4)))))));
            }
            for (int i_10 = 0; i_10 < 13;i_10 += 1) /* same iter space */
            {

                for (int i_11 = 0; i_11 < 13;i_11 += 1)
                {
                    var_35 = (min(var_35, ((!(arr_11 [i_6] [i_6] [i_6] [i_6] [i_6])))));

                    for (int i_12 = 0; i_12 < 13;i_12 += 1)
                    {
                        var_36 = (min(var_12, (((arr_13 [i_8 - 3] [i_11]) ? (arr_2 [i_6] [i_6]) : (((arr_35 [i_6 - 2] [i_6] [0] [i_6] [i_6 + 1]) ? var_6 : var_2))))));
                        var_37 |= (arr_30 [i_6] [i_8] [i_10] [i_11]);
                        var_38 = -2844121055068038837;
                    }
                    for (int i_13 = 3; i_13 < 11;i_13 += 1)
                    {
                        var_39 = -1;
                        var_40 = (~(((((var_7 ? (arr_5 [i_6] [i_6] [i_10] [i_10]) : var_8))) ? (arr_15 [i_6] [i_13] [i_6]) : (arr_18 [i_6]))));
                    }
                    for (int i_14 = 2; i_14 < 11;i_14 += 1)
                    {
                        var_41 = (((arr_34 [i_6] [i_8] [i_8] [i_8 - 1] [i_8 - 1] [i_11] [i_14]) || var_9));
                        var_42 = (max(var_42, (((-(max(((-(arr_17 [i_6]))), var_9)))))));
                    }
                    var_43 *= (min(0, 3));
                }
                arr_41 [i_6] = ((-(arr_4 [i_6 - 3])));
            }
            /* vectorizable */
            for (int i_15 = 0; i_15 < 13;i_15 += 1) /* same iter space */
            {

                for (int i_16 = 0; i_16 < 13;i_16 += 1)
                {
                    arr_48 [i_6] [i_8] [i_8] = ((-(((arr_32 [i_15] [i_8] [i_15] [i_15]) ? var_10 : 1063234818))));

                    for (int i_17 = 0; i_17 < 13;i_17 += 1)
                    {
                        var_44 = (((arr_20 [i_6]) ? (arr_50 [i_6] [i_6] [i_8 - 1] [i_8 - 3] [i_8] [i_8 - 3] [i_15]) : var_3));
                        var_45 = (((arr_18 [i_6]) ? (arr_17 [i_6 - 3]) : (arr_17 [i_6 - 2])));
                        var_46 = ((4865759533033802298 ? 7 : -2951836977869450500));
                    }
                    var_47 = var_1;
                    var_48 |= -18446744073709551599;
                }
                var_49 = 1;
            }
        }
        /* vectorizable */
        for (int i_18 = 3; i_18 < 12;i_18 += 1) /* same iter space */
        {
            var_50 = (arr_3 [i_6] [i_6] [i_6]);
            /* LoopNest 3 */
            for (int i_19 = 0; i_19 < 13;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 13;i_20 += 1)
                {
                    for (int i_21 = 0; i_21 < 1;i_21 += 1)
                    {
                        {
                            var_51 = (((arr_29 [i_6 + 1] [i_6 - 3]) * var_8));
                            arr_64 [i_6] [i_18] [i_19] [i_20] [0] = (arr_35 [8] [i_18] [i_18 - 2] [12] [11]);
                        }
                    }
                }
            }
        }
        for (int i_22 = 3; i_22 < 12;i_22 += 1) /* same iter space */
        {

            for (int i_23 = 0; i_23 < 13;i_23 += 1)
            {
                var_52 = ((~137) ? (((arr_50 [i_6] [i_6] [i_6] [i_6] [i_6] [i_23] [i_23]) ? (arr_29 [i_6 + 2] [i_23]) : var_10)) : ((max((arr_17 [i_6]), var_9))));
                var_53 = (((((!(arr_28 [i_23] [i_6])))) - ((max(0, 1)))));
                var_54 = ((+((min((((arr_46 [i_6 + 2] [i_22 - 2] [i_6 + 2] [i_23] [i_6]) >= 14292110200203451110)), ((var_2 >= (arr_66 [i_6] [i_22]))))))));
                arr_70 [i_22] [i_6] [i_22] [i_22] = (((arr_29 [i_22 - 1] [i_22 - 1]) ? (arr_54 [i_6] [i_22] [i_23]) : (((((var_3 ? var_12 : var_0))) ? (min(1109530981, (arr_36 [i_6] [i_22] [i_22] [i_22] [i_22]))) : ((var_1 ? 1 : (arr_23 [4] [4] [i_6])))))));
            }
            for (int i_24 = 0; i_24 < 13;i_24 += 1)
            {
                var_55 = (((((1325 ? var_6 : ((((!(arr_54 [i_6 - 3] [i_22] [i_22])))))))) ? ((((((((arr_9 [i_6] [i_22] [i_24] [i_24]) <= 1)))) < (((arr_73 [1] [1] [5]) ? var_12 : (arr_1 [i_6])))))) : ((-(arr_71 [i_22 - 3] [i_6] [i_6])))));
                var_56 = var_4;
            }
            var_57 = (arr_38 [i_6]);
        }
        var_58 -= (-13 * 39);
    }
    for (int i_25 = 0; i_25 < 0;i_25 += 1)
    {
        var_59 = (min(247, ((((min(var_11, (arr_5 [i_25] [i_25 + 1] [i_25] [i_25 + 1])))) ? var_10 : (!4)))));

        for (int i_26 = 0; i_26 < 16;i_26 += 1)
        {
            arr_79 [i_26] [i_26] [i_26] = ((var_3 - (((-(((var_6 < (arr_11 [i_25] [i_25] [i_26] [i_26] [i_25])))))))));
            var_60 = ((((((var_13 <= (arr_75 [i_26]))))) >= (min(var_9, (arr_77 [i_25 + 1])))));
            var_61 = (max(var_61, (((((min(var_1, (arr_6 [i_25] [1] [i_25] [4])) <= (((arr_2 [i_25] [i_26]) ? (arr_9 [i_25] [i_25] [7] [i_26]) : (arr_11 [12] [i_25] [i_25] [7] [10]))))))))));
        }
        arr_80 [i_25] = (arr_75 [i_25]);
    }
    var_62 ^= (max(((max(var_9, (~9334150)))), (min(var_3, (~213)))));
    var_63 = (~-9334150);
    var_64 = (min(var_8, -var_10));
    var_65 ^= var_13;
    #pragma endscop
}
