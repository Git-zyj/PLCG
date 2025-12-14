/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126819
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = ((((var_1 & var_6) ^ var_6)));
        arr_3 [i_0] = ((min((((var_8 == (arr_1 [i_0])))), 589009157179347446)));
        arr_4 [11] [11] = 56595;
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_11 [i_0] [9] [i_0] = (min(17633274890148816015, 15703055892309113077));
                    var_10 = (arr_5 [i_0] [i_1] [i_2]);

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        arr_16 [i_0] [i_3] = var_9;
                        var_11 = (max((var_0 && 0), (((!88) || var_0))));
                    }
                    for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
                    {
                        var_12 = (((((min(30, (arr_5 [i_1 - 1] [i_1 - 1] [i_0]))) * (-48 >= var_8))) & (~var_9)));
                        var_13 = (-97 % var_9);
                        var_14 = (((min((((arr_8 [i_1] [i_2] [i_4]) ? var_2 : var_4)), var_5)) != (1549500477 < 1)));
                    }
                    for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
                    {
                        arr_23 [1] [i_0] [11] [i_0] = (max((((var_5 && var_7) - ((min(88, 29))))), (var_9 && var_4)));
                        arr_24 [i_0] [i_2] [i_2] = 2806943615406398991;
                    }
                }
            }
        }
        arr_25 [9] = ((var_9 ? ((min((arr_7 [i_0] [i_0] [i_0] [i_0]), ((0 ? -35 : 4699))))) : (min(-1, 2806943615406398988))));
    }
    for (int i_6 = 1; i_6 < 1;i_6 += 1) /* same iter space */
    {
        arr_29 [i_6] = (~((((133 && var_9) > var_6))));
        arr_30 [i_6] = (arr_28 [i_6]);
    }
    for (int i_7 = 1; i_7 < 1;i_7 += 1) /* same iter space */
    {
        arr_33 [i_7] = ((var_8 && (((var_4 - (arr_32 [i_7]))))));
        arr_34 [i_7] = (((((var_6 % (arr_27 [i_7])))) - ((var_8 ? (((min(1, 57)))) : var_1))));
        arr_35 [i_7] = var_3;
    }
    /* vectorizable */
    for (int i_8 = 2; i_8 < 9;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 0;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 12;i_10 += 1)
            {
                {
                    var_15 = 4013875871;
                    arr_43 [i_9] = (((~var_5) - (arr_39 [i_9 + 1])));
                    var_16 = ((~(~var_0)));
                }
            }
        }
        var_17 = var_3;

        for (int i_11 = 0; i_11 < 12;i_11 += 1)
        {

            for (int i_12 = 2; i_12 < 8;i_12 += 1)
            {
                var_18 = (~var_0);

                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    arr_55 [i_13] [i_13] [i_12 + 3] [i_12 + 3] = ((var_6 || ((((arr_21 [i_8 + 1] [i_11] [1] [i_13]) % 21)))));
                    arr_56 [i_8 + 3] [i_8] [i_8] [i_13] = 1;
                }
                arr_57 [i_8] = ((-(arr_42 [i_12] [5] [i_12] [i_12 + 1])));
                arr_58 [i_8 - 1] [5] [i_8 - 1] = (arr_12 [i_12 + 1] [i_8 + 3]);
            }
            for (int i_14 = 1; i_14 < 10;i_14 += 1)
            {
                arr_63 [i_8] [i_8 + 3] [i_8 + 3] [i_14] = (((3052394962435257037 && -3847) == ((((arr_41 [6] [6] [i_11] [i_11]) > var_9)))));
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 12;i_15 += 1)
                {
                    for (int i_16 = 2; i_16 < 11;i_16 += 1)
                    {
                        {
                            arr_70 [8] [4] [i_14 - 1] [i_14] [i_14] [8] [i_14] = (arr_69 [i_8 + 2] [i_8] [i_14 + 2] [i_14 + 1] [i_16 - 2]);
                            arr_71 [i_8 + 3] [i_8] [11] [i_8] [i_8 - 2] [i_8] = var_3;
                        }
                    }
                }
            }
            for (int i_17 = 0; i_17 < 12;i_17 += 1)
            {
                var_19 = (~var_7);
                arr_76 [i_8] [i_8 - 2] = ((~(arr_15 [i_8 + 2] [i_8 - 1] [i_8] [i_8 - 2])));
            }
            for (int i_18 = 1; i_18 < 9;i_18 += 1)
            {
                /* LoopNest 2 */
                for (int i_19 = 0; i_19 < 1;i_19 += 1)
                {
                    for (int i_20 = 0; i_20 < 12;i_20 += 1)
                    {
                        {
                            arr_86 [0] [i_11] [i_11] [8] [i_20] = ((-(421860851 + 64)));
                            arr_87 [i_8] [i_8] [i_8] [i_8] = (((arr_28 [i_8 - 2]) - -31234));
                            var_20 = ((-(arr_81 [i_8 + 2] [i_18 + 2] [i_18 + 3])));
                            var_21 = (~1);
                            arr_88 [i_20] [i_19] [i_18 - 1] [i_11] [i_8] = var_2;
                        }
                    }
                }
                arr_89 [i_11] [i_11] [i_11] [i_11] = (((arr_59 [11] [11] [i_8 + 1]) + (~var_8)));
            }
            arr_90 [i_8] [i_8] = (((((-(arr_36 [i_8])))) || (~1894556610)));
        }
        for (int i_21 = 3; i_21 < 11;i_21 += 1)
        {
            arr_93 [i_21] [i_21] = ((~(arr_38 [i_21 - 2] [i_8 + 3])));
            arr_94 [i_8] [i_8] [i_21] = ((((var_9 ? var_3 : var_0)) == (var_7 + var_0)));

            for (int i_22 = 2; i_22 < 9;i_22 += 1)
            {
                var_22 = (arr_0 [i_8 + 2]);
                var_23 = ((((10497 ? 3846 : 34530)) & -var_2));
            }
            for (int i_23 = 3; i_23 < 9;i_23 += 1)
            {
                arr_99 [i_21] [i_21] [i_21 - 2] [i_21] = (arr_46 [i_23 - 2]);
                arr_100 [i_21] = (19 < 107);
                arr_101 [i_21] [i_23] = 0;
            }
        }
    }

    for (int i_24 = 0; i_24 < 1;i_24 += 1)
    {
        arr_105 [i_24] = -774610791;
        arr_106 [i_24] = ((-1897324746 & (arr_102 [i_24] [i_24])));
        arr_107 [i_24] = (arr_104 [i_24]);
        arr_108 [i_24] = ((-(~1)));
    }
    var_24 = var_5;
    #pragma endscop
}
