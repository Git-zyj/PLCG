/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106311
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(((min(-62, (max(1, -115))))), (((52779 % var_4) ? var_6 : var_8))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_0] = ((((min((min(var_10, var_2)), (arr_5 [i_0 + 1] [i_1 + 1] [i_2] [3])))) ? ((((min((arr_2 [i_0] [i_0] [i_0]), 1))))) : (min((min(var_8, var_5)), (min(var_2, (arr_3 [i_0] [i_1] [i_0])))))));
                    arr_8 [i_0] [i_1] [i_2] = ((var_8 ? (((min((arr_4 [i_0 - 2] [i_0 - 2] [i_0 - 1]), var_9)))) : ((+(((arr_5 [19] [i_1] [19] [i_0]) + (arr_3 [i_0] [10] [i_0])))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 1;i_5 += 1)
            {
                {

                    for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
                    {
                        arr_19 [i_3] = (min(((((((var_9 ? (arr_4 [i_3] [i_4] [i_3]) : var_5))) ? ((var_2 ? (arr_16 [i_3] [8] [8]) : (arr_15 [i_5 - 1] [i_3]))) : ((-19564 ? 1 : 961))))), (((((-17 ? var_7 : (arr_18 [i_6] [i_3] [i_4] [i_3])))) ? var_6 : (((max(var_1, var_4))))))));
                        arr_20 [3] [i_4] [i_4] [i_4] = (((((arr_15 [i_3] [i_3]) ? ((max(2029, (arr_9 [i_5])))) : ((6 ? 697461343 : 18446744073709551614)))) | ((var_0 | (((min(var_3, var_1))))))));
                    }
                    for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
                    {

                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            arr_28 [i_3] [i_4] [i_5] [i_3] [i_8] = ((((100943689 - (max(var_5, (arr_22 [i_3] [i_4] [i_5] [14]))))) - -var_10));
                            arr_29 [i_3] [i_4] [i_3] [14] [i_8] = var_7;
                            arr_30 [i_7] [i_4] = (max((arr_9 [i_3]), ((((var_4 ? var_4 : 440)) * ((4292870144 ? (arr_0 [i_8]) : var_1))))));
                        }
                        arr_31 [i_3] [i_3] = var_9;
                        arr_32 [i_3] [i_3] [i_5] [10] = ((((((max((arr_23 [i_3] [i_3] [i_3] [i_3]), (arr_16 [4] [i_4] [i_4]))) ^ var_1))) ? (((!(((var_2 ? (arr_18 [6] [9] [6] [i_4]) : 43432)))))) : ((-((min(239, 178)))))));
                    }
                    for (int i_9 = 0; i_9 < 20;i_9 += 1) /* same iter space */
                    {
                        arr_35 [i_3] [i_4] [i_5 - 1] = (((!-447239839) <= (arr_0 [i_3])));

                        for (int i_10 = 0; i_10 < 20;i_10 += 1)
                        {
                            arr_38 [i_5] [i_4] [i_5] [i_9] [i_10] [19] = ((((((((40185 ? 1 : (arr_4 [i_3] [i_5] [11])))) ? -43455554 : 15))) ? 386669465 : 432311023));
                            arr_39 [i_4] [i_4] = var_4;
                            arr_40 [i_3] [i_3] [i_3] [i_3] [i_3] = (min(-var_3, (arr_1 [i_10])));
                        }
                    }
                    for (int i_11 = 0; i_11 < 20;i_11 += 1) /* same iter space */
                    {
                        arr_43 [i_3] [i_3] [i_5] [i_11] [i_3] |= (min((((arr_33 [i_3] [i_4]) & 1)), ((((!4) ? (max(var_9, (arr_23 [2] [2] [i_5] [i_5]))) : (((min(1, 54694)))))))));
                        arr_44 [i_11] [i_4] [i_5] [7] = min(65535, ((min(22, var_10))));
                        arr_45 [i_11] = (((((min(var_3, var_2) == ((min(var_5, 3913788108))))))));
                    }

                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 20;i_12 += 1)
                    {

                        for (int i_13 = 0; i_13 < 20;i_13 += 1)
                        {
                            arr_51 [i_3] [i_3] [i_3] [i_3] [i_3] = (((!var_3) && var_7));
                            arr_52 [i_12] [11] = 7785118190263181904;
                        }
                        arr_53 [i_12] [1] [i_4] [i_4] [i_3] = (arr_1 [i_5]);
                        arr_54 [i_4] = 5419303341547623422;
                    }
                }
            }
        }
    }
    var_12 = var_7;
    /* LoopNest 2 */
    for (int i_14 = 0; i_14 < 11;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 11;i_15 += 1)
        {
            {
                arr_61 [i_15] [i_15] [i_15] = var_10;
                arr_62 [i_14] [8] = (((arr_58 [i_14] [i_14]) || var_3));
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 11;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 11;i_17 += 1)
                    {
                        {
                            arr_68 [i_14] [i_15] [i_15] [i_17] = (arr_23 [i_14] [i_16] [i_14] [i_14]);
                            arr_69 [i_16] [i_16] [9] [i_15] = (56 * 1);
                            arr_70 [i_14] [i_15] [i_17] [1] = ((var_5 ? 7831284270451223375 : ((((arr_55 [i_15]) ? (arr_55 [i_15]) : var_4)))));
                            arr_71 [i_14] [i_15] [i_15] [i_16] [i_15] = (((~((var_8 ? var_9 : var_10)))));
                            arr_72 [i_14] = -var_2;
                        }
                    }
                }
                arr_73 [i_14] [i_15] [i_14] = (min(-2582939597, var_10));
                arr_74 [i_14] [i_15] = ((((min(67, 107))) ? ((((((arr_60 [i_15]) & var_7))) ? (~var_0) : (~3158273397489503575))) : ((~(max(8258118285537406783, (arr_33 [1] [i_14])))))));
            }
        }
    }
    #pragma endscop
}
