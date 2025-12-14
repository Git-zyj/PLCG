/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129033
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += var_9;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_19 = (((min(((-(arr_3 [i_0]))), 220)) % ((-(arr_3 [i_0])))));
        var_20 = var_15;

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {

            for (int i_2 = 3; i_2 < 8;i_2 += 1)
            {
                var_21 = ((!(((arr_2 [i_0]) > (arr_2 [i_0])))));
                var_22 = (max((min(228, (~var_8))), 65535));
            }
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                var_23 = var_9;
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_24 = var_16;
                            var_25 &= (((min(228, 13189848967603449648)) >> ((min((arr_17 [i_1] [i_1] [i_1] [1] [i_1]), (arr_17 [i_0] [i_1] [i_3] [6] [i_5]))))));
                        }
                    }
                }
                var_26 ^= ((min((max((arr_12 [i_0] [i_1] [i_0]), var_14)), ((max(28, 1))))));
                var_27 += var_16;
            }
            var_28 = (max((((!(var_11 + 28)))), ((((arr_4 [8] [i_1] [i_1]) == (arr_2 [i_0]))))));
            var_29 = var_9;
        }
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    {
                        var_30 = (max((((!(arr_7 [i_0] [i_0])))), 228));
                        var_31 += (arr_18 [i_0] [i_7] [1]);

                        for (int i_9 = 4; i_9 < 8;i_9 += 1)
                        {
                            var_32 = var_17;
                            var_33 = 28;
                        }
                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 10;i_10 += 1)
                        {
                            var_34 = ((-(((arr_4 [i_0] [i_6] [i_8]) - var_16))));
                            var_35 = 12442531629871973234;
                        }
                        for (int i_11 = 0; i_11 < 10;i_11 += 1)
                        {
                            var_36 ^= 1;
                            var_37 = (arr_23 [i_0] [i_0] [i_7] [i_7] [i_0] [i_0]);
                        }
                    }
                }
            }
            var_38 = arr_8 [i_0] [i_0] [i_0];
            var_39 = (arr_10 [i_0] [i_6] [5] [i_0]);
            var_40 = (min((~var_0), (min((191 % var_15), var_0))));
        }
        for (int i_12 = 0; i_12 < 10;i_12 += 1)
        {
            var_41 = ((-(min((arr_34 [i_0] [i_0] [i_0] [i_12] [i_12] [i_12] [i_12]), var_2))));

            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                var_42 &= ((~((~(arr_6 [i_0] [i_0] [i_0])))));

                /* vectorizable */
                for (int i_14 = 0; i_14 < 10;i_14 += 1)
                {
                    var_43 ^= var_2;
                    var_44 += -1;
                    var_45 &= ((~(((arr_20 [1] [3] [i_13] [i_14]) * var_7))));
                    var_46 = (max(var_46, var_8));

                    for (int i_15 = 1; i_15 < 1;i_15 += 1)
                    {
                        var_47 = (arr_29 [i_15] [i_15 - 1] [i_15] [i_15 - 1] [1]);
                        var_48 = var_3;
                        var_49 += ((~(arr_16 [i_15 - 1] [6] [i_15 - 1] [6])));
                    }
                    for (int i_16 = 0; i_16 < 1;i_16 += 1)
                    {
                        var_50 += (((arr_4 [i_0] [i_0] [i_0]) * (arr_16 [4] [0] [0] [i_0])));
                        var_51 = (~var_12);
                        var_52 = var_5;
                    }
                    for (int i_17 = 0; i_17 < 10;i_17 += 1)
                    {
                        var_53 = var_10;
                        var_54 = (arr_11 [i_0] [i_0] [i_14]);
                        var_55 = (arr_32 [i_0] [i_12] [i_0] [1] [5] [i_17]);
                        var_56 = (arr_2 [i_0]);
                        var_57 = (i_0 % 2 == 0) ? ((((arr_41 [i_0] [i_12] [i_13] [i_13] [i_0] [i_13]) << (((((arr_3 [i_0]) + 1955879267)) - 26))))) : ((((arr_41 [i_0] [i_12] [i_13] [i_13] [i_0] [i_13]) << (((((((arr_3 [i_0]) + 1955879267)) - 26)) - 1388000714)))));
                    }
                }
                for (int i_18 = 0; i_18 < 10;i_18 += 1) /* same iter space */
                {
                    var_58 = (arr_36 [i_18] [i_0] [i_0]);

                    for (int i_19 = 0; i_19 < 10;i_19 += 1)
                    {
                        var_59 = (((((arr_29 [i_0] [i_0] [i_0] [1] [1]) * ((~(arr_48 [i_0] [i_12] [i_13] [i_0] [i_13])))))) <= ((var_10 + (((((arr_9 [i_19] [i_0] [i_19]) > (arr_35 [i_0]))))))));
                        var_60 ^= var_12;
                        var_61 = arr_54 [i_0] [7] [i_13] [4] [i_19];
                        var_62 = (min(var_62, ((min((arr_50 [3] [i_12] [i_12] [i_12] [i_12]), ((((arr_54 [i_0] [1] [i_0] [i_18] [i_19]) << (((arr_5 [i_0] [8]) + 116))))))))));
                        var_63 = var_13;
                    }
                    for (int i_20 = 0; i_20 < 10;i_20 += 1)
                    {
                        var_64 = (var_13 >= var_1);
                        var_65 = (min(var_65, ((((max((arr_13 [i_0]), -12442531629871973234)) % (arr_27 [8]))))));
                        var_66 = 29;
                        var_67 = var_3;
                    }
                    var_68 &= (min(var_0, ((var_4 ^ (arr_45 [i_0])))));
                    var_69 = var_1;
                }
                /* vectorizable */
                for (int i_21 = 0; i_21 < 10;i_21 += 1) /* same iter space */
                {

                    for (int i_22 = 0; i_22 < 10;i_22 += 1)
                    {
                        var_70 = var_15;
                        var_71 = var_11;
                    }
                    for (int i_23 = 2; i_23 < 7;i_23 += 1)
                    {
                        var_72 = ((~(arr_26 [i_0] [i_12] [i_12] [i_21] [i_21])));
                        var_73 += ((~(arr_18 [i_0] [i_0] [7])));
                        var_74 = ((-(arr_64 [i_23 - 2] [i_23] [i_0] [i_23] [i_23])));
                        var_75 = ((var_0 >> (arr_67 [i_23] [i_23] [i_23 + 3] [i_23] [i_13])));
                    }
                    for (int i_24 = 1; i_24 < 7;i_24 += 1)
                    {
                        var_76 = (~var_8);
                        var_77 = var_15;
                        var_78 = 228;
                    }
                    var_79 = (-17694 > 1312293411);
                }
            }
            var_80 = (((arr_49 [i_12] [i_0] [2] [i_0] [2]) >> ((((max((arr_52 [i_12] [i_12] [i_12] [i_12] [i_0] [i_0]), var_13))) - 150))));
            var_81 = var_4;
        }
        var_82 += var_10;
    }
    for (int i_25 = 0; i_25 < 17;i_25 += 1)
    {
        var_83 += min(1, var_13);
        var_84 = (arr_72 [4]);

        /* vectorizable */
        for (int i_26 = 0; i_26 < 17;i_26 += 1)
        {
            var_85 = (max(var_85, var_5));
            var_86 ^= var_1;
            var_87 = (max(var_87, (((~(arr_74 [i_25]))))));
        }
        for (int i_27 = 0; i_27 < 17;i_27 += 1)
        {
            var_88 ^= (arr_77 [5] [5]);
            var_89 = var_3;
            /* LoopNest 2 */
            for (int i_28 = 0; i_28 < 17;i_28 += 1)
            {
                for (int i_29 = 0; i_29 < 1;i_29 += 1)
                {
                    {
                        var_90 = (arr_83 [4] [i_27] [i_27] [i_27] [i_27]);
                        var_91 = (max(var_91, (((var_13 << (((max((((arr_73 [1]) >> (65535 - 65525))), var_0)) - 15682387971249715574)))))));
                        var_92 = (max(var_5, (((!(!var_8))))));
                        var_93 = var_15;
                        var_94 = (arr_76 [i_29] [i_28] [i_27]);
                    }
                }
            }
            var_95 = ((~(((15 || ((max((arr_80 [i_25]), (arr_77 [i_27] [i_25])))))))));
        }
        for (int i_30 = 0; i_30 < 17;i_30 += 1)
        {
            var_96 = 1782262957061655187;
            var_97 = (min(var_0, var_8));
        }
        for (int i_31 = 3; i_31 < 14;i_31 += 1)
        {
            var_98 = (((((var_15 == (arr_77 [0] [i_31 - 2])))) << ((max((!var_13), var_4)))));
            var_99 = var_10;
            var_100 = (max(var_100, (-237255747 >= 0)));
            var_101 = (~((~(arr_76 [i_25] [i_25] [i_31]))));
            var_102 = (max(var_102, var_17));
        }
    }
    #pragma endscop
}
