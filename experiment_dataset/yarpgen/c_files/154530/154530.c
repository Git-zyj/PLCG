/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154530
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_3] [i_0] [i_0] [i_0] [i_0] = ((~(((var_3 == (arr_1 [i_3] [i_3]))))));
                                arr_16 [i_4] [i_2] [i_2] [i_2] [i_0] = min((arr_5 [i_0] [i_1] [i_3] [i_4]), ((((arr_5 [i_0 - 1] [i_1] [10] [15]) == (arr_5 [i_4] [i_3] [i_2] [i_1])))));
                                arr_17 [i_0] [14] [i_1] [i_0] [i_3] [i_4] = ((((arr_13 [i_0] [i_0] [i_2 + 1] [i_2 - 1]) ? (arr_13 [i_1] [i_1] [i_1] [i_2 + 1]) : (arr_14 [i_2 - 1] [i_2 + 2] [i_2 + 1] [i_2] [i_0 - 1]))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 1;i_6 += 1)
                    {
                        {

                            for (int i_7 = 2; i_7 < 22;i_7 += 1)
                            {
                                arr_26 [i_0] [i_1] [i_5] [i_6 - 1] [i_5] = ((!(((((max((arr_3 [i_1] [i_5]), var_2))) ? ((max((arr_8 [i_0] [i_0] [i_0] [i_6 - 1] [i_6 - 1] [i_0]), (arr_2 [i_0] [i_1] [i_0])))) : (((arr_6 [i_1] [i_1]) * (arr_2 [i_0] [i_5] [i_7]))))))));
                                arr_27 [i_7] [i_7] [i_7] [i_7] [i_7 + 1] [i_7 - 1] [i_7] &= var_4;
                            }
                            for (int i_8 = 0; i_8 < 23;i_8 += 1)
                            {
                                arr_31 [19] [19] [i_5] [i_6] [i_8] = (((arr_11 [i_0] [i_8] [i_0]) + ((278146600240910549 ? (arr_25 [i_0 - 2] [i_0 - 2] [14] [i_5] [i_6] [i_8]) : var_11))));
                                arr_32 [i_5] [i_8] = ((((((max((arr_5 [i_0] [i_1] [i_5] [i_6]), var_1))) ? ((278146600240910562 ? (arr_19 [i_0]) : 18168597473468641066)) : (arr_3 [i_0 - 2] [i_0 - 1]))) <= ((((max(var_3, var_12)))))));
                                arr_33 [i_0] [i_1] [i_0] [i_6 - 1] [i_6 - 1] &= (max(var_11, ((((278146600240910549 ? 18168597473468641054 : 164)) ^ (arr_20 [i_8] [i_5] [i_1])))));
                                arr_34 [i_0] [i_1] [i_5] [i_6] = var_11;
                            }
                            arr_35 [i_0 - 1] [i_0 - 1] [i_1] [i_5] [i_6] = (min((~var_9), (((-57 / 31) ? ((var_0 ? (arr_28 [2] [i_1] [i_1] [i_5] [i_5] [i_6 - 1] [i_5]) : (arr_9 [i_6]))) : (((max(var_5, 8404))))))));
                        }
                    }
                }
                arr_36 [i_1] = (((-(arr_21 [i_0 - 2]))));
                arr_37 [i_0 + 2] = ((-var_8 ? ((((var_7 ? (arr_24 [i_0 + 3] [i_0 + 3] [i_0 - 1] [i_1] [i_1] [i_0 + 3] [i_1]) : 278146600240910549)) * (18168597473468641080 + var_0))) : (((-18168597473468641080 ? -var_2 : -19)))));
            }
        }
    }
    var_13 |= (max(((~((max(var_2, var_2))))), ((((278146600240910549 && var_7) < var_2)))));
    var_14 = ((var_3 < (((var_4 == (var_10 && var_9))))));
    var_15 = (max((((!var_10) ? ((var_4 ? var_6 : var_2)) : (!var_8))), ((min((max(var_2, var_6)), (max(var_4, var_9)))))));
    #pragma endscop
}
