/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115322
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((-var_9 ? ((var_1 ? ((var_3 ? var_7 : var_3)) : var_7)) : ((-(~var_7)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_2] [i_1] [i_0] = (((arr_0 [i_1]) != var_4));
                    arr_8 [i_0] [4] [i_1] [i_2] = ((-(((3612641318 / 4) ? 3612641342 : 682325953))));

                    for (int i_3 = 2; i_3 < 8;i_3 += 1)
                    {

                        for (int i_4 = 2; i_4 < 8;i_4 += 1)
                        {
                            arr_15 [i_0] [i_1] [i_2] [i_3 - 1] [i_3] [i_4] [i_4] = ((-(var_8 != var_5)));
                            arr_16 [i_3] [i_1] [i_2] [i_3] [i_3] = ((-((-(arr_9 [i_4 - 1] [i_3 + 1] [1] [i_3] [i_2] [i_2])))));
                        }
                        for (int i_5 = 1; i_5 < 8;i_5 += 1)
                        {
                            arr_21 [i_0] [i_1] [i_1] [1] [i_3] [i_3] [i_5] = ((((((var_1 >> (var_3 - 1874995729))))) / (min((var_6 | var_10), (var_11 & var_3)))));
                            arr_22 [i_0] [i_0] [i_0] [i_0] [i_3] [i_0] [3] = (arr_17 [i_3] [i_5 + 2] [i_5 + 2] [i_3 + 2] [i_3] [i_3]);
                            arr_23 [i_5] [i_3] [i_3] [i_0] = var_11;
                        }
                        for (int i_6 = 3; i_6 < 7;i_6 += 1)
                        {
                            arr_28 [i_3] = (((((min(var_4, (arr_13 [i_1] [i_2]))) & (((-(arr_4 [i_6 - 1])))))) - (((-(arr_12 [i_3] [i_2] [i_3]))))));
                            arr_29 [i_6] [i_3] [i_3] [i_1] [i_0] = (min(((var_8 ? (29 == 29) : (arr_10 [i_0] [i_1] [i_6 - 3]))), (((max((arr_13 [i_0] [i_0]), (arr_12 [i_3] [i_3 - 2] [i_3])))))));
                            arr_30 [i_3] [i_3 - 1] [i_0] [6] [i_3] = (min((((arr_1 [i_1]) | (~var_0))), (~var_0)));
                            arr_31 [i_0] [i_1] [i_0] [i_3] [i_6] = ((-var_8 ? ((max((arr_3 [i_6 + 2]), var_9))) : (~var_8)));
                        }
                        for (int i_7 = 2; i_7 < 7;i_7 += 1)
                        {
                            arr_34 [i_7] [i_3] [i_2] [i_1] [i_7] = ((-((-((var_3 ? var_10 : var_5))))));
                            arr_35 [i_3] [i_7] = ((-(((var_4 * var_7) / ((var_0 ? var_11 : var_4))))));
                            arr_36 [i_7] [i_7] [i_3] [i_3] [i_2] [i_1] [i_0] = ((-((~((-32760 ? 29 : -2984))))));
                        }
                        arr_37 [i_0] [i_3] [i_1] [i_1] [i_2] [i_2] = ((max((((arr_32 [i_3] [i_1] [i_1] [i_3] [i_0] [i_3]) | (arr_19 [i_3] [i_1] [i_3]))), var_10)) + var_11);
                        arr_38 [i_3] [2] [i_1] [i_3] = ((-(max((min(var_3, var_0)), var_1))));
                    }
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        arr_43 [i_0] [i_1] [i_1] [i_0] = ((((min(((var_9 ? (arr_4 [i_1]) : (arr_14 [i_8] [i_8] [5] [i_1] [i_0]))), (~var_8)))) | ((((min((arr_42 [i_0] [i_1] [i_2] [i_8]), (arr_24 [i_1] [i_2] [i_1] [i_1])))) ? ((min((arr_12 [i_0] [i_2] [i_0]), var_8))) : ((var_6 ? var_4 : (arr_33 [i_0] [i_1] [6] [i_2] [i_8])))))));
                        arr_44 [i_0] [i_1] [i_2] [i_8] [i_8] [i_8] = (((((arr_24 [i_8] [i_1] [i_2] [0]) ? (arr_32 [i_0] [i_8] [i_2] [i_2] [i_1] [i_0]) : (arr_24 [i_0] [i_1] [i_2] [i_0]))) / ((((~var_2) ? (~var_10) : ((var_6 ? var_8 : var_0)))))));
                        arr_45 [i_8] [i_1] = ((((~var_6) != (((((arr_6 [i_8] [i_2] [i_0]) < var_2)))))) ? ((((var_11 != (arr_9 [i_8] [i_0] [i_1] [i_1] [i_0] [i_0]))) ? (max((arr_32 [i_8] [i_2] [i_8] [i_8] [i_1] [i_8]), var_2)) : (((var_2 / (arr_17 [i_1] [i_0] [0] [i_1] [0] [i_1])))))) : (((var_2 ? (max(var_5, var_10)) : (((74 ? 2660389846 : 5437)))))));
                        arr_46 [i_8] [i_1] [i_2] [i_1] [i_0] = ((var_0 ? ((~(arr_20 [i_1]))) : var_2));
                    }
                    for (int i_9 = 2; i_9 < 8;i_9 += 1)
                    {

                        for (int i_10 = 0; i_10 < 10;i_10 += 1)
                        {
                            arr_52 [i_0] [i_1] [i_0] [7] [i_9] [i_10] = ((-((var_11 >> (var_11 - 10571674940693142714)))));
                            arr_53 [i_0] [5] [4] [i_2] [i_9] [i_9] [i_10] |= (arr_14 [i_0] [i_0] [i_2] [i_0] [i_0]);
                            arr_54 [i_10] = (max(var_2, (max((var_4 & var_3), (arr_20 [i_1])))));
                            arr_55 [3] [i_2] [i_2] [i_1] [i_0] = (min((((((var_1 ? (arr_18 [i_0] [i_0]) : (arr_24 [i_0] [i_1] [i_0] [i_10]))) > ((((arr_40 [i_0] [i_1] [1] [i_9 + 1] [i_10]) >> (var_2 - 213))))))), var_4));
                        }
                        arr_56 [i_0] [i_1] [i_2] [i_9] [i_9] [i_9] = (((((~(min((arr_41 [i_0] [i_0] [i_2] [3]), (arr_50 [i_9] [i_2] [i_2] [i_1] [i_0])))))) & (~var_6)));

                        /* vectorizable */
                        for (int i_11 = 2; i_11 < 6;i_11 += 1)
                        {
                            arr_61 [i_11 + 2] [i_2] [i_1] [1] = var_1;
                            arr_62 [i_0] [i_1] [i_2] [i_0] [i_1] = ((-(arr_5 [i_11 - 2] [i_9 + 1] [0] [i_9])));
                        }
                        arr_63 [i_9 - 1] [i_9] [i_2] [i_0] [i_0] |= ((var_0 != (max(-150, ((var_3 ? (arr_50 [4] [i_1] [i_1] [4] [4]) : var_8))))));
                    }
                }
            }
        }
    }
    var_13 = var_2;

    for (int i_12 = 0; i_12 < 16;i_12 += 1)
    {
        arr_67 [i_12] [6] |= (min((min(-var_7, (max((arr_64 [i_12]), var_5)))), -var_6));
        arr_68 [i_12] = min(var_7, var_0);
    }
    for (int i_13 = 2; i_13 < 18;i_13 += 1) /* same iter space */
    {
        arr_71 [i_13] = (((max((min(var_9, var_7)), -var_2))) ? (((((-(arr_69 [i_13]))) ^ ((var_10 ? (arr_70 [i_13]) : var_9))))) : ((((min(var_9, (arr_70 [i_13])))) ? ((min(var_10, var_3))) : ((var_8 ? var_6 : (arr_69 [i_13]))))));
        arr_72 [15] = ((-(var_3 && -var_5)));
    }
    for (int i_14 = 2; i_14 < 18;i_14 += 1) /* same iter space */
    {
        arr_75 [i_14] = (-(((var_9 - var_0) & ((var_11 >> (var_6 - 2312553539122056551))))));
        arr_76 [i_14] [i_14] = (arr_70 [i_14]);
        arr_77 [i_14] [i_14] = ((~(((arr_74 [i_14 - 1]) ? (arr_74 [i_14 + 1]) : var_11))));
    }
    #pragma endscop
}
