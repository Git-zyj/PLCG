/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153816
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((-(87 - var_0))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_21 = var_19;
        var_22 = -486982126515122019;
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {

        for (int i_2 = 2; i_2 < 12;i_2 += 1) /* same iter space */
        {
            var_23 -= var_12;
            arr_9 [i_1] [i_2] = (arr_8 [9] [12] [i_2]);
            var_24 = ((var_10 ? (~-1) : (((max(var_1, 2147483647)) * (arr_1 [i_2])))));

            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                arr_12 [i_1] [i_3] [1] &= (max(((~(arr_0 [i_1 + 4]))), (max((arr_0 [i_1 + 4]), 19))));
                arr_13 [i_3 - 1] [6] = (~var_14);
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 13;i_5 += 1)
                    {
                        {
                            var_25 = ((0 == (((((-11 ? 228 : 1))) ? ((min(var_9, 3))) : (arr_5 [i_1])))));
                            var_26 = 4095;
                            arr_18 [i_5] [i_4] [i_1] [i_2] [i_1] = var_14;
                        }
                    }
                }
                var_27 += ((((((arr_3 [i_2 + 2] [1]) ? (arr_3 [i_2] [i_2]) : (arr_15 [i_2 + 1] [i_2] [i_2 - 1] [i_2 + 2])))) ? (((-32762 >= (arr_3 [i_2] [i_2])))) : ((max((arr_3 [i_2] [i_2]), 1)))));
            }
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                arr_21 [i_1] [i_2] [i_6] [i_6] = min((arr_4 [i_1 + 4]), ((var_17 ? (arr_4 [i_1 + 2]) : 0)));
                arr_22 [i_6] = (((((((var_6 ? -2007500105 : var_7))) && var_1)) ? ((((arr_7 [2]) >= (((var_9 <= (arr_19 [i_2] [i_2] [i_6]))))))) : var_4));
            }
            for (int i_7 = 1; i_7 < 13;i_7 += 1)
            {

                /* vectorizable */
                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    var_28 &= (~1);
                    var_29 = ((1909998993 * (arr_28 [i_2 + 1] [i_2] [i_8] [i_8] [i_7 + 1] [i_2])));
                }
                var_30 = (min(var_30, (((3638039163 ? 3638039174 : 2047)))));
            }
        }
        for (int i_9 = 2; i_9 < 12;i_9 += 1) /* same iter space */
        {
            arr_31 [i_1] [i_9 + 2] [i_1] = ((~(arr_4 [i_1])));
            arr_32 [i_1] &= var_12;
            arr_33 [i_9 - 1] [i_1] = (~0);
        }
        var_31 *= (((!-8665) + (min(187, 2294755256))));
        var_32 *= ((!((((((1 ? -9068 : 14693775))) & (arr_17 [i_1 - 1] [i_1] [i_1] [i_1] [i_1]))))));
        var_33 = ((1 == (max((1 != 84), (127 | 4503598553628672)))));

        for (int i_10 = 0; i_10 < 14;i_10 += 1)
        {

            for (int i_11 = 4; i_11 < 13;i_11 += 1)
            {
                var_34 -= 4096;
                var_35 = 1;
            }
            for (int i_12 = 2; i_12 < 13;i_12 += 1)
            {
                var_36 -= (max((max(((min(1, 14693794))), (var_10 | var_12))), (((((max(11, var_19))) + var_7)))));
                var_37 -= var_15;
            }
            /* vectorizable */
            for (int i_13 = 1; i_13 < 11;i_13 += 1)
            {
                var_38 *= 8191;
                var_39 = (((var_9 >= 0) | ((var_12 ? (arr_40 [i_10]) : (arr_34 [i_1 + 4])))));
            }
            var_40 = 16777215;
            var_41 += 0;
        }
    }
    for (int i_14 = 0; i_14 < 20;i_14 += 1)
    {

        for (int i_15 = 2; i_15 < 19;i_15 += 1) /* same iter space */
        {
            var_42 = ((-(((((min(7, var_18))) == ((3 ? 129 : 0)))))));
            var_43 ^= 1;
        }
        for (int i_16 = 2; i_16 < 19;i_16 += 1) /* same iter space */
        {

            for (int i_17 = 0; i_17 < 20;i_17 += 1)
            {
                var_44 = ((arr_48 [i_16 - 1] [i_14] [i_14]) | 8);
                arr_55 [i_17] [8] [i_14] = (max((((-(arr_51 [i_17] [i_16] [3])))), ((var_4 - (arr_54 [i_16] [i_16] [i_16] [i_14])))));
            }
            for (int i_18 = 0; i_18 < 20;i_18 += 1)
            {
                arr_58 [i_14] [i_14] [i_18] = (((~1) ? var_10 : var_7));
                var_45 = (((var_0 == var_13) >= (-var_11 + var_4)));
                arr_59 [1] = 51787;
                arr_60 [i_14] [i_14] [7] = arr_50 [i_14] [i_14];
            }
            for (int i_19 = 0; i_19 < 20;i_19 += 1)
            {

                for (int i_20 = 0; i_20 < 20;i_20 += 1)
                {
                    var_46 = 1;
                    var_47 = ((((~(arr_57 [i_16 - 2] [i_16 - 2] [i_16 - 2] [i_16 - 2]))) ^ (((((arr_49 [i_20] [i_19]) ? 8191 : var_0))))));
                }
                arr_66 [i_16 - 1] = ((+(((!((max((arr_44 [i_19]), var_10))))))));
            }
            var_48 = var_11;
            var_49 = (5400576441182316864 ? ((((((65515 ? (arr_54 [i_16] [i_16] [i_14] [i_14]) : 18446744073709551615))) ? (((var_12 >= (arr_57 [18] [i_14] [i_14] [i_16])))) : -1))) : 4503598553628658);
        }
        var_50 = ((-(arr_50 [i_14] [i_14])));
        /* LoopNest 2 */
        for (int i_21 = 0; i_21 < 1;i_21 += 1)
        {
            for (int i_22 = 0; i_22 < 20;i_22 += 1)
            {
                {

                    for (int i_23 = 0; i_23 < 1;i_23 += 1)
                    {
                        var_51 = (((arr_64 [i_14] [9] [i_22] [i_23]) ? (max(var_12, (((1 ? var_13 : 1536))))) : (((892479168297871556 ? -1 : 63977)))));
                        var_52 += var_9;
                    }
                    var_53 = var_4;
                    arr_76 [i_21] = ((+(((-14609 * var_10) ? var_4 : ((max(var_0, var_16)))))));
                }
            }
        }
    }
    #pragma endscop
}
