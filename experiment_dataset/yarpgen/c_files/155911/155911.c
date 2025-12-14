/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155911
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_15 [11] [8] &= max((!var_7), 15527254335020910067);
                                arr_16 [i_0] [i_0] [i_0] [i_3 - 1] [i_1] = min(((~(arr_4 [i_0] [i_1] [i_0]))), var_8);
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 3; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            {
                                arr_25 [i_0] [i_0] [i_5] [i_6] [i_7] = (((((var_13 ? (((((arr_14 [i_7] [i_6] [i_0] [1] [2] [i_1] [i_0]) > var_11)))) : ((var_3 ? var_13 : var_10))))) ? ((((arr_4 [3] [i_5 - 2] [i_5 - 2]) > (arr_4 [i_1] [i_5 - 2] [i_5 - 1])))) : (((7498947056294393500 == (arr_2 [2]))))));
                                arr_26 [i_0] [i_5] [i_5] [i_6] [i_7] [i_5] = min(10947797017415158116, (min(10947797017415158116, 1951568091532052402)));
                                arr_27 [0] [i_5] [i_5 - 1] [i_5] [8] = var_2;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 2; i_8 < 15;i_8 += 1)
    {
        for (int i_9 = 3; i_9 < 13;i_9 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_10 = 0; i_10 < 17;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 15;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 17;i_12 += 1)
                        {
                            {
                                arr_42 [i_12] [i_12] [i_10] [i_12] [i_8] &= ((!(((-var_3 ? (var_13 ^ var_11) : (max(var_5, var_3)))))));
                                arr_43 [i_10] = max((min(((~(arr_38 [5] [i_9] [i_9 - 1] [i_10] [i_11 + 1] [i_10] [11]))), (var_2 ^ var_11))), (min((arr_41 [i_11 + 1] [i_8] [i_8 + 1] [i_11] [i_9 + 3]), (arr_40 [i_8 - 1] [i_9 - 3] [12] [14] [i_12] [i_8 - 1]))));
                                arr_44 [i_12] [i_12] [i_12] [i_10] [i_12] [i_9] [i_8] = (((((max(var_12, (arr_30 [i_8 - 1]))) - -2778830023327573779)) >= 0));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_13 = 1; i_13 < 14;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 17;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 17;i_15 += 1)
                        {
                            {
                                arr_51 [i_8] [i_13] [i_8 - 2] [i_9 + 2] [4] = min((~var_10), ((var_13 * (min(var_11, var_4)))));
                                arr_52 [i_15] [i_9] [i_13] [10] [i_9] = max(((var_13 / ((~(arr_45 [i_15] [i_14] [2] [2]))))), ((((((arr_29 [i_15]) ? 17720103670751639631 : var_0))) ? (arr_30 [i_15]) : (((var_13 ? var_9 : (arr_28 [i_9 - 1])))))));
                                arr_53 [10] [i_9] [16] = min(((-((0 ? (arr_50 [i_8 + 1] [0] [i_13 - 1] [0] [i_15]) : 10274287086277177854)))), (min(var_11, (var_12 >= 17720103670751639631))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 17;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 17;i_17 += 1)
                    {
                        {
                            arr_60 [i_8] [i_9] [i_16] [12] [i_16] [i_16] = var_2;
                            arr_61 [3] [14] [14] [4] = (((max(2, -7103807146765154353)) > (min((arr_45 [i_8 + 2] [1] [i_8] [i_8 + 2]), ((4114752195803976763 & (arr_55 [i_16])))))));
                            arr_62 [i_8] = var_3;
                            arr_63 [i_8] [i_8] [i_16] [i_17] = ((arr_35 [i_17]) ? (((((((arr_33 [1]) ? var_11 : (arr_30 [i_17]))) > var_5)))) : (arr_50 [i_8] [8] [i_9] [i_17] [i_17]));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_18 = 2; i_18 < 16;i_18 += 1)
                {
                    for (int i_19 = 1; i_19 < 14;i_19 += 1)
                    {
                        {
                            arr_70 [i_8] [i_9] [i_18] [i_19] = arr_28 [i_9];
                            arr_71 [i_19 + 1] [i_9] [3] [12] = (((((((((arr_68 [i_8] [15] [16] [i_8 - 2] [15]) ? (arr_30 [i_8]) : (arr_45 [11] [i_9] [9] [i_19])))) ? (arr_41 [i_8 - 1] [i_19] [i_18 + 1] [i_19 + 2] [i_19 + 1]) : (min(var_8, var_9))))) || 4203620754171774416));
                            arr_72 [9] [i_19] [i_18] [i_19] = var_12;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
