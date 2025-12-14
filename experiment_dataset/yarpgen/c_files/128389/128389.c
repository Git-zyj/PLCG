/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128389
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_12;

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_17 = (min(var_17, ((max(1, ((~(min((arr_2 [i_0]), var_8)))))))));
        var_18 = (((~(min(var_14, var_14)))));
        var_19 = (min(var_19, (((((min(-8452181405812283840, 58))) ? -8452181405812283840 : 425600798)))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        var_20 = var_5;
                        arr_13 [i_3] [i_3] [12] [12] [10] [i_0 + 1] &= ((!((((arr_2 [i_0 + 1]) ? (arr_2 [i_0 + 1]) : 425600798)))));
                    }
                }
            }
        }
        var_21 = (((((96 ? var_8 : (arr_5 [i_0]))) / var_4)));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            for (int i_6 = 4; i_6 < 13;i_6 += 1)
            {
                {
                    arr_21 [i_5] [i_4] &= 3111566790301924554;
                    var_22 = (arr_11 [i_6 - 1] [i_6 + 1] [i_6 - 1] [i_6 + 2]);
                    arr_22 [i_6] = (arr_12 [i_6 + 1] [i_6] [i_6 - 4] [i_6 + 2] [i_6] [i_6 + 2]);
                    var_23 = (arr_0 [i_4]);
                }
            }
        }
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 16;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 16;i_9 += 1)
                {
                    {
                        arr_31 [i_8] [9] [i_8] [i_8] = ((var_5 ? (~101) : (!var_11)));

                        for (int i_10 = 0; i_10 < 16;i_10 += 1)
                        {
                            var_24 = var_10;
                            arr_35 [i_9] &= ((var_5 - (arr_6 [7] [15] [15] [15])));
                        }
                    }
                }
            }
        }
        arr_36 [i_4] [i_4] = var_14;
    }
    for (int i_11 = 1; i_11 < 18;i_11 += 1)
    {
        arr_39 [i_11 - 1] = ((-((-(arr_38 [i_11 - 1])))));

        /* vectorizable */
        for (int i_12 = 1; i_12 < 21;i_12 += 1)
        {
            var_25 = ((-106 ? (arr_38 [i_11 - 1]) : -9778));
            /* LoopNest 3 */
            for (int i_13 = 0; i_13 < 22;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 22;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 22;i_15 += 1)
                    {
                        {
                            arr_50 [i_15] &= (-3111566790301924560 ? 2106591046 : -105128259);
                            var_26 = ((((425600798 <= (arr_40 [i_12] [i_14]))) ? (((((arr_47 [i_11] [i_12] [16] [i_11] [i_11]) + 2147483647)) << (1 - 1))) : 1));
                        }
                    }
                }
            }
            arr_51 [i_11 + 1] [i_12] = ((~(1 << 1)));
        }
        for (int i_16 = 0; i_16 < 22;i_16 += 1)
        {
            var_27 &= var_14;

            for (int i_17 = 0; i_17 < 1;i_17 += 1) /* same iter space */
            {

                /* vectorizable */
                for (int i_18 = 0; i_18 < 22;i_18 += 1)
                {
                    var_28 = (min(var_28, (((var_13 == ((~(arr_49 [i_11] [11] [i_16] [i_17] [4] [i_16] [i_18]))))))));
                    arr_60 [i_17] = (~var_2);

                    for (int i_19 = 1; i_19 < 21;i_19 += 1)
                    {
                        var_29 &= 4467;
                        arr_65 [1] [i_11] [i_16] [i_16] [i_17] [i_18] [i_19] = ((+(((arr_37 [i_11] [i_19 - 1]) ? 100 : (arr_44 [i_11 + 2])))));
                    }
                }

                /* vectorizable */
                for (int i_20 = 0; i_20 < 22;i_20 += 1) /* same iter space */
                {
                    var_30 = (arr_38 [i_11 + 3]);
                    arr_70 [i_20] = ((var_4 ? 1 : ((var_5 ? 18194866148821499542 : var_11))));

                    for (int i_21 = 0; i_21 < 22;i_21 += 1)
                    {
                        var_31 = ((-(arr_45 [20] [i_11 - 1] [i_20] [1])));
                        arr_73 [1] [16] [i_17] [6] [i_20] [2] [6] &= (18194866148821499517 & 135);
                        var_32 = (min(var_32, (((-9778 ? (arr_38 [i_11]) : 5481)))));
                    }
                }
                for (int i_22 = 0; i_22 < 22;i_22 += 1) /* same iter space */
                {
                    arr_76 [i_11] [i_16] [i_17] [i_22] &= (min(var_13, ((((min(var_13, var_6))) << (((min((arr_58 [1] [i_11] [i_11] [i_11]), (arr_56 [i_11]))) - 65348))))));
                    arr_77 [i_11] [i_11] [i_17] [i_22] &= ((~(((arr_48 [i_11] [i_11] [16] [1] [i_11 + 4] [i_11 + 1]) ? (arr_48 [i_11] [i_11 - 1] [0] [15] [i_11 + 3] [i_11 + 1]) : (arr_48 [i_11] [i_11] [i_11] [i_11] [i_11 + 4] [i_11 + 3])))));
                }
                for (int i_23 = 0; i_23 < 22;i_23 += 1) /* same iter space */
                {
                    var_33 = ((((((((!(arr_57 [i_16] [i_16] [i_16]))) && (((var_13 ? -96 : var_13))))))) >= ((((max(var_12, (arr_72 [i_11] [i_11])))) ? (-77 | var_15) : var_5))));
                    arr_80 [i_23] [i_23] = var_2;
                    var_34 = (min(var_34, (arr_48 [i_11] [i_11] [i_16] [1] [i_17] [14])));
                }
                arr_81 [16] [16] [i_17] [14] = (arr_44 [i_17]);
                var_35 = (((((((((arr_69 [i_11] [i_11]) ? 0 : -326113573))) ? -326113573 : -96))) ^ 5193764549158969006));
            }
            for (int i_24 = 0; i_24 < 1;i_24 += 1) /* same iter space */
            {

                for (int i_25 = 0; i_25 < 0;i_25 += 1)
                {
                    arr_88 [i_11] [4] [i_24] [8] &= (min((min(((var_10 ? var_10 : var_12)), (arr_42 [8] [12] [12] [i_11]))), var_5));
                    arr_89 [i_11] [i_24] [i_24] = (min((arr_40 [i_11] [i_11 + 1]), (min(255, 4122166426))));
                }
                arr_90 [i_11 + 4] [10] [8] &= (min((arr_46 [6] [1] [1] [i_24]), var_5));
            }
        }
        arr_91 [i_11] [15] = (!((((arr_54 [i_11] [i_11] [i_11]) ? (~-93) : (min(10960834656753252669, 5920084349390582529))))));
    }
    /* vectorizable */
    for (int i_26 = 0; i_26 < 15;i_26 += 1)
    {
        arr_95 [i_26] [i_26] = (arr_72 [i_26] [i_26]);
        var_36 = (~var_15);
        var_37 &= (arr_38 [i_26]);
        arr_96 [i_26] = var_0;
    }
    #pragma endscop
}
