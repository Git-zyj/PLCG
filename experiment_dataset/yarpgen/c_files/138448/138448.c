/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138448
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= (min(var_11, (min(-var_12, (max(var_4, var_9))))));
    var_21 = (((max((min(var_7, var_5)), -1)) >= (~-var_1)));
    var_22 = var_18;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_23 ^= ((-(arr_3 [i_0] [20])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_24 = (((arr_2 [i_0 + 1]) ? var_10 : (-4201668986110309719 || var_10)));
                    arr_8 [i_0] = var_12;
                    arr_9 [i_2] [i_2] [i_2] = (arr_0 [i_2]);
                    var_25 = ((27456 ? (arr_7 [i_0 + 3] [i_0] [i_0 + 1] [i_0 - 1]) : (arr_7 [i_2] [i_2] [i_1] [8])));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {

            /* vectorizable */
            for (int i_5 = 3; i_5 < 9;i_5 += 1) /* same iter space */
            {

                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    var_26 = 24610;
                    arr_20 [i_6] [i_6] [i_4] = ((0 ? -1134137387 : 1097811418));
                    var_27 &= (((arr_5 [i_5 - 3]) ? (arr_18 [i_3] [i_5 - 3] [i_5] [i_5 - 2]) : 18446744073709551615));
                    var_28 *= (!4095);
                }
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    var_29 = 4264460829453940553;
                    var_30 = (min(var_30, -27544));
                }
                for (int i_8 = 2; i_8 < 9;i_8 += 1)
                {
                    var_31 = ((~((122 ? 18446744073709551615 : 1276987733930016353))));
                    var_32 ^= (((arr_7 [i_5 - 1] [i_4] [i_5] [i_5]) ? (~var_15) : (arr_4 [10])));
                }
                arr_25 [i_3] [i_4] [2] = var_18;
            }
            /* vectorizable */
            for (int i_9 = 3; i_9 < 9;i_9 += 1) /* same iter space */
            {
                var_33 ^= (3087696158 ? 255 : 40919);
                var_34 ^= (((24610 ? -1097811408 : var_3)));
                arr_30 [i_3] [i_4] [i_4] = -40893;
            }
            for (int i_10 = 3; i_10 < 9;i_10 += 1) /* same iter space */
            {
                var_35 = (max(var_35, ((((((var_6 ? (arr_31 [8] [i_3]) : 24643))) ? (var_18 | 3) : (arr_31 [i_3] [i_3]))))));
                arr_33 [i_4] = (min((min(((((arr_7 [i_3] [i_3] [i_4] [i_4]) ? 185064053 : (arr_23 [i_4] [6] [i_10] [i_4] [i_10 - 3])))), (min(var_19, (arr_17 [i_10] [i_10] [i_10] [i_3]))))), (min(var_15, ((min((arr_29 [i_4] [0] [i_10]), 1097811429)))))));
            }
            for (int i_11 = 0; i_11 < 10;i_11 += 1)
            {
                var_36 = ((((min(((var_18 ? (arr_10 [i_3] [i_3]) : (arr_6 [i_3] [i_3] [i_3] [i_3]))), (((arr_27 [i_4] [i_4] [7] [i_11]) ? -25139 : 1))))) && (((-(var_10 >= var_2))))));
                arr_36 [i_4] [i_4] = 3228138354248047286;
                var_37 = (min((min(((25073 ? 3 : -4148549957549863866)), 15310)), (arr_1 [i_11])));
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 10;i_13 += 1)
                    {
                        {
                            arr_43 [i_3] [i_3] [3] [i_4] [i_13] = (((arr_32 [i_13] [5] [3] [i_3]) ? (max(var_14, ((min(var_8, var_3))))) : (!1)));
                            arr_44 [i_3] [i_4] [i_11] [i_4] = ((((-44 ? (min((arr_11 [i_13] [1]), 4294967295)) : 17443)) >> (((arr_12 [i_3] [i_3]) - 496902992))));
                            var_38 = (min(var_38, 65535));
                            arr_45 [i_13] [i_4] [i_11] [i_4] [i_4] [9] = var_0;
                        }
                    }
                }
            }
            arr_46 [i_3] |= (((192 >> (27647 - 27629))));
        }
        for (int i_14 = 0; i_14 < 10;i_14 += 1) /* same iter space */
        {
            arr_50 [i_3] [0] [i_14] = (((arr_12 [i_3] [i_14]) ? (min((arr_12 [i_3] [i_14]), -5109)) : (arr_12 [i_14] [i_3])));
            var_39 = (min(var_39, (arr_42 [i_14])));
        }
        for (int i_15 = 0; i_15 < 10;i_15 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_16 = 0; i_16 < 10;i_16 += 1) /* same iter space */
            {
                var_40 ^= ((((~(arr_48 [i_3] [i_3]))) * 8028));

                for (int i_17 = 0; i_17 < 10;i_17 += 1)
                {
                    arr_58 [i_17] [i_17] [7] = (((arr_24 [i_3] [i_3] [i_3] [i_17] [i_3]) ^ 15));
                    var_41 = arr_34 [4] [i_15];
                    arr_59 [1] [1] [1] [4] = ((65535 ? (!165) : 250));
                }
                for (int i_18 = 0; i_18 < 10;i_18 += 1)
                {
                    arr_63 [i_3] [6] [i_3] [i_3] [i_3] [i_3] = var_7;
                    var_42 = (((arr_24 [i_18] [i_16] [i_16] [4] [i_3]) ? -20694 : (arr_4 [i_15])));
                    var_43 = (max(var_43, ((((arr_62 [2] [i_15] [i_16] [i_18]) - 63)))));
                }
                var_44 = var_15;
            }
            for (int i_19 = 0; i_19 < 10;i_19 += 1) /* same iter space */
            {
                var_45 = (max(var_45, 110));

                /* vectorizable */
                for (int i_20 = 0; i_20 < 10;i_20 += 1)
                {
                    arr_71 [i_3] [i_3] [i_19] [i_20] = (((arr_34 [i_3] [i_15]) && var_10));
                    var_46 |= var_13;
                    arr_72 [i_3] [i_3] [i_3] [i_3] = 255;
                }
                for (int i_21 = 2; i_21 < 7;i_21 += 1) /* same iter space */
                {

                    for (int i_22 = 0; i_22 < 10;i_22 += 1)
                    {
                        arr_77 [i_3] [0] [i_3] [i_3] [i_3] [i_3] = ((((min((max(65533, 16713)), var_16))) & 2037162034));
                        var_47 -= (((((arr_24 [i_3] [i_3] [i_3] [i_3] [8]) && (((15471 ? 58129 : (arr_75 [i_3] [i_3])))))) && ((!(((-646031871 ? var_14 : -46)))))));
                        var_48 ^= (arr_41 [i_3] [i_3] [1]);
                        arr_78 [8] [8] [i_19] [3] [i_19] = (!var_16);
                    }
                    var_49 = ((((max(var_14, var_12))) ? var_5 : (0 ^ var_12)));
                    var_50 = var_0;
                }
                /* vectorizable */
                for (int i_23 = 2; i_23 < 7;i_23 += 1) /* same iter space */
                {
                    var_51 = (~1195993556);
                    var_52 = (((arr_48 [i_3] [i_19]) == (3 | var_5)));

                    for (int i_24 = 2; i_24 < 9;i_24 += 1)
                    {
                        var_53 = (min(var_53, ((((((9296819382599283095 ? var_7 : var_12))) ? (~1) : (1 | 49))))));
                        var_54 = var_14;
                        arr_84 [i_3] [i_24] [2] [i_15] [i_19] [i_23] [9] = ((1 ? (arr_69 [i_15] [i_19] [i_23]) : (arr_69 [i_3] [i_19] [i_3])));
                        var_55 = (((arr_24 [i_15] [i_19] [i_23 + 2] [i_24 - 2] [i_24 + 1]) | 15));
                        var_56 -= 92;
                    }
                    for (int i_25 = 0; i_25 < 10;i_25 += 1)
                    {
                        var_57 = (min(var_57, (((var_4 & (15608518325060222161 || 242))))));
                        var_58 *= (arr_11 [7] [2]);
                    }
                }
                /* vectorizable */
                for (int i_26 = 2; i_26 < 7;i_26 += 1) /* same iter space */
                {
                    var_59 = (min(var_59, (8028 != 254)));
                    var_60 = (max(var_60, (((((((arr_89 [i_19] [i_19] [i_3] [i_26]) * var_15))) ? var_2 : (~32720))))));
                    var_61 = (max(var_61, ((((arr_81 [i_26] [i_26 - 1] [i_26 - 1] [i_26 - 1] [2]) ? (arr_81 [i_26] [i_26 - 1] [i_26 - 1] [i_26] [i_26 - 1]) : (arr_81 [i_15] [i_26 - 1] [i_26 - 1] [i_26 + 3] [i_26 + 3]))))));
                }
                var_62 = (max(var_2, (((~var_0) ? ((min(var_16, var_17))) : var_5))));
            }
            arr_91 [i_3] [i_15] = (min(0, (~var_15)));
            var_63 ^= (((~9149924691110268521) > (~34440)));
        }
        arr_92 [i_3] = (min((((arr_69 [i_3] [i_3] [i_3]) * 9495)), var_14));
    }
    #pragma endscop
}
