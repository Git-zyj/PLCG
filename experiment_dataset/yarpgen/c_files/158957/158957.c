/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158957
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1] = (-(((arr_2 [i_0]) ? (arr_2 [i_0]) : (!3790759517))));
                var_18 = (26848 + 1590);
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        arr_9 [i_2] [i_2] = (arr_6 [i_2]);
        var_19 = 60433;
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        arr_12 [i_3] [i_3] = (((arr_3 [i_3] [i_3] [i_3]) ? 60448 : (arr_10 [i_3])));
        var_20 = ((14 != (arr_0 [i_3] [i_3])));
        var_21 = ((50280 & ((((arr_0 [i_3] [i_3]) && 16776192)))));
    }
    for (int i_4 = 1; i_4 < 13;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 13;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {

                        for (int i_8 = 2; i_8 < 15;i_8 += 1) /* same iter space */
                        {
                            arr_25 [i_8] [i_5] [i_4] [i_7] [i_7] [i_7] [i_7] = (arr_4 [i_7] [i_8]);
                            var_22 = (min(var_22, (arr_14 [i_4])));
                            arr_26 [i_4] [i_4] [i_6] [i_7] [i_8] = (((((arr_19 [i_5] [i_8 - 2]) ? (min(15249, 7276717215525752866)) : 3874715936)) >= 600211095444538051));
                            arr_27 [i_4 + 3] [i_5] [i_5] [i_6] [i_7] [i_8 - 2] [i_8] = ((var_8 || ((((max(var_16, var_11)) | (arr_4 [i_8] [i_8 + 1]))))));
                            var_23 = (max(var_23, ((((((!(arr_22 [i_5] [i_6] [i_6] [i_6] [i_6 + 2] [i_8 - 2] [i_8 - 1])))) < (arr_22 [i_4] [i_4 + 3] [i_4 + 1] [i_5] [i_6 + 2] [i_7] [i_8 - 1]))))));
                        }
                        for (int i_9 = 2; i_9 < 15;i_9 += 1) /* same iter space */
                        {
                            var_24 = (min(var_24, var_8));
                            arr_31 [i_5] [i_5] [i_5] [i_5] [i_5] = (arr_19 [i_5] [i_6]);
                        }
                        /* vectorizable */
                        for (int i_10 = 2; i_10 < 15;i_10 += 1) /* same iter space */
                        {
                            var_25 = (((arr_17 [i_4] [i_4] [i_4 + 3]) ? var_15 : (arr_17 [i_4 - 1] [i_5] [i_4 + 3])));
                            var_26 = (arr_21 [i_4 + 1]);
                            var_27 = (var_13 < -1129543493);
                        }
                        var_28 *= ((-8 ? 49775 : -794818610));
                        var_29 = (arr_33 [i_4] [i_5] [i_6 + 1] [i_7] [i_7]);
                        arr_34 [i_4] [i_4] [i_5] [i_4] [i_7] [i_7] = var_5;
                    }
                }
            }
        }
        var_30 *= 127;
        arr_35 [i_4] = ((max(var_13, (arr_16 [i_4 - 1]))) + ((-1605828918 ? -845846723 : 49775)));
    }
    for (int i_11 = 0; i_11 < 14;i_11 += 1)
    {
        var_31 = ((min((max((arr_29 [i_11] [i_11] [i_11] [i_11] [i_11]), (arr_16 [i_11]))), (((!(arr_13 [i_11] [i_11])))))));
        var_32 = (arr_19 [i_11] [i_11]);
        var_33 = 2442;
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 14;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 14;i_13 += 1)
            {
                for (int i_14 = 1; i_14 < 11;i_14 += 1)
                {
                    {
                        var_34 = (arr_28 [i_11] [i_11] [i_13] [i_14 + 2] [i_13] [i_14 + 1]);
                        var_35 = (((!(((var_14 ? 200 : (arr_13 [i_11] [i_13])))))));
                        var_36 = -32759;
                        var_37 = var_8;
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_15 = 0; i_15 < 20;i_15 += 1)
    {
        for (int i_16 = 1; i_16 < 1;i_16 += 1)
        {
            {
                arr_50 [i_16] [i_16] = (arr_48 [i_16 - 1] [i_16]);
                var_38 -= (((var_7 ? (arr_0 [i_16] [i_16 - 1]) : (arr_46 [i_15] [i_16 - 1]))));
            }
        }
    }

    for (int i_17 = 2; i_17 < 16;i_17 += 1)
    {
        var_39 = (max(var_39, (((56453 ? 33 : 8)))));

        for (int i_18 = 1; i_18 < 13;i_18 += 1)
        {
            arr_55 [i_17] [i_18 + 4] [i_18 + 4] = (arr_54 [i_17] [i_17]);
            arr_56 [i_17] [i_18] [i_18] = (!-43134);
        }
        for (int i_19 = 0; i_19 < 17;i_19 += 1)
        {
            arr_60 [i_17 - 1] = (--99);
            var_40 = (((arr_59 [i_17 + 1] [i_19] [i_19]) ? (arr_49 [i_19]) : (arr_46 [i_17] [i_19])));
            arr_61 [i_19] = ((+((-(((arr_49 [i_19]) ? var_17 : -19620))))));
            var_41 = (3754222053 ? (arr_53 [i_17 + 1] [i_19]) : (((arr_53 [i_17 + 1] [i_19]) ? (arr_53 [i_17 - 2] [i_17 - 2]) : (arr_53 [i_17 - 2] [i_19]))));
        }
        arr_62 [i_17] = -8928;
    }
    #pragma endscop
}
