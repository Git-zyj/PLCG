/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164127
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_19 = ((~(arr_1 [i_0])));
        var_20 = ((!((min((arr_0 [i_0]), (arr_0 [i_0]))))));

        /* vectorizable */
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            var_21 = arr_5 [i_0] [i_0];
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        var_22 = 116;
                        var_23 &= (arr_3 [i_1 - 2] [i_1 - 1]);
                        var_24 = (min(var_24, 255));
                        var_25 = ((255 << (((arr_9 [i_0] [i_1] [i_2 - 1] [i_3]) - 13))));
                    }
                }
            }

            for (int i_4 = 3; i_4 < 19;i_4 += 1)
            {
                arr_13 [i_0] [i_1] = (-127 - 1);
                var_26 = (max(var_26, ((((arr_3 [i_0] [i_1 - 2]) << (-122 + 123))))));
            }
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                var_27 = ((((~(arr_0 [i_5]))) & -126));
                var_28 = (max(var_28, 31));
            }
            var_29 = (~63);
            var_30 *= (arr_2 [i_1 + 1] [i_1 + 1]);
        }
        for (int i_6 = 1; i_6 < 19;i_6 += 1)
        {
            var_31 = -5;
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    {
                        var_32 = 13306;
                        var_33 = (max(var_33, ((min((arr_14 [i_0] [i_8] [i_6 - 1] [i_8]), (((((min((arr_9 [i_0] [i_0] [i_7] [i_8]), 126))) || ((min((arr_9 [i_0] [i_0] [i_0] [i_8]), (arr_1 [i_0]))))))))))));
                    }
                }
            }
            var_34 = (max((max((((19723 || (arr_18 [i_0])))), ((-(arr_18 [i_0]))))), (min(866282767, ((min(-16, (arr_23 [i_0] [i_0] [i_6 + 1] [i_6]))))))));
            var_35 = (min((!18), ((~(((!(arr_17 [i_0] [i_6] [i_0]))))))));
            var_36 = 34;
        }
        for (int i_9 = 1; i_9 < 18;i_9 += 1)
        {
            var_37 = (min((min((arr_4 [i_9 + 2] [i_9] [i_9 + 2]), 0)), 9632));
            var_38 = min((arr_8 [i_0]), (((-11 + 2147483647) << (((((arr_0 [i_9 - 1]) + 40)) - 14)))));
            var_39 = (min((arr_24 [i_0] [i_0] [i_0] [i_0] [i_9 - 1] [i_0]), (!4398046511103)));
            arr_29 [i_9] = (min(((min((min((arr_27 [i_9] [i_9]), 32765)), 235))), (((!15) % (arr_2 [i_0] [i_0])))));
        }
        for (int i_10 = 0; i_10 < 20;i_10 += 1)
        {
            var_40 = (min(var_40, (((!(((65504 ^ ((min((arr_31 [i_0] [i_10]), 65504)))))))))));
            var_41 = (arr_17 [i_0] [i_10] [i_10]);
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 20;i_11 += 1)
            {
                for (int i_12 = 1; i_12 < 17;i_12 += 1)
                {
                    {
                        arr_38 [i_10] [i_12] = ((((~(arr_10 [i_12 + 2] [i_12 - 1] [i_12 + 2] [i_12 + 1])))) != ((min(0, 4398046511122))));
                        var_42 = (~71);
                    }
                }
            }
        }
        var_43 = (max(var_43, ((((((arr_33 [i_0] [i_0] [i_0] [i_0]) | (arr_9 [i_0] [i_0] [i_0] [i_0]))) | ((min((min((-32767 - 1), (arr_17 [i_0] [i_0] [i_0]))), (((arr_27 [i_0] [i_0]) ^ (arr_5 [i_0] [i_0])))))))))));
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 20;i_13 += 1) /* same iter space */
    {
        var_44 = (arr_1 [i_13]);

        for (int i_14 = 4; i_14 < 16;i_14 += 1) /* same iter space */
        {
            var_45 = (max(var_45, 19032));
            arr_45 [i_13] [i_13] [i_14 - 3] = 167;
        }
        for (int i_15 = 4; i_15 < 16;i_15 += 1) /* same iter space */
        {
            var_46 = (arr_4 [i_13] [i_15 - 4] [i_13]);

            for (int i_16 = 0; i_16 < 20;i_16 += 1)
            {

                for (int i_17 = 4; i_17 < 16;i_17 += 1)
                {
                    var_47 = (((arr_52 [i_13] [i_15] [i_15 + 2] [i_17 - 4]) | (((4398046511085 > (arr_32 [i_13] [i_13] [i_13]))))));
                    var_48 = (arr_28 [i_15] [i_13] [i_15 - 2]);
                    var_49 = (min(var_49, (arr_50 [i_15] [i_15 - 4] [i_15 - 2] [i_15 - 2])));
                }
                for (int i_18 = 3; i_18 < 19;i_18 += 1)
                {
                    var_50 = ((0 | (~31)));
                    arr_58 [i_13] [i_15] [i_15] [i_15] = (((arr_54 [i_13] [i_15] [i_16] [i_18 - 2]) <= (arr_12 [i_13] [i_13] [i_13])));
                    var_51 = (~-4398046511079);
                }
                var_52 = (((arr_42 [i_13]) - (arr_35 [i_15 - 1] [i_15 + 2] [i_15 + 4] [i_15] [i_15 + 4])));
            }
            for (int i_19 = 1; i_19 < 19;i_19 += 1)
            {

                for (int i_20 = 0; i_20 < 20;i_20 += 1) /* same iter space */
                {
                    var_53 = -52;
                    var_54 = (max(var_54, (((-(arr_54 [i_13] [i_20] [i_13] [i_20]))))));
                    arr_65 [i_13] [i_13] [i_20] [i_19] [i_20] |= 18446744073709551615;
                    var_55 = (13 <= 62);
                }
                for (int i_21 = 0; i_21 < 20;i_21 += 1) /* same iter space */
                {

                    for (int i_22 = 2; i_22 < 18;i_22 += 1)
                    {
                        var_56 = arr_9 [i_13] [i_19 + 1] [i_21] [i_22 - 2];
                        var_57 = 32748;
                    }
                    var_58 = (arr_42 [i_19 - 1]);
                    var_59 |= (!590777643104856659);
                    var_60 *= (arr_5 [i_13] [i_15 - 4]);
                }
                for (int i_23 = 0; i_23 < 20;i_23 += 1) /* same iter space */
                {
                    var_61 = (((arr_59 [i_13] [i_13]) ^ (arr_69 [i_15 - 4] [i_19 - 1] [i_19 - 1])));
                    var_62 = (!98);
                    var_63 = (arr_60 [i_13] [i_13] [i_13] [i_13]);
                }
                var_64 = (-32767 - 1);
            }
            for (int i_24 = 0; i_24 < 1;i_24 += 1)
            {
                var_65 = 0;
                var_66 = 2032;
            }
            for (int i_25 = 4; i_25 < 17;i_25 += 1)
            {
                var_67 = (arr_3 [i_13] [i_15 - 3]);
                var_68 ^= (!-8916109504714972437);
                var_69 = (min(var_69, (arr_36 [i_15 - 1] [i_13])));
                var_70 = ((-98 != (arr_41 [i_15 - 4] [i_15 + 1])));
            }
        }
    }
    var_71 = (min((-32767 - 1), ((~(min((-32767 - 1), 4398046511117))))));
    var_72 -= (-32767 - 1);
    #pragma endscop
}
