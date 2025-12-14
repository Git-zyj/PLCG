/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111530
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_19 = (arr_0 [i_0] [i_0]);

        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
            {
                arr_9 [i_0] [i_2] [i_2] = var_9;
                arr_10 [i_0] [i_0] [i_2] = 31313;
                arr_11 [i_2] [i_1] [i_2] = 7;
                arr_12 [i_0] [i_2] [i_2] = (max((arr_7 [i_0] [i_0] [i_0] [i_0]), ((max(21, 7)))));
            }
            for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
            {

                for (int i_4 = 3; i_4 < 16;i_4 += 1)
                {
                    arr_17 [i_0] [i_0] [i_3] [i_3] [i_3] = 32767;
                    arr_18 [i_0] [i_1 - 1] [i_1 - 1] [i_3] [i_0] [3] = 127;
                    arr_19 [i_4] [i_4] [i_3] [i_4] = min(((~(726337230 / var_9))), ((((arr_5 [3] [i_0] [3]) != ((max(var_3, var_3)))))));
                }
                for (int i_5 = 3; i_5 < 17;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                    {
                        arr_26 [i_0] [i_3] [10] [i_0] [i_0] [i_0] = (((min(var_3, (arr_7 [i_0] [i_0] [i_0] [i_0]))) <= (arr_23 [i_5 + 1] [i_5 - 2] [i_3] [i_5 + 1])));
                        var_20 -= 127;
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                    {
                        arr_29 [i_7] [14] [i_3] [i_1] [i_0] = (arr_28 [16] [i_1] [i_1] [i_1] [18]);
                        var_21 -= (((((((arr_25 [i_0] [i_3] [i_5] [i_0] [i_1] [i_0]) ? 0 : 1))) ? ((200 ? var_12 : 32640)) : 32640)));
                        arr_30 [i_0] [i_3] [i_0] [i_0] [i_0] = (((arr_6 [i_5 - 2] [i_5 - 2]) ? ((min((arr_6 [i_5 - 3] [i_5]), var_13))) : var_2));
                        arr_31 [i_3] [i_3] [i_3] = (!255);
                        arr_32 [i_7] [i_3] [i_1 + 1] = (arr_25 [i_5 - 2] [i_5 - 1] [i_5 + 2] [i_5 - 1] [i_5 - 3] [i_5 - 2]);
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                    {
                        var_22 ^= (((0 ? (min((arr_20 [i_0] [i_0] [i_0]), 140737421246464)) : var_15)));
                        arr_35 [i_0] [i_3] [i_8] [i_5] [i_8] = (arr_23 [i_0] [1] [i_3] [1]);
                        arr_36 [i_3] [i_3] = (arr_15 [i_0] [1] [i_0] [i_5] [i_3] [i_3]);
                        var_23 = 5198;
                        arr_37 [i_3] [0] [i_5] [i_1] [i_1] [14] [i_3] = (min((max(18536, 1253280352627249474)), (!23)));
                    }
                    arr_38 [i_3] [i_1] [i_3] [i_3] [i_0] = (~var_1);
                }
                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    arr_43 [i_0] [i_0] [i_3] [i_3] = ((21578 & ((-114 ? var_13 : 64))));
                    arr_44 [16] [i_3] [16] [i_9] = ((!((max((~var_8), -896956254)))));
                    arr_45 [i_3] [i_1 - 1] [i_1 - 1] [i_3] [i_9] = ((((max(19, (max((arr_34 [i_0] [i_0] [i_0] [i_0] [i_0]), var_16))))) ? (arr_42 [i_3] [i_1 + 1] [i_3] [i_9]) : (arr_16 [i_3] [i_3])));
                }
                arr_46 [i_3] [i_3] [i_3] [i_0] = (~-17303);
            }
            arr_47 [i_0] [i_1 - 1] = 2016;
        }
        for (int i_10 = 0; i_10 < 19;i_10 += 1)
        {
            var_24 *= 17440160518366194676;
            arr_50 [i_0] [i_0] = var_11;
        }
        for (int i_11 = 0; i_11 < 19;i_11 += 1)
        {
            arr_54 [i_0] = ((var_2 && (arr_20 [i_0] [i_11] [i_11])));

            for (int i_12 = 1; i_12 < 16;i_12 += 1) /* same iter space */
            {
                arr_58 [1] = ((((max((arr_25 [i_0] [i_0] [i_0] [i_11] [i_11] [i_12 + 3]), var_0))) ? ((((!var_15) ? var_16 : ((min(107, var_0)))))) : (max((~var_10), var_6))));
                arr_59 [i_0] [i_0] = ((~(~var_18)));
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 19;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 19;i_14 += 1)
                    {
                        {
                            arr_64 [i_14] [i_14] = var_16;
                            var_25 = (min(var_25, (((max(var_10, 4438109314242355969)) == var_7))));
                            arr_65 [i_0] [i_14] = ((((arr_34 [i_0] [i_12 + 3] [i_12] [i_11] [i_14]) + (arr_34 [i_13] [i_12 - 1] [i_12] [i_13] [i_13]))));
                        }
                    }
                }
            }
            for (int i_15 = 1; i_15 < 16;i_15 += 1) /* same iter space */
            {
                var_26 = ((~((((((arr_39 [i_0] [i_0] [12] [i_0] [i_15 + 2]) < var_7)) || (((-1611624924 ? 1 : 1))))))));
                arr_68 [2] [i_11] [i_15] = (min((!36717), ((~(arr_13 [i_11] [i_15 + 1] [i_11])))));
                arr_69 [i_0] [i_0] [i_15] [i_0] = ((((max((arr_66 [i_15 - 1] [i_15 + 1]), (arr_66 [i_15 - 1] [i_15 + 1])))) << ((((-(arr_16 [i_15 + 3] [i_0]))) + 1641756251183642422))));
            }
        }
        for (int i_16 = 0; i_16 < 19;i_16 += 1)
        {
            arr_72 [i_16] [i_16] = ((((var_1 ? 127 : var_14))));
            var_27 = (min(var_27, 13));
            arr_73 [i_16] [i_16] = 496;
        }
    }
    for (int i_17 = 0; i_17 < 10;i_17 += 1)
    {
        arr_76 [i_17] [i_17] = (max((max((arr_24 [i_17] [i_17] [14] [i_17]), -18537)), var_3));
        var_28 = var_11;

        for (int i_18 = 2; i_18 < 8;i_18 += 1)
        {
            arr_79 [i_18 + 1] [i_17] [i_17] = (max(1, 0));
            arr_80 [i_17] [i_17] = ((-((max((arr_14 [i_18] [i_17] [i_17] [i_18 - 1]), (arr_14 [i_18] [i_17] [i_17] [i_18 + 1]))))));
        }
    }
    for (int i_19 = 0; i_19 < 1;i_19 += 1)
    {
        arr_85 [i_19] [i_19] = (min((~17193463721082302142), (~1)));
        /* LoopNest 3 */
        for (int i_20 = 0; i_20 < 24;i_20 += 1)
        {
            for (int i_21 = 0; i_21 < 24;i_21 += 1)
            {
                for (int i_22 = 3; i_22 < 22;i_22 += 1)
                {
                    {
                        arr_95 [i_19] = (max(72057044282114048, -66));
                        var_29 = var_8;
                        var_30 = ((var_2 | (arr_91 [i_22 + 1] [i_22 + 2] [i_22 - 1] [i_22 - 2])));
                        arr_96 [i_19] [i_20] [i_20] [i_21] [i_19] [1] = (arr_81 [i_19]);
                    }
                }
            }
        }
    }
    var_31 = (min(var_2, ((~(-1216305995040513818 & var_5)))));
    var_32 = ((min(var_17, (max(var_3, var_2)))));
    var_33 = var_7;
    #pragma endscop
}
