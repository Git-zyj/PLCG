/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177088
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_6;
    var_13 = var_11;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] = ((((-((max(var_5, var_10))))) == (var_6 == var_7)));
        arr_4 [i_0] = ((-18855 == (!var_11)));

        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            arr_7 [i_0] [12] = 65535;
            arr_8 [i_0] = ((~((max(var_0, var_10)))));
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {
                        arr_17 [i_0] = ((!(22797 == 65535)));

                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            arr_22 [i_3] [i_1] [1] [i_3] = (!15227479656200139272);
                            arr_23 [i_3] = (min(-44, ((-(var_9 - var_10)))));
                            arr_24 [i_0] [i_0] [i_1] [i_3] [0] [i_1] [i_4] = -22797;
                            arr_25 [i_3] [i_3] [i_2 + 1] [i_3] [14] = (min(45, (!-11280)));
                            arr_26 [i_0] [i_0] [i_0] [i_2] [i_2] [5] [i_0] = (((((-((max(var_3, var_3)))))) == (min(45, 7218807522867519611))));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            arr_29 [i_3] [i_1] [i_2] [i_0] [i_5] [i_5] [i_3] = (85 / 25752);
                            arr_30 [18] [1] [i_2 + 1] [i_3] [i_2 + 1] |= 7;
                        }

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            arr_34 [i_6] [i_3] [i_1] = ((((min(var_5, 23166))) == (-45 + var_5)));
                            arr_35 [i_0] [i_0] [22] [10] [10] [22] = (max((min(var_5, var_3)), (65535 == 3809017227725783546)));
                            arr_36 [i_0] [i_0] [1] [17] [i_3] [i_3] [i_6] = ((!((min(var_10, var_3)))));
                            arr_37 [9] [0] [i_0] = (((!16671) == ((min(44, (169 == var_10))))));
                        }
                        for (int i_7 = 4; i_7 < 22;i_7 += 1)
                        {
                            arr_40 [i_3] [i_1] [i_1] [i_1] [i_1] = (~-44);
                            arr_41 [i_0] [16] [i_3] [10] [0] [i_0] [16] = (max((max(45, var_2)), -var_10));
                            arr_42 [i_0] [11] [i_7] = (max((-59 == 1014), (-9223372036854775807 - 1)));
                            arr_43 [2] [2] [i_2] [i_2] [i_2] [i_2] [i_3] = (19794 == 169);
                            arr_44 [i_0] [0] [i_0] [i_0] [1] [i_3] [6] = (var_7 == -85);
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            arr_48 [i_0] [i_0] [i_1] [i_1] [i_3] [18] [i_8] = (~var_10);
                            arr_49 [i_0] [i_1] [i_2] [i_2] [i_0] = 84;
                            arr_50 [i_0] = 58;
                            arr_51 [i_0] [i_1] [i_1] [i_3] [16] [i_8] = var_3;
                        }
                        arr_52 [i_2] [i_0] [i_2] = ((!((max(var_7, 7668032332322180368)))));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_9 = 1; i_9 < 22;i_9 += 1)
        {
            arr_55 [16] = 62592;
            arr_56 [i_0] [i_9] = ((~var_1) == 1);
            arr_57 [i_0] [0] &= var_11;
            arr_58 [i_0] [22] [i_9] = var_11;
            arr_59 [i_0] [i_9] = var_9;
        }
        arr_60 [i_0] [i_0] = 1;
    }
    for (int i_10 = 4; i_10 < 15;i_10 += 1)
    {
        arr_64 [0] [i_10] &= 165;
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 16;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 14;i_12 += 1)
            {
                {
                    arr_69 [i_10] [i_10] = ((((max(var_0, var_9))) == var_8));
                    arr_70 [10] [i_10] [0] = -7668032332322180368;

                    /* vectorizable */
                    for (int i_13 = 1; i_13 < 1;i_13 += 1)
                    {

                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            arr_76 [i_10] [8] [i_10 - 4] [i_10] [1] [i_10] &= 45;
                            arr_77 [i_10] [i_12] [i_14] = var_10;
                            arr_78 [i_10] [i_11] [i_11] [i_13] [i_13] [i_14] = var_8;
                        }
                        arr_79 [i_11] = (~74);
                    }
                }
            }
        }
        arr_80 [i_10] = ((~(max((~var_3), (var_10 == -44)))));
    }
    for (int i_15 = 0; i_15 < 1;i_15 += 1)
    {
        arr_84 [i_15] [i_15] = -1;

        /* vectorizable */
        for (int i_16 = 0; i_16 < 10;i_16 += 1)
        {
            arr_89 [i_15] = -1;
            arr_90 [i_15] = var_0;
        }

        for (int i_17 = 0; i_17 < 10;i_17 += 1)
        {
            arr_94 [8] [i_17] [8] = ((!(!0)));

            for (int i_18 = 0; i_18 < 10;i_18 += 1)
            {
                arr_97 [i_17] [3] [i_18] [8] = var_3;
                arr_98 [i_15] [i_17] [i_18] = (0 == var_9);
            }
            for (int i_19 = 0; i_19 < 10;i_19 += 1)
            {
                arr_101 [i_15] [4] [0] [i_19] = ((((min((-32767 - 1), var_0))) == (!var_10)));
                arr_102 [0] [i_17] [0] = ((-40574 == ((~(~var_10)))));
            }
            arr_103 [0] [i_17] = 33;
        }
        for (int i_20 = 0; i_20 < 10;i_20 += 1)
        {
            /* LoopNest 3 */
            for (int i_21 = 1; i_21 < 8;i_21 += 1)
            {
                for (int i_22 = 0; i_22 < 10;i_22 += 1)
                {
                    for (int i_23 = 0; i_23 < 10;i_23 += 1)
                    {
                        {
                            arr_114 [i_15] [4] [1] [i_21] [i_21 - 1] [i_22] [i_23] = (min(165, 85));
                            arr_115 [i_15] [7] [i_20] [4] [6] [7] &= (!var_11);
                            arr_116 [i_15] [i_15] [1] [i_15] [i_15] [1] = ((var_5 == ((((-32767 - 1) == 32767)))));
                            arr_117 [i_15] [i_15] [9] [5] [8] = var_10;
                        }
                    }
                }
            }
            arr_118 [i_15] [i_15] [i_15] = min(42738, (var_6 == var_2));
            arr_119 [i_15] [2] = var_0;
        }
        arr_120 [i_15] = var_6;
    }
    var_14 = (min((((!26) == var_11)), (var_0 == var_0)));
    #pragma endscop
}
