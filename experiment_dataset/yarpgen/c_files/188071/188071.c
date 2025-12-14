/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188071
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (!var_8);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                {
                    arr_10 [i_2 + 1] [1] [i_0] = max((((16237314474399142450 & -1) & 63)), (((!(arr_1 [12])))));
                    arr_11 [i_0] [i_1] [i_2 + 1] [5] = ((!((min((max(224, 0)), ((156 ? 262588939 : var_8)))))));
                    arr_12 [i_0] [i_0] [9] = (max((arr_4 [i_2 - 2]), ((((arr_4 [i_2 - 1]) ? (arr_4 [i_2 - 3]) : (arr_4 [i_2 - 1]))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            {
                var_15 += (min((((1 <= 4) ? var_9 : (var_1 < 18446744073709551612))), (arr_13 [i_4])));
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            arr_24 [i_4] [i_3] [i_3] = 1486110291;

                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 12;i_7 += 1)
                            {
                                var_16 = ((!(arr_19 [i_5 - 2] [i_3])));
                                arr_27 [i_3] [i_4] [i_4] [i_7] [i_7] [i_6] = (arr_6 [i_6]);
                                arr_28 [11] [11] [1] [i_3] [i_3] = (((!var_9) ? var_8 : var_6));
                                var_17 = var_11;
                            }

                            for (int i_8 = 0; i_8 < 12;i_8 += 1)
                            {
                                arr_33 [i_3] [i_3] [i_3] = (arr_8 [i_3] [i_5 + 1] [i_8]);
                                var_18 = (max(1, -3515998486270198485));
                                var_19 *= (((!18446744073709551611) == ((max(var_12, var_9)))));
                                var_20 = 1;
                            }
                            for (int i_9 = 0; i_9 < 12;i_9 += 1)
                            {
                                arr_36 [i_3] [i_4] [6] [i_3] [i_6] [i_9] = (arr_30 [i_3]);
                                arr_37 [i_3] [i_4] [i_5 + 1] [i_3] = min(1413732206, ((((((arr_20 [i_3] [i_4] [4] [i_6]) ? -125 : (arr_0 [i_4])))) ? (((min(var_7, 111)))) : var_12)));
                            }
                            for (int i_10 = 0; i_10 < 12;i_10 += 1)
                            {
                                arr_42 [i_3] [i_4] [6] [i_6] [9] = (arr_20 [i_3] [i_4] [1] [i_4]);
                                var_21 &= ((~(((arr_32 [i_6] [i_3 - 1] [i_5 - 1]) ? var_1 : (arr_4 [i_5])))));
                                var_22 = (!var_4);
                                var_23 &= ((((!(arr_21 [i_10] [i_3 - 1] [i_3] [i_5 + 2]))) ? ((max(var_2, (arr_22 [i_4])))) : ((max(var_0, (arr_22 [i_4]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = (((((min(var_3, var_7)))) * ((var_4 ? var_8 : var_5))));
    #pragma endscop
}
