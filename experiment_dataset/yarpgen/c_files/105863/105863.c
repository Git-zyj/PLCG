/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105863
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_18 -= ((var_7 ? (min((170 * var_8), (arr_4 [i_0] [12] [i_0]))) : ((((215 - var_4) + (((min(var_14, 1)))))))));
                var_19 = ((var_3 != ((var_10 ? (arr_4 [i_0] [16] [i_0]) : (arr_4 [i_1] [i_1] [i_1])))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        arr_9 [i_2] = (((((max(2644, -2058062802)))) ? (((((((490285176 ? var_13 : var_6)) + 2147483647)) << ((((((var_3 ? (arr_0 [i_2] [i_2]) : -8396)) + 17561)) - 31))))) : ((2644 ? (var_17 / var_7) : -2656))));
        arr_10 [i_2] = var_11;

        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            arr_15 [i_2] [i_3] = (((((-2644 != (arr_1 [i_2])))) * ((((73 == (arr_12 [i_2])))))));
            var_20 -= ((arr_4 [i_2] [i_2] [i_2]) ? (arr_1 [i_2]) : (((arr_1 [i_2]) ? (arr_4 [i_2] [i_3] [i_2]) : -649481842123424349)));
            var_21 = (min(var_21, (((-(arr_4 [i_2] [i_3] [i_2]))))));
            arr_16 [i_2] [1] = (((max(var_14, var_5))) ? (min((arr_8 [16]), (~var_15))) : ((min(((var_5 ? -8403 : var_8)), ((var_1 ? var_3 : (arr_14 [15] [15])))))));
        }
        /* vectorizable */
        for (int i_4 = 2; i_4 < 17;i_4 += 1)
        {
            arr_19 [i_4] [i_2] [i_4] = var_7;
            arr_20 [i_4] = (arr_7 [i_4 - 2]);

            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                var_22 &= (arr_18 [i_4 + 1] [2] [i_2]);
                arr_23 [i_4] = (arr_6 [i_2]);
            }
            for (int i_6 = 2; i_6 < 16;i_6 += 1)
            {
                arr_26 [i_4] [i_2] [i_6] = -var_0;
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        {
                            arr_33 [i_2] [i_4] [i_6] [i_4] = ((-(arr_25 [i_4 + 1] [i_4] [i_6 - 2])));
                            var_23 ^= var_2;
                        }
                    }
                }
            }
            for (int i_9 = 0; i_9 < 18;i_9 += 1)
            {
                arr_37 [17] [i_9] [i_4] = (((arr_29 [i_4]) < (arr_29 [i_4])));
                var_24 -= 126;
            }
            for (int i_10 = 2; i_10 < 15;i_10 += 1)
            {
                arr_41 [i_4] [9] = var_15;
                arr_42 [i_2] [3] [i_10 + 1] [i_4] = (arr_13 [2]);
                var_25 = var_10;
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 18;i_12 += 1)
                    {
                        {
                            var_26 = -32742;
                            arr_48 [i_4] [i_4 + 1] = (var_13 > -536870880);
                        }
                    }
                }
            }
        }
        for (int i_13 = 0; i_13 < 18;i_13 += 1)
        {
            var_27 = (arr_43 [i_2] [i_2] [i_2]);
            arr_51 [i_2] = (var_5 < 2654);
        }
        /* vectorizable */
        for (int i_14 = 0; i_14 < 18;i_14 += 1)
        {

            for (int i_15 = 0; i_15 < 18;i_15 += 1)
            {
                arr_60 [1] [i_14] [i_15] = -1;

                for (int i_16 = 0; i_16 < 18;i_16 += 1)
                {
                    var_28 = 1065088340;
                    var_29 = 1071644672;
                    arr_65 [i_15] [7] = -var_7;
                }
                for (int i_17 = 0; i_17 < 1;i_17 += 1)
                {
                    var_30 *= (49 / var_13);

                    for (int i_18 = 0; i_18 < 18;i_18 += 1)
                    {
                        var_31 = (arr_47 [i_2] [i_14] [i_15] [i_17] [i_2] [i_14] [i_2]);
                        var_32 = (~(~12123501199322741170));
                        arr_70 [7] [i_14] [i_17] [i_17] = var_8;
                        arr_71 [i_2] [i_14] [i_15] [i_17] [i_18] [i_14] = (((arr_6 [i_15]) != (arr_27 [i_2] [i_14])));
                        var_33 = ((150 & (arr_32 [i_2] [i_2] [i_15] [i_14] [i_17] [i_15] [i_14])));
                    }
                    var_34 = (min(var_34, 188));
                }
                arr_72 [i_2] [i_14] [i_14] = (((var_12 || 143) != 2656));
            }
            arr_73 [4] = 13819;
            /* LoopNest 2 */
            for (int i_19 = 1; i_19 < 16;i_19 += 1)
            {
                for (int i_20 = 0; i_20 < 18;i_20 += 1)
                {
                    {

                        for (int i_21 = 3; i_21 < 14;i_21 += 1)
                        {
                            arr_82 [i_2] [i_14] [i_2] [i_2] [i_2] = (((arr_29 [i_20]) - 3136502214392073621));
                            arr_83 [i_21] [i_20] [i_19] [i_19] [i_21 + 4] [1] = (var_3 ^ var_8);
                        }
                        for (int i_22 = 0; i_22 < 18;i_22 += 1)
                        {
                            var_35 += (var_9 | 8935299474691690078);
                            var_36 = (((arr_74 [i_2] [i_19 + 2]) == var_3));
                            arr_87 [i_2] [10] [10] [i_14] [i_19] [i_22] = var_4;
                        }
                        arr_88 [i_14] [i_14] [1] = var_7;
                        var_37 += (7634519926446046351 | 3136502214392073621);
                    }
                }
            }
        }
        arr_89 [i_2] = ((!((!(arr_56 [i_2] [i_2])))));
    }
    for (int i_23 = 1; i_23 < 14;i_23 += 1)
    {
        /* LoopNest 3 */
        for (int i_24 = 0; i_24 < 16;i_24 += 1)
        {
            for (int i_25 = 3; i_25 < 14;i_25 += 1)
            {
                for (int i_26 = 0; i_26 < 16;i_26 += 1)
                {
                    {
                        arr_99 [15] [i_23] [1] [i_26] [i_23] [i_23] = (-(min((min((arr_47 [i_23 + 2] [i_23 + 2] [i_23 + 2] [i_25] [i_23] [i_23 + 2] [i_23 + 2]), -5408)), ((min(0, var_0))))));
                        arr_100 [i_25] [i_26] [i_23] [i_24] [i_25] [i_25] = (arr_79 [i_23] [i_24] [i_25] [i_25]);
                    }
                }
            }
        }
        arr_101 [i_23] = (arr_32 [i_23] [i_23] [11] [i_23] [i_23] [i_23] [i_23 + 2]);
        var_38 = (min(var_38, (max((max(var_0, var_0)), (((var_15 <= (max(var_7, (arr_35 [i_23] [i_23] [i_23] [i_23]))))))))));
        arr_102 [i_23] = (max(((max((min(var_9, 1)), (arr_0 [i_23] [i_23])))), ((+((1 ? (-9223372036854775807 - 1) : -3136502214392073622))))));
    }
    #pragma endscop
}
