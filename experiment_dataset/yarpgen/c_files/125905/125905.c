/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125905
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (min(((!(((var_8 ? var_15 : 82))))), 567504469));

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            arr_6 [15] [15] [i_1] = (((arr_5 [i_1]) | 1495133353));
            var_19 = ((arr_4 [i_0]) ^ (((((min(var_10, var_17))) ? 65534 : (-16920 ^ 4791)))));
        }
        arr_7 [i_0] = (((((arr_4 [i_0]) ? 8 : 0)) | 21133));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 13;i_4 += 1)
                {
                    {
                        arr_15 [i_2] [i_3] [i_4] = ((var_10 ? (arr_4 [i_4]) : (((var_5 + (((arr_2 [i_0]) ? var_5 : 2870064348)))))));
                        var_20 = (((~-29202) & (arr_9 [i_3 - 1] [i_4 + 3] [i_4 + 3])));
                    }
                }
            }
        }
    }
    for (int i_5 = 3; i_5 < 20;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            var_21 = (max(((max(((min((arr_20 [i_5] [i_6] [i_6]), var_10))), (min(112, -1))))), (min((((arr_19 [i_6] [12] [12]) ? (arr_17 [i_5] [11]) : 17081714467655117162)), ((max(5894, 296886700)))))));
            var_22 = var_4;
        }
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {

            /* vectorizable */
            for (int i_8 = 2; i_8 < 20;i_8 += 1)
            {
                var_23 = (((var_4 ? 17081714467655117155 : 0)) ^ -2452);
                arr_26 [i_5] [i_5] [i_7] [i_5] = var_8;
            }
            /* vectorizable */
            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {

                for (int i_10 = 1; i_10 < 21;i_10 += 1)
                {

                    for (int i_11 = 0; i_11 < 22;i_11 += 1)
                    {
                        arr_33 [i_5] [i_5] [i_9] = -65535;
                        arr_34 [i_5] = ((4 ? 26950 : -92));
                        arr_35 [i_5] = ((3 ? 120 : 0));
                        var_24 = (6569683533071995747 + 118);
                        arr_36 [i_5] [i_5] [i_5] = 44748;
                    }
                    for (int i_12 = 0; i_12 < 0;i_12 += 1)
                    {
                        var_25 = var_12;
                        arr_40 [i_5] = ((var_9 ? var_7 : var_16));
                    }
                    for (int i_13 = 4; i_13 < 20;i_13 += 1)
                    {
                        arr_45 [i_5] [i_7] [i_9] [i_5] [8] = ((((-(arr_17 [i_5] [i_5])))) ^ (arr_16 [i_5]));
                        arr_46 [i_5] [i_7] [i_5] [i_10 - 1] [i_5] [i_5] = var_11;
                    }
                    var_26 = -21110;
                    arr_47 [i_5] [i_5] = ((-5197859944336099524 ? (1113481909 | 5103804171465348118) : -5103804171465348120));
                }
                for (int i_14 = 0; i_14 < 22;i_14 += 1)
                {
                    var_27 = ((-(0 | -95)));
                    arr_52 [11] [11] [i_9] [11] [i_5] = var_13;
                }
                arr_53 [i_5] = (((arr_22 [i_5]) ? var_7 : 123));
            }
            for (int i_15 = 0; i_15 < 1;i_15 += 1)
            {
                arr_56 [i_5] = (((~15461730682185622123) ? ((0 + (arr_31 [i_5 - 2] [i_7] [i_5 - 2] [i_5] [i_15] [i_15]))) : -54119));

                for (int i_16 = 1; i_16 < 19;i_16 += 1)
                {
                    arr_60 [i_5] [i_5] [i_5] = var_7;
                    var_28 = ((((min((min((arr_18 [i_5]), 427)), 1113481929))) ? (max((min(819777705, var_14)), (((~(arr_25 [i_5] [i_7] [i_16 + 3])))))) : (((44399 ? var_0 : (arr_51 [i_5] [i_5 + 1] [i_7] [11]))))));

                    /* vectorizable */
                    for (int i_17 = 2; i_17 < 21;i_17 += 1)
                    {
                        arr_64 [i_5] [i_5] = var_13;
                        arr_65 [i_5] [18] [8] [18] [i_16 + 3] [i_17] = 65535;
                    }

                    /* vectorizable */
                    for (int i_18 = 0; i_18 < 0;i_18 += 1)
                    {
                        arr_68 [i_7] [15] [i_5] = (((~var_10) ? (arr_24 [i_5] [i_5] [i_5]) : (var_7 ^ 44417)));
                        var_29 = ((-(arr_48 [i_16 + 3] [i_16 + 3] [i_18 + 1])));
                        var_30 = (max(var_30, -15279288798867307144));
                        arr_69 [i_5] = -77;
                    }
                    arr_70 [i_5] [i_5] [i_7] [i_15] = (((((arr_37 [i_5]) ? (arr_57 [i_5 - 1] [i_16 + 3] [i_16]) : var_17)) ^ 104));
                }
            }
            for (int i_19 = 0; i_19 < 1;i_19 += 1)
            {
                arr_74 [i_5] [i_7] [i_7] = (max(61705, 12765));
                var_31 = (max(var_31, ((min((min(3167455274842244455, 4294967295)), (((-(arr_67 [i_5] [i_5 - 3])))))))));
            }
            arr_75 [i_5] = 9;
            var_32 += 16692370919426356102;
            var_33 = (min(var_17, var_15));
            arr_76 [i_5] [i_5] [7] = var_3;
        }
        arr_77 [i_5 - 2] [i_5] = (((~1314688657) | 112));
    }
    var_34 = -var_7;
    var_35 = (min((max((max(var_14, var_10)), var_2)), var_17));
    #pragma endscop
}
