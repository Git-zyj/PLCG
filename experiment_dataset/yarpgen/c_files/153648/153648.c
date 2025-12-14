/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153648
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                arr_4 [5] = var_9;
                arr_5 [6] [i_1] [i_0] = 8191;
                var_20 = ((((-(min(var_16, -20)))) * ((((arr_2 [i_0]) <= (!var_9))))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    arr_8 [i_0] [i_0] [i_0] = 1473921164262292966;
                    arr_9 [0] [0] [i_2] [i_2] = (((!var_5) || (((var_10 ? var_5 : var_12)))));
                }
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    var_21 -= (((max(var_9, (var_14 * 32764))) != ((max(((-(arr_0 [i_0]))), ((var_1 ? -49 : var_1)))))));
                    arr_13 [14] [14] [8] [i_1] = ((((((arr_1 [i_1 + 1] [i_1 - 1]) ? (arr_1 [i_1 - 1] [i_1 - 1]) : var_13))) ? ((((var_12 ? (arr_12 [i_0] [i_0] [i_3] [i_0]) : var_6)) / (((min(32751, (arr_3 [i_0] [0] [i_0]))))))) : ((((!(arr_7 [12] [i_0])))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 16;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            {
                var_22 = (min(var_17, ((~((var_7 ? var_2 : (arr_14 [i_4])))))));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 14;i_7 += 1)
                    {
                        {

                            for (int i_8 = 3; i_8 < 15;i_8 += 1)
                            {
                                arr_26 [i_4] [i_5] [i_6] [i_4] [1] = ((-(min(9205357638345293824, -2687))));
                                arr_27 [i_4 - 1] [i_5] [i_6] [i_7] [i_8 + 1] = (!-16);
                            }
                            for (int i_9 = 1; i_9 < 14;i_9 += 1)
                            {
                                arr_30 [i_4] [i_5] [i_9] [i_4] [i_4] [i_5] [i_9] = ((!(arr_15 [i_4] [12])));
                                var_23 = (min(var_23, var_17));
                                arr_31 [i_4 - 1] [i_9] [i_6] = (min(((~(min(var_14, (arr_16 [i_4 + 1] [i_5]))))), (((((~(-32767 - 1))) / 15910)))));
                                var_24 = ((!((((min((arr_21 [i_4 + 1] [i_6] [7] [i_9]), (arr_15 [i_4] [0])))) >= ((var_13 ? 9205357638345293824 : 15900))))));
                            }
                            arr_32 [16] [3] [i_6] [i_6] [13] = ((((arr_19 [i_7 - 1] [i_4 + 1] [i_7 - 1]) ? 26576 : 32767)));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_10 = 0; i_10 < 0;i_10 += 1)
                {
                    for (int i_11 = 3; i_11 < 15;i_11 += 1)
                    {
                        for (int i_12 = 3; i_12 < 14;i_12 += 1)
                        {
                            {
                                var_25 = ((((max(51, var_4)))));
                                var_26 = ((((((arr_16 [6] [i_4 + 1]) || (arr_40 [i_4 + 1])))) << (!var_6)));
                            }
                        }
                    }
                }
                var_27 += -3368525477;
            }
        }
    }
    #pragma endscop
}
