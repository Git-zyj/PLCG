/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161334
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 6250234521429654912;
    var_11 = (min(var_3, var_2));

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] = (arr_7 [i_0 + 1] [i_1] [i_2 + 2]);
                    var_12 = (max(var_12, (arr_5 [i_1])));
                }
            }
        }
        var_13 -= var_9;

        /* vectorizable */
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                arr_15 [i_3] [2] [2] [10] |= (arr_1 [i_4] [13]);
                var_14 = (((arr_10 [i_0 - 1] [i_0 - 1]) | (arr_14 [i_0 + 1] [i_0] [i_0] [i_0 + 1])));
            }
            var_15 *= var_9;
        }
        for (int i_5 = 1; i_5 < 17;i_5 += 1)
        {
            var_16 = (arr_3 [i_0]);
            var_17 *= (((var_1 ? (arr_2 [i_0 - 1] [i_5 + 1]) : (arr_2 [i_0 - 1] [i_5 - 1]))));
            var_18 = (min(var_18, (arr_17 [14] [i_5])));
        }
        /* vectorizable */
        for (int i_6 = 1; i_6 < 17;i_6 += 1)
        {
            var_19 *= (arr_7 [i_6 - 1] [i_6 - 1] [i_6 - 1]);

            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                var_20 = ((var_8 == (((arr_7 [i_0] [i_0] [i_0]) ? (arr_16 [i_0]) : var_1))));
                var_21 = (((arr_14 [i_0] [i_0] [i_0] [i_6 + 1]) <= (arr_14 [i_6 - 1] [i_0] [i_6 + 1] [i_6 + 1])));
                arr_23 [i_7] [i_0] [i_0 + 1] = (((arr_14 [5] [i_0] [i_6] [i_6]) / (arr_14 [i_6] [i_0] [i_6] [i_6])));
                var_22 = (((arr_20 [i_0 - 1] [i_6 - 1]) ? (arr_22 [i_6 - 1] [i_6] [i_6] [i_0 + 1]) : (arr_12 [i_0 - 1] [i_0])));
            }
            for (int i_8 = 2; i_8 < 16;i_8 += 1)
            {
                var_23 = (((var_9 ? (arr_7 [12] [i_6] [i_0]) : 6336)) - var_9);
                var_24 |= (var_9 ^ (arr_21 [i_0 + 1] [i_0] [i_0] [i_8 - 1]));
            }
            for (int i_9 = 1; i_9 < 16;i_9 += 1)
            {

                for (int i_10 = 0; i_10 < 18;i_10 += 1)
                {

                    for (int i_11 = 0; i_11 < 18;i_11 += 1)
                    {
                        arr_37 [i_10] [i_10] [i_0] [i_0] [16] [i_0] [i_10] |= ((arr_22 [i_9] [i_9] [i_9] [i_9]) + var_0);
                        var_25 = ((((((arr_3 [i_0]) & var_5))) & (87 / var_7)));
                        var_26 *= (!var_4);
                    }
                    for (int i_12 = 1; i_12 < 1;i_12 += 1)
                    {
                        var_27 = ((var_8 & ((((arr_11 [i_0] [i_10] [i_6] [i_0]) <= var_3)))));
                        var_28 = ((-(arr_5 [i_0])));
                    }
                    for (int i_13 = 0; i_13 < 18;i_13 += 1)
                    {
                        var_29 *= ((((arr_31 [i_0] [i_0] [i_0] [i_0 - 1]) ^ (arr_34 [i_0] [i_10] [i_10] [i_9] [i_0] [i_13]))));
                        var_30 -= ((((var_3 || (arr_11 [i_10] [i_6] [i_10] [i_9 - 1]))) ? (arr_41 [i_0] [i_6 + 1] [i_6 + 1] [i_10] [i_13]) : (arr_34 [i_6 - 1] [i_10] [i_9 - 1] [i_10] [i_13] [i_13])));
                        var_31 ^= (arr_41 [i_0] [i_6 - 1] [i_0] [i_0] [i_13]);
                    }
                    var_32 += (((arr_0 [i_0] [i_10]) + var_3));
                }
                for (int i_14 = 0; i_14 < 18;i_14 += 1)
                {
                    var_33 = ((var_8 ? 491456942 : (arr_5 [i_0])));
                    var_34 = var_1;
                    var_35 = var_1;

                    for (int i_15 = 2; i_15 < 14;i_15 += 1)
                    {
                        var_36 = var_2;
                        var_37 |= (arr_21 [i_0] [i_0] [i_0] [i_0 - 1]);
                    }
                    for (int i_16 = 0; i_16 < 18;i_16 += 1) /* same iter space */
                    {
                        arr_51 [i_0] = (arr_40 [i_0] [i_0 + 1] [5] [i_0 - 1] [i_0 - 1]);
                        arr_52 [i_0] [5] [i_0] [i_0] [i_0] [i_0 - 1] = (arr_34 [6] [i_0] [6] [i_14] [5] [i_14]);
                    }
                    for (int i_17 = 0; i_17 < 18;i_17 += 1) /* same iter space */
                    {
                        arr_57 [i_0] [i_6 + 1] [i_9] [i_0] [i_9] [i_0] = ((-(arr_29 [i_6] [i_6 - 1] [i_6 - 1] [17])));
                        var_38 *= (((var_7 > var_5) & (((var_0 <= (arr_17 [i_17] [i_17]))))));
                    }
                }
                for (int i_18 = 1; i_18 < 16;i_18 += 1)
                {
                    var_39 = (arr_4 [i_6] [i_18 + 1]);
                    var_40 = (arr_35 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]);
                    var_41 |= var_8;
                    arr_60 [i_0 + 1] [i_6 + 1] [i_9 - 1] [i_0] [0] = (0 >> (var_5 + 11));
                }
                var_42 *= (arr_42 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_9 - 1]);
            }
        }
        for (int i_19 = 0; i_19 < 18;i_19 += 1)
        {
            var_43 = (arr_53 [i_0] [i_0] [i_0] [i_0] [i_19] [i_19]);
            var_44 = ((((max((max((arr_35 [i_0] [i_0] [17] [i_0] [i_0] [i_0] [i_19]), var_7)), (arr_34 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [i_0 - 1])))) % var_3));
            var_45 = (((min(var_3, (arr_28 [i_0] [i_0 - 1] [i_0 - 1] [i_0]))) + (arr_6 [i_19] [12] [12] [i_0 + 1])));
            var_46 ^= var_1;
        }
    }
    /* vectorizable */
    for (int i_20 = 0; i_20 < 15;i_20 += 1)
    {
        /* LoopNest 2 */
        for (int i_21 = 4; i_21 < 14;i_21 += 1)
        {
            for (int i_22 = 1; i_22 < 13;i_22 += 1)
            {
                {
                    var_47 = (arr_30 [i_22 + 1] [i_22] [i_22 + 1] [i_22 + 2] [i_20] [i_22 + 2]);
                    var_48 = (arr_69 [i_20] [i_20] [i_21 - 3] [i_20]);
                    var_49 -= var_8;
                }
            }
        }
        var_50 ^= (arr_65 [10]);
        var_51 *= (arr_67 [i_20] [6]);
        var_52 -= var_1;
        arr_73 [i_20] [i_20] = var_6;
    }
    for (int i_23 = 0; i_23 < 20;i_23 += 1)
    {
        var_53 -= 236;

        for (int i_24 = 0; i_24 < 20;i_24 += 1)
        {
            arr_78 [i_23] = (min((arr_76 [i_23] [i_24] [i_23]), (arr_76 [i_24] [i_23] [i_23])));
            var_54 += var_9;

            /* vectorizable */
            for (int i_25 = 3; i_25 < 17;i_25 += 1)
            {
                var_55 = (-2147483647 - 1);
                var_56 = ((arr_76 [i_25 + 2] [i_25 + 3] [i_25]) / (arr_76 [i_25 + 2] [i_25 + 2] [i_25]));
            }
            /* vectorizable */
            for (int i_26 = 0; i_26 < 20;i_26 += 1)
            {
                arr_85 [i_24] [8] [8] = (((arr_79 [i_23] [i_23] [i_23] [5]) == (arr_76 [i_26] [i_24] [i_23])));
                var_57 = 2256402023;
                var_58 = 246;
                var_59 = -1094819447;
            }
            /* vectorizable */
            for (int i_27 = 0; i_27 < 20;i_27 += 1)
            {
                var_60 = (var_2 && var_4);

                for (int i_28 = 0; i_28 < 20;i_28 += 1)
                {
                    var_61 -= var_8;

                    for (int i_29 = 0; i_29 < 20;i_29 += 1)
                    {
                        var_62 = (((arr_76 [i_24] [i_27] [i_29]) ? (arr_88 [i_27] [i_24] [i_27]) : (arr_88 [i_23] [i_24] [i_27])));
                        var_63 = var_3;
                        var_64 -= (arr_92 [i_23] [i_24] [i_24] [i_28]);
                        var_65 = (arr_91 [i_28] [i_27] [i_28] [i_27] [i_27] [i_23]);
                        arr_95 [i_29] [16] [i_27] [i_23] [i_27] [i_23] [i_23] = (arr_92 [i_23] [i_27] [i_28] [2]);
                    }

                    for (int i_30 = 3; i_30 < 17;i_30 += 1)
                    {
                        var_66 ^= var_3;
                        var_67 = ((arr_93 [i_27] [i_30 + 1] [i_30 + 1] [i_30 + 1] [i_30 - 1]) ? (arr_96 [i_30] [i_30 - 3] [14] [i_30 + 3] [i_30 - 1] [i_30 + 1]) : var_5);
                    }
                }
                var_68 = var_0;
            }
        }
        /* vectorizable */
        for (int i_31 = 1; i_31 < 18;i_31 += 1)
        {
            var_69 -= (arr_84 [i_31]);
            var_70 = ((((var_6 ? (arr_79 [i_23] [6] [i_23] [i_23]) : var_3)) % (((var_8 ? (arr_89 [i_23]) : var_0)))));
            var_71 = (arr_76 [i_31 - 1] [18] [i_31]);
            var_72 = (arr_80 [i_23] [i_23] [i_31 + 1]);
            var_73 = (((arr_80 [i_31] [i_31] [i_23]) * (arr_80 [i_31 + 1] [15] [i_23])));
        }
    }
    var_74 = (min(var_74, var_6));
    #pragma endscop
}
