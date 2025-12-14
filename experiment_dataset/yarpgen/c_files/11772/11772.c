/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11772
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min((((var_3 ^ var_7) ^ (153 ^ var_4))), ((((~var_8) ? var_2 : var_7)))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {

            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                arr_11 [i_1] [15] [10] [i_2 + 1] = (1652497641 + 5986110706969891823);
                var_14 = (((207 ? 0 : 207)));
            }
            var_15 = var_10;
        }
        arr_12 [i_0] = (min((min(15285, var_6)), ((var_11 ? (arr_5 [i_0] [i_0]) : (1 >> 0)))));
        arr_13 [8] = ((((min((var_8 - var_11), var_12))) ? ((((((arr_7 [i_0] [i_0] [18] [i_0]) ? (arr_0 [i_0]) : var_5))) ? (((var_5 % (arr_4 [i_0] [6] [i_0])))) : (max((arr_6 [i_0] [15] [i_0]), -4350708436444717895)))) : ((((arr_2 [i_0]) ^ (arr_9 [i_0] [19]))))));
        var_16 = ((((((((arr_8 [i_0] [i_0] [i_0]) + 9223372036854775807)) >> (((arr_8 [i_0] [i_0] [i_0]) + 734311311152569653))))) && var_8));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
    {
        arr_16 [5] = ((!(arr_6 [5] [i_3] [i_3])));
        var_17 = ((~(arr_1 [i_3] [i_3])));
    }
    for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
    {

        for (int i_5 = 1; i_5 < 21;i_5 += 1)
        {
            var_18 = (((((max(var_2, var_11))) ? (max(var_6, var_6)) : var_0)));
            arr_23 [i_4] = (min(65535, 17446029541769833130));

            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                arr_26 [11] [i_4] [16] &= 1643436940325218014;

                for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
                {
                    arr_31 [10] [i_6] [i_5] [i_5] [i_4] = (((((((var_12 && (arr_29 [i_4] [i_4] [i_4] [i_4])))) & -1737520249)) % ((var_1 ? (arr_25 [i_4] [i_5 + 1]) : ((min(var_11, var_0)))))));
                    var_19 = (-(max(1, (-9223372036854775807 - 1))));
                    arr_32 [i_4] [i_5] [i_6] [1] [i_7] [1] = ((min(1, (-2147483647 - 1))));
                }
                for (int i_8 = 0; i_8 < 22;i_8 += 1) /* same iter space */
                {
                    var_20 += (((arr_2 [i_8]) && (((!9223372036854775807) || (((arr_8 [0] [i_8] [i_6]) || (arr_10 [i_8] [i_6] [i_4])))))));
                    arr_35 [11] = var_7;

                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        arr_38 [i_5] [i_8] [i_6] [i_5] [5] = (arr_34 [i_8] [13] [i_5] [i_4]);
                        var_21 = (5644 ^ 15285);
                    }
                }
                arr_39 [9] [i_5] [9] [17] = (min((!var_7), (arr_4 [i_4] [i_5 - 1] [i_4])));
                var_22 = (192 ? (-121 <= 111) : (min(98, 0)));
                arr_40 [i_4] [16] [16] = (22 == var_6);
            }
        }
        /* vectorizable */
        for (int i_10 = 1; i_10 < 20;i_10 += 1) /* same iter space */
        {
            arr_45 [i_4] [13] [4] = (((arr_5 [i_10] [i_10]) != -1010652962));
            arr_46 [i_4] [i_4] = (!1);
            var_23 = var_7;
            arr_47 [i_10 - 1] = (((arr_37 [i_10 + 2] [i_10 + 2] [i_10 - 1] [i_10] [i_10 - 1]) ? var_7 : var_12));
        }
        for (int i_11 = 1; i_11 < 20;i_11 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_12 = 1; i_12 < 20;i_12 += 1)
            {
                arr_52 [i_12] [i_11 - 1] [i_4] = var_6;
                arr_53 [13] = (((arr_0 [i_11 + 2]) ? -var_10 : 4294967279));
                arr_54 [i_12] = (!var_0);
                arr_55 [0] [i_11] [i_12] = (((!var_4) || (((var_1 ? (arr_1 [i_4] [i_4]) : -1401741263)))));
                var_24 = (((-1401741255 & var_5) != (arr_7 [i_12 + 1] [6] [6] [i_4])));
            }
            for (int i_13 = 0; i_13 < 22;i_13 += 1) /* same iter space */
            {
                var_25 = ((173 - 1) ? (((((var_11 + var_6) >= (arr_19 [i_4] [i_11 + 2]))))) : (min(9223372036854775807, (arr_37 [i_11] [8] [15] [i_11 - 1] [i_11 + 2]))));

                for (int i_14 = 0; i_14 < 22;i_14 += 1)
                {
                    arr_61 [i_11] [i_11] [i_11] [i_11] = ((60596 - 2147483635) & (min((min(-9099392892040319384, 120)), 1)));
                    arr_62 [i_11] [i_14] = (arr_51 [i_4] [i_13] [7]);
                }
                arr_63 [3] [i_11 - 1] [21] [i_11 - 1] = ((min(var_10, (((arr_20 [i_13]) ? (arr_4 [i_4] [i_11] [i_13]) : var_3)))));
            }
            for (int i_15 = 0; i_15 < 22;i_15 += 1) /* same iter space */
            {
                arr_66 [i_4] [i_4] [7] [19] = (min(((3688791768819218385 ? (min((arr_8 [i_4] [i_15] [i_4]), var_0)) : (((min((arr_15 [2] [i_11]), (arr_56 [1]))))))), ((((23053 + (arr_5 [4] [18])))))));
                arr_67 [15] [i_15] = (max((var_5 >= var_5), -4294967279));
                arr_68 [i_15] [i_15] [i_15] = (-21 >= -80);
                var_26 = var_4;
            }
            var_27 = (min(var_27, ((min((92 * 42482), ((var_7 ? ((min((arr_27 [i_11] [i_11] [i_4] [i_4]), var_4))) : var_6)))))));
            arr_69 [i_4] [i_11] [i_11] = (1 || (0 || 3659252596));
            arr_70 [21] = var_5;
            arr_71 [i_4] [1] [i_4] = (!var_10);
        }
        arr_72 [i_4] = ((!(!1132397856)));
        var_28 = (((var_3 + (arr_51 [i_4] [i_4] [i_4]))));
    }
    /* vectorizable */
    for (int i_16 = 0; i_16 < 21;i_16 += 1)
    {
        var_29 = (1 >= var_12);
        arr_77 [i_16] = ((0 ? (arr_43 [i_16] [i_16]) : var_11));
        var_30 = 952957966;
    }
    #pragma endscop
}
