/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147756
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_8;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
        {
            var_21 = min((((((1774453171 ? (arr_0 [i_1]) : (arr_5 [i_0] [i_1])))) ^ (((arr_3 [i_0] [i_1] [i_1]) % 1)))), ((min((arr_4 [i_1] [i_1]), 72))));
            var_22 = (arr_4 [i_1] [i_1 - 1]);
        }
        for (int i_2 = 1; i_2 < 1;i_2 += 1) /* same iter space */
        {
            var_23 = (max((arr_5 [i_0] [i_2]), ((((arr_1 [i_0]) || ((((arr_7 [i_2] [i_0] [i_0]) ? (arr_6 [i_2]) : (arr_3 [i_0] [i_0] [i_2])))))))));
            var_24 = (((((((((arr_4 [i_2] [i_2]) << var_15))) ? (((((arr_5 [i_2] [i_2]) || (arr_1 [i_0]))))) : (arr_0 [i_2])))) ? (min((arr_8 [i_0] [i_2 - 1]), (arr_2 [i_2 - 1] [i_0]))) : (((((((arr_7 [i_0] [i_0] [i_0]) ? var_14 : (arr_5 [i_0] [i_2])))) ? ((((arr_8 [i_0] [i_0]) != (arr_5 [i_2] [i_2])))) : var_0)))));
            var_25 = (+(((arr_3 [i_2] [i_2 - 1] [i_2]) * ((((!(arr_3 [i_0] [i_2] [i_2]))))))));
            arr_9 [i_2] = (min((arr_1 [i_0]), (min((arr_1 [i_0]), 0))));
        }
        var_26 -= ((!(arr_2 [i_0] [i_0])));
        arr_10 [i_0] = 3882645186;

        /* vectorizable */
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {

                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    var_27 = ((var_6 ? -var_11 : var_2));
                    var_28 = var_3;
                    var_29 += ((var_6 / (arr_3 [i_0] [i_3] [i_5])));
                }

                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    arr_22 [i_0] [i_6] [i_3] [i_6] = (arr_12 [i_0]);
                    var_30 = (min(var_30, (((((((arr_15 [i_3] [i_4] [i_6]) << (((arr_2 [i_3] [i_3]) - 245))))) ? (arr_12 [i_0]) : (arr_20 [i_4] [i_3] [i_0]))))));
                }
                for (int i_7 = 2; i_7 < 8;i_7 += 1)
                {
                    arr_26 [i_3] [i_4] [i_3] [i_0] [i_3] = var_0;
                    var_31 ^= 13;
                }
                for (int i_8 = 0; i_8 < 11;i_8 += 1)
                {
                    var_32 = var_4;
                    var_33 = (((-127 - 1) - (~var_13)));
                }
                var_34 = ((((var_3 ? 0 : (arr_18 [i_0]))) & var_6));

                for (int i_9 = 3; i_9 < 9;i_9 += 1)
                {
                    var_35 = (!255);
                    arr_34 [i_3] [i_4] [i_3] [i_0] [i_3] = var_10;
                }
            }
            for (int i_10 = 2; i_10 < 9;i_10 += 1)
            {
                var_36 = ((!(arr_1 [i_10])));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 11;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 10;i_12 += 1)
                    {
                        {
                            arr_45 [i_3] [i_3] [i_10] = ((-0 <= (((!(arr_23 [i_12] [i_10 - 2] [i_3] [i_0]))))));
                            arr_46 [i_0] [i_0] [i_3] [i_0] [i_0] [i_0] [i_0] = (arr_18 [i_0]);
                        }
                    }
                }
                arr_47 [i_3] [i_10] = ((!(arr_40 [i_0] [i_0] [i_0] [i_0] [i_0])));
            }
            var_37 = 1;
            var_38 = (((arr_20 [i_0] [i_3] [i_3]) & -var_18));
            var_39 = (~255);
            var_40 *= 110;
        }
    }
    for (int i_13 = 0; i_13 < 12;i_13 += 1)
    {

        for (int i_14 = 4; i_14 < 8;i_14 += 1)
        {
            var_41 = (((min((arr_49 [i_13]), (max(255, (arr_51 [i_14] [i_13] [i_14]))))) - ((max(var_15, (-720511735 + -541701450))))));
            arr_54 [i_14] = (i_14 % 2 == 0) ? (((var_1 >> (((((arr_51 [i_14] [i_14] [i_14]) << (((~var_3) - 2053194816)))) - 3483276257))))) : (((var_1 >> (((((((arr_51 [i_14] [i_14] [i_14]) << (((~var_3) - 2053194816)))) - 3483276257)) - 614168577)))));
        }
        /* vectorizable */
        for (int i_15 = 0; i_15 < 1;i_15 += 1)
        {

            for (int i_16 = 3; i_16 < 11;i_16 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_17 = 1; i_17 < 10;i_17 += 1)
                {
                    for (int i_18 = 2; i_18 < 11;i_18 += 1)
                    {
                        {
                            var_42 = var_3;
                            var_43 = (((((arr_59 [i_13] [i_15] [i_17] [i_18]) ^ 5))) >= 5623206520537817311);
                        }
                    }
                }
                var_44 = (arr_58 [i_13]);
                /* LoopNest 2 */
                for (int i_19 = 0; i_19 < 12;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 12;i_20 += 1)
                    {
                        {
                            var_45 = (((18 - 10) ? (arr_58 [i_20]) : var_11));
                            var_46 = (min(var_46, 10));
                        }
                    }
                }

                for (int i_21 = 0; i_21 < 12;i_21 += 1)
                {
                    var_47 = (arr_65 [i_13] [i_16] [i_16] [i_21]);
                    var_48 = var_7;
                }
            }
            for (int i_22 = 3; i_22 < 11;i_22 += 1) /* same iter space */
            {
                arr_72 [i_13] [i_22] [i_22 - 3] = 750709599;
                arr_73 [i_22] [i_22] [i_13] = (((30 >= 0) >= (arr_66 [i_13] [i_15] [i_15] [i_22] [i_22])));
            }
            for (int i_23 = 0; i_23 < 1;i_23 += 1)
            {
                arr_77 [i_13] [i_23] [i_23] [i_13] = (((16 <= 9223372036854775807) ? (var_5 - 1382831729) : var_1));
                var_49 -= var_6;
                var_50 = ((((~(arr_59 [i_13] [i_13] [i_13] [i_13])))) ? var_19 : -var_15);
            }
            /* LoopNest 2 */
            for (int i_24 = 4; i_24 < 10;i_24 += 1)
            {
                for (int i_25 = 0; i_25 < 1;i_25 += 1)
                {
                    {
                        var_51 = -17088;
                        var_52 |= (175587449 != 1);
                        arr_84 [i_13] [i_15] [i_24] [i_25] = var_16;
                        var_53 = (-237922055 <= (((var_1 != (arr_57 [i_25] [i_24] [i_15])))));
                        var_54 = (((arr_60 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13]) ? ((((arr_59 [i_13] [i_15] [i_24] [i_24]) != (-2147483647 - 1)))) : (3700486775 <= var_19)));
                    }
                }
            }
        }
        var_55 = (max(var_55, (((((max(1, (arr_83 [i_13]))) ? (var_6 % var_6) : (arr_48 [i_13] [i_13]))) != (arr_49 [i_13])))));
        var_56 = 0;
    }
    #pragma endscop
}
