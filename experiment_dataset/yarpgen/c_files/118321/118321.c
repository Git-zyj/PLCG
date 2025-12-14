/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118321
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            var_19 ^= var_9;
            arr_4 [i_1] = ((((((var_1 ? -6051212725027721276 : 4063190266)) ? var_18 : 231777018))));
            var_20 = (max(var_20, ((!((min(((-(arr_3 [i_0] [i_0] [6]))), ((255 ? (arr_3 [10] [10] [i_1 - 1]) : (arr_0 [i_0]))))))))));
        }
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            arr_7 [i_2] = (min((((var_12 || (arr_3 [i_2] [i_0] [i_0])))), 43868));
            var_21 = (var_5 + (var_12 - var_13));
        }
        arr_8 [2] = (((((~(arr_2 [i_0] [i_0] [i_0])))) ? ((-((0 ? 18446744073709551595 : 44942)))) : -var_5));
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 18;i_3 += 1)
    {
        var_22 = (var_10 + var_12);
        var_23 = (min(var_23, (((var_9 + ((-(arr_9 [i_3]))))))));
        var_24 = (max(var_24, (arr_9 [i_3])));
        var_25 = (((arr_9 [i_3 + 3]) + (arr_10 [i_3] [i_3])));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        var_26 = (max(var_26, (8909803777502666515 < var_18)));
        var_27 = ((-2147483630 ^ 27576) && (((18446744073709551609 ? var_1 : 45020))));

        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    {
                        var_28 = 109;
                        var_29 = (var_2 < var_5);
                        var_30 = var_0;
                    }
                }
            }
            var_31 = (max(var_31, (arr_3 [i_4] [i_4] [i_4])));
            var_32 = (((arr_17 [i_4] [i_4] [i_4] [i_5]) ? -2147483642 : (arr_17 [i_4] [i_5] [i_4] [6])));
            var_33 = -0;
            arr_23 [i_4] [i_4] [i_4] = (((((arr_0 [7]) ? 7 : (arr_17 [i_4] [i_4] [i_4] [4]))) - ((((arr_5 [i_4]) + var_1)))));
        }
        arr_24 [i_4] [i_4] = (3377573752548427052 + 4294967295);
    }
    var_34 *= var_14;

    for (int i_8 = 1; i_8 < 22;i_8 += 1)
    {
        var_35 = (max((((arr_26 [i_8 + 1]) ? var_10 : -837615476)), ((max(109, var_18)))));
        var_36 += (max(var_13, 2147483630));
        var_37 = (min(((min(var_3, 65511))), (arr_27 [i_8])));
        arr_28 [i_8] = 28;
    }
    for (int i_9 = 1; i_9 < 15;i_9 += 1)
    {
        var_38 ^= ((var_13 < ((var_10 + (arr_31 [i_9 + 2])))));
        arr_32 [i_9] [i_9] = var_14;
    }
    for (int i_10 = 0; i_10 < 12;i_10 += 1)
    {
        var_39 = (arr_29 [16] [16]);

        /* vectorizable */
        for (int i_11 = 0; i_11 < 12;i_11 += 1)
        {
            var_40 = (max(var_40, var_5));
            var_41 ^= 1;
            var_42 = ((var_8 ? (((8 ? var_12 : -20))) : var_2));
            arr_37 [i_10] [11] = ((-(((var_7 || (arr_36 [i_10] [i_11]))))));
        }
        for (int i_12 = 0; i_12 < 12;i_12 += 1)
        {
            var_43 = (max(-20, 50261));
            var_44 = (max((((arr_5 [i_10]) ? var_0 : (arr_40 [i_10] [i_10]))), ((~(arr_5 [i_10])))));
            var_45 = (min(((var_13 ? var_2 : 57985)), (6 || -1256900987)));
            var_46 = (min(var_46, (((var_10 ? (((-var_12 + ((((arr_38 [4] [0] [i_12]) >= 1)))))) : -2147483642)))));
            var_47 = (1 < 0);
        }
    }
    for (int i_13 = 4; i_13 < 18;i_13 += 1)
    {
        arr_44 [i_13] = (((((var_10 ? var_5 : (~var_17)))) ? var_15 : (arr_25 [i_13 - 3])));
        var_48 = (arr_26 [i_13]);
        arr_45 [i_13] = var_17;
        var_49 = ((~(((((var_7 ? var_15 : var_0))) ? -var_15 : (arr_10 [i_13] [i_13])))));
    }

    for (int i_14 = 0; i_14 < 21;i_14 += 1)
    {
        var_50 = (max(var_6, (arr_48 [i_14])));

        for (int i_15 = 1; i_15 < 18;i_15 += 1)
        {
            var_51 = 21668;
            var_52 = (max(var_52, var_14));
            var_53 = var_13;
        }
    }
    for (int i_16 = 0; i_16 < 15;i_16 += 1) /* same iter space */
    {
        var_54 -= (min(var_11, 2));
        var_55 = (max((((var_2 + -3062878478603905112) & 0)), (arr_25 [i_16])));
    }
    /* vectorizable */
    for (int i_17 = 0; i_17 < 15;i_17 += 1) /* same iter space */
    {
        var_56 = (((arr_53 [i_17]) ? (((arr_54 [i_17] [i_17]) & (arr_30 [i_17]))) : -1256247140835395951));
        var_57 = (min(var_57, ((((-106 ? var_18 : -315105914))))));
        arr_57 [i_17] [0] &= ((var_13 ^ (arr_55 [i_17])));

        for (int i_18 = 0; i_18 < 15;i_18 += 1)
        {

            for (int i_19 = 0; i_19 < 15;i_19 += 1)
            {
                var_58 = (!var_5);
                arr_63 [i_17] [2] [i_18] = ((var_13 ? var_11 : var_13));

                for (int i_20 = 0; i_20 < 15;i_20 += 1)
                {
                    arr_66 [i_17] = (!(!var_5));
                    arr_67 [i_19] [i_17] [i_17] [i_17] = (arr_52 [i_17]);

                    for (int i_21 = 1; i_21 < 12;i_21 += 1)
                    {
                        var_59 -= var_4;
                        arr_71 [5] [i_18] [i_17] [i_18] [i_17] = (var_0 <= var_6);
                        var_60 = ((0 ? (arr_68 [i_17] [i_18] [i_18] [i_19] [i_18] [i_20] [i_21 + 1]) : (arr_68 [i_21] [i_18] [i_20] [i_20] [i_21] [i_18] [i_21 + 2])));
                    }
                }
                for (int i_22 = 1; i_22 < 13;i_22 += 1)
                {
                    var_61 = (max(var_61, var_3));
                    var_62 = (min(var_62, (1 - -7062825297210804424)));
                    var_63 = (arr_72 [3]);
                    var_64 += ((~(arr_72 [i_22 - 1])));
                }
                arr_75 [i_17] = (~44387);
                var_65 = (arr_31 [12]);
            }
            var_66 = (var_10 <= var_8);
            var_67 = (min(var_67, (((var_10 * var_15) ? (arr_60 [i_17]) : (var_6 - var_3)))));
        }
        var_68 = (min(var_68, 65511));
    }
    for (int i_23 = 0; i_23 < 15;i_23 += 1) /* same iter space */
    {
        var_69 = (var_18 & var_9);
        var_70 = (max(var_70, (((8220221716713279185 ? (arr_30 [1]) : var_7)))));
    }
    #pragma endscop
}
