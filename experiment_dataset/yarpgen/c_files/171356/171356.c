/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171356
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] = (((arr_1 [i_0]) << (((1129659740 >> 1) - 564829870))));
        arr_4 [i_0] = 1129659740;
        arr_5 [i_0] = 12651906455336783062;
        arr_6 [i_0] = (((((((((arr_2 [i_0]) - var_0))) ? var_5 : 1))) + (((var_10 - 134217727) ? ((((arr_0 [i_0] [i_0]) + (arr_0 [i_0] [i_0])))) : (max(var_0, (arr_2 [i_0])))))));
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1) /* same iter space */
    {
        arr_10 [i_1] [i_1] = var_3;

        for (int i_2 = 4; i_2 < 11;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
            {
                arr_17 [i_1] [i_2] [i_3] = ((+(((((var_5 ? (arr_14 [i_3] [i_3] [i_3] [i_3]) : 21813))) % (min((arr_2 [i_1]), var_8))))));
                arr_18 [i_3] [i_2] [i_1] = 12651906455336783069;
            }
            for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
            {
                arr_23 [i_1] [i_2] [i_4] [i_4] = (arr_21 [i_4]);
                arr_24 [i_2] = (((arr_20 [i_1]) > (min(var_9, var_1))));

                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    arr_27 [i_1] [i_2] [i_4] [i_5] = (((((((((var_18 ? var_16 : var_8))) && var_9)))) > (((2313850454 ^ (arr_14 [i_1] [i_2] [i_4] [i_5]))))));
                    arr_28 [i_5] [i_4] [i_2] [i_1] = (min(((var_4 ? (arr_12 [i_1 - 1] [i_1 + 2] [i_1 - 1]) : var_2)), (var_16 | var_5)));
                    arr_29 [i_5] [i_4] [i_2] [i_1] = (((!3165307560) ? (!var_9) : (((arr_9 [i_1 - 1] [i_4]) ? (arr_25 [i_1 + 1] [i_2] [i_4] [i_5]) : (arr_25 [i_1] [i_2 - 3] [i_4] [i_5])))));
                }
                /* vectorizable */
                for (int i_6 = 1; i_6 < 10;i_6 += 1)
                {
                    arr_34 [i_2] [i_2] = (arr_0 [i_1] [i_6]);
                    arr_35 [i_6] [i_2] = var_0;
                    arr_36 [i_4] [i_6] = (arr_14 [i_1] [i_2] [i_1] [i_6]);

                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        arr_40 [i_1] [i_2] [i_4] [i_6] [i_7] = var_1;
                        arr_41 [i_1] [i_2] [i_4] [i_6] [i_7] = 236;
                        arr_42 [i_1] [i_2] [i_4] [i_6] [i_7] = ((-((5794837618372768571 ? (arr_11 [i_6] [i_6] [i_6]) : var_11))));
                    }
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    arr_45 [i_1] [i_2] [i_4] [i_8] = (((((var_13 & (arr_32 [i_1] [i_1] [i_2] [i_4] [i_8])))) ? (arr_39 [i_2] [i_2] [i_2 + 1] [i_1 + 2] [i_8]) : (arr_15 [i_1 - 1] [i_1 + 1] [i_1 - 1])));
                    arr_46 [i_2] = (!var_12);
                    arr_47 [i_4] = (((arr_37 [i_1] [i_2] [i_2] [i_2] [i_2 - 2] [i_4] [i_4]) ? (arr_37 [i_1] [i_1] [i_2] [i_2] [i_2 - 2] [i_4] [i_4]) : var_9));
                    arr_48 [i_1] [i_2] [i_4] [i_8] = var_4;
                }
                arr_49 [i_1] [i_2] [i_4] [i_1] = var_18;
            }
            for (int i_9 = 0; i_9 < 12;i_9 += 1) /* same iter space */
            {
                arr_53 [i_1] [i_2] [i_9] = ((!(((8790057884940046236 - (-32767 - 1))))));
                /* LoopNest 2 */
                for (int i_10 = 1; i_10 < 10;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        {
                            arr_58 [i_1] [i_2] [i_9] [i_10] [i_11] [i_1] = ((6925619987845345107 ? 3334160470 : 65529));
                            arr_59 [i_1] [i_2] [i_1] [i_10] [i_11] [i_9] [i_2] = ((!(((((max((arr_22 [i_1] [i_9] [i_10]), (arr_54 [i_1] [i_2] [i_9] [i_10] [i_11])))) ? ((min(1662, var_8))) : (arr_43 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))));
                        }
                    }
                }
            }
            arr_60 [i_1] [i_2] [i_1] = ((~(~var_0)));
            arr_61 [i_1] [i_1] [i_1] = ((((min((arr_31 [i_1 + 1]), (arr_44 [i_1 - 1] [i_1 + 2])))) ? (((min((arr_31 [i_1 + 2]), var_17)))) : ((1 ? (arr_44 [i_1 - 1] [i_1 - 1]) : 60911117))));
        }
        arr_62 [i_1] = (arr_19 [i_1] [i_1] [i_1]);
    }
    for (int i_12 = 1; i_12 < 10;i_12 += 1) /* same iter space */
    {
        arr_65 [i_12] = ((((((((arr_8 [i_12]) || 13)) ? (arr_33 [i_12] [i_12] [i_12] [i_12]) : -32757))) ? (((arr_31 [i_12]) | ((~(arr_43 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12]))))) : (arr_19 [i_12] [i_12] [i_12])));
        arr_66 [i_12] = 113;
    }

    for (int i_13 = 3; i_13 < 13;i_13 += 1)
    {
        arr_71 [i_13] = (arr_1 [i_13]);
        arr_72 [i_13] [i_13] = ((var_10 ? (((arr_70 [i_13] [i_13]) ? ((~(arr_67 [i_13]))) : ((((arr_2 [i_13]) - var_15))))) : ((-(max(12651906455336783077, (arr_68 [i_13])))))));
    }
    #pragma endscop
}
