/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105602
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((~(~var_7)));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_4 [11] = ((!(!var_12)));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            arr_8 [i_1] = (((arr_3 [i_1]) ? -5011165645769521815 : var_7));
            arr_9 [i_0] [i_0] |= (~var_1);
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        arr_16 [i_0] [i_0] [i_0] = var_1;
                        arr_17 [i_0] [i_1] [9] [i_1] [i_3] [i_3] = (arr_11 [i_0] [i_1] [i_1]);
                        arr_18 [i_3] [i_1] [i_1] [i_1] [i_0] = ((5011165645769521803 && (~-11484)));
                        arr_19 [i_0] [i_1] [i_0] [i_1] [i_0] [i_0] = (((-5011165645769521815 - -5011165645769521830) << (arr_10 [i_1])));
                        arr_20 [i_0] [i_1] [i_2] [i_1] = -7493;
                    }
                }
            }
        }
        for (int i_4 = 1; i_4 < 22;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    {
                        arr_31 [i_0] [8] [i_6] [i_0] = (((max((arr_29 [i_0] [3] [i_5] [i_6] [i_5] [i_5]), var_10)) >= ((min(-1025729893, 7492)))));
                        arr_32 [i_0] [i_4] [i_6] [i_4] = 15442;
                        arr_33 [i_6] = 7492;
                    }
                }
            }
            arr_34 [i_0] [i_0] [i_0] = (((((229 & ((1423898747 ? var_0 : 1699490796))))) ? (arr_27 [i_4] [5] [i_4] [i_4] [i_4]) : ((((arr_23 [i_4 - 1]) / (arr_0 [i_4] [i_4]))))));

            for (int i_7 = 2; i_7 < 23;i_7 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 24;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 24;i_9 += 1)
                    {
                        {
                            arr_45 [i_7] [0] [i_9] = ((var_7 >= ((var_1 ? (arr_21 [i_4 + 1] [i_7 - 2]) : (arr_21 [i_4 + 1] [i_7 - 1])))));
                            arr_46 [i_0] [17] [5] [i_0] [i_8] [i_0] = (min(var_7, var_1));
                            arr_47 [i_9] [i_0] [i_8] [i_7 - 1] [i_0] [i_0] = ((-((((min(84, var_8))) / var_4))));
                            arr_48 [i_0] [i_8] [i_7] [14] [i_8] [i_8] [i_9] = arr_30 [i_0] [i_4] [i_8] [i_9];
                            arr_49 [i_0] [i_4] [i_7] [i_8] [i_0] = (var_10 ? ((-5011165645769521814 / ((min(15467, -299934306))))) : 7492);
                        }
                    }
                }
                arr_50 [23] [i_7 + 1] = (((min(((((arr_43 [12]) && 2461467297227299451))), (((arr_30 [i_0] [i_0] [i_4] [i_7]) ? 2952072668524349630 : 2595476499)))) | (1905581689 | 67)));
                arr_51 [i_0] [i_4] [i_7 - 1] [i_4] = ((((max(13217, (arr_26 [i_4 + 1] [i_4 + 1] [i_7] [i_7])))) <= ((~(~169)))));
            }
            for (int i_10 = 2; i_10 < 23;i_10 += 1) /* same iter space */
            {
                arr_55 [i_0] [i_10] [i_10] = 1765681181;
                arr_56 [i_0] [i_4 - 1] [i_10] = (max(65434, ((var_9 ? var_12 : 136))));
                arr_57 [i_0] [i_4] [i_0] = -1025729893;
            }
        }
        arr_58 [i_0] = -5011165645769521815;
        arr_59 [19] [i_0] = ((((min((arr_6 [i_0] [i_0]), -1931869065))) && (((~(arr_40 [i_0]))))));
    }
    #pragma endscop
}
