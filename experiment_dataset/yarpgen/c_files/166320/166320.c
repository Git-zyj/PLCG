/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166320
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((var_10 - (((var_9 ? var_6 : var_2))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [0] = 3713;

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {

            for (int i_2 = 1; i_2 < 19;i_2 += 1) /* same iter space */
            {

                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    arr_14 [14] [i_2 + 3] [i_2 + 1] [i_1] [14] &= var_1;
                    arr_15 [i_0] = (!66);
                    arr_16 [i_0] [i_1] [i_0] [i_3] = var_1;
                    arr_17 [18] &= ((~((~(arr_9 [11] [i_0] [i_0])))));
                }
                arr_18 [1] [1] = (arr_5 [i_2 - 1] [i_2] [i_2 + 2]);

                for (int i_4 = 2; i_4 < 21;i_4 += 1)
                {
                    arr_21 [i_0] [i_2 + 1] [i_2] [15] [i_0] = (((18785 * (arr_8 [i_0] [i_0] [i_2]))));
                    arr_22 [i_4] [i_4] [i_1] [i_4] [i_0] = (((var_0 & var_6) <= (!var_5)));
                }
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    arr_25 [i_0] [i_0] [18] = ((var_5 ? var_3 : var_7));
                    arr_26 [2] [i_1] [i_1] [i_5] [i_1] [i_5] = 181;
                    arr_27 [i_0] [i_1] [1] [8] = (arr_0 [i_0]);
                }
                arr_28 [12] = (((((1 ? 0 : 180))) ? (!-269658501) : 66));
            }
            for (int i_6 = 1; i_6 < 19;i_6 += 1) /* same iter space */
            {
                arr_31 [i_0] [i_0] [i_0] [0] = (((arr_11 [i_0] [i_1] [i_6 + 1] [i_0] [16]) / ((18785 ? (arr_6 [i_0] [i_0] [i_6]) : 3886514924))));
                arr_32 [i_0] [9] [i_6] [i_6] = (arr_24 [i_6 + 1] [i_6 + 2] [14] [i_0]);
                arr_33 [i_0] [i_1] [i_0] [i_0] = ((-47 / (arr_3 [i_0] [i_0])));
                arr_34 [i_0] [i_1] [i_0] = ((var_1 * (var_2 + var_5)));
            }
            for (int i_7 = 1; i_7 < 19;i_7 += 1) /* same iter space */
            {
                arr_37 [i_1] [i_0] = ((((0 << (var_8 - 26583))) - (arr_12 [16] [2] [i_1] [1])));
                arr_38 [i_0] [i_1] [i_1] = ((9223372036854775807 ? 3219388062 : 1));
            }
            arr_39 [i_0] = (((((var_0 ? (arr_19 [i_0] [i_1] [19]) : (arr_13 [i_0] [i_0] [i_1] [i_1] [i_0] [i_0])))) ? var_8 : var_8));
            arr_40 [i_0] [i_1] [5] = (arr_24 [i_1] [i_0] [i_0] [i_0]);
            arr_41 [i_0] [i_0] [i_1] = (!var_6);
        }
        arr_42 [i_0] = (((arr_35 [i_0]) ? (arr_1 [19]) : var_10));

        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            arr_45 [i_0] = var_7;
            arr_46 [i_8] = -var_4;
        }
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 24;i_9 += 1)
    {

        for (int i_10 = 0; i_10 < 24;i_10 += 1)
        {

            for (int i_11 = 2; i_11 < 23;i_11 += 1)
            {
                arr_56 [i_9] [i_10] [20] [i_10] = (((var_7 ? -692674303 : var_2)));
                arr_57 [i_9] [i_9] [i_11 - 2] = 5321;
                arr_58 [i_9] [i_10] [i_11] = (!var_0);
            }
            for (int i_12 = 0; i_12 < 24;i_12 += 1)
            {
                arr_61 [i_9] = var_10;
                arr_62 [i_10] [i_10] [i_10] [12] = -6479;
            }
            arr_63 [i_9] = (i_9 % 2 == zero) ? (((var_7 >> (((arr_55 [11] [i_9] [i_10]) - 53))))) : (((var_7 >> (((((arr_55 [11] [i_9] [i_10]) - 53)) + 46)))));
        }
        for (int i_13 = 0; i_13 < 24;i_13 += 1)
        {

            for (int i_14 = 1; i_14 < 22;i_14 += 1)
            {
                arr_68 [i_13] = (!var_1);
                arr_69 [i_9] [i_13] [i_9] = (((arr_51 [i_9] [i_9] [i_9]) ^ var_4));
                arr_70 [i_9] [i_9] [i_14] [4] = (!2915644567);
            }
            arr_71 [i_9] [i_13] = (((arr_67 [i_9] [i_9] [7] [i_13]) ? (arr_47 [i_9]) : (arr_67 [5] [i_9] [i_13] [i_13])));
            arr_72 [i_9] [i_13] [i_9] = 1;
        }
        arr_73 [i_9] = 6329219284315966568;
    }
    var_12 = var_5;
    var_13 = ((~((-(0 << 1)))));
    #pragma endscop
}
