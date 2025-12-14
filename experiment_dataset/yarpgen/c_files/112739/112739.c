/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112739
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 4294967295;
    var_15 = 50;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [17] [i_0] [i_0] = (min(var_3, (arr_1 [i_0] [i_0])));
                var_16 = (arr_4 [i_0]);

                for (int i_2 = 2; i_2 < 23;i_2 += 1)
                {
                    var_17 = (min((((((min(-1, 1))) >> (((min((arr_6 [i_0] [i_0] [16] [i_0]), var_9)) + 6314214306807329584))))), (((((4 ? var_10 : var_1))) ? (((arr_1 [i_0] [12]) / var_0)) : (((4 / (arr_0 [i_0] [i_0]))))))));
                    var_18 = (max(var_18, (arr_3 [i_1])));
                    var_19 = (min((((((max(-1, var_11)))) / ((var_1 ? -4169304471009187307 : (arr_6 [i_0] [14] [i_0] [i_0]))))), ((max(((max(var_6, var_6))), (252 / var_1))))));
                    var_20 = (((arr_0 [i_1] [i_1]) ^ ((((!((((arr_4 [18]) ? (arr_0 [16] [16]) : var_13)))))))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    var_21 = ((((11223 ? 1073741823 : 72057594037927935))) ? ((var_6 ? -4854705664044286012 : var_1)) : (arr_8 [i_1] [13] [i_1]));
                    arr_10 [i_0] [i_1] [i_3] = var_13;
                }
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 22;i_6 += 1)
                        {
                            {
                                arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (-127 - 1);
                                var_22 |= (((((~(arr_17 [i_0] [i_0] [18] [i_0] [i_0] [i_0] [i_0]))))));
                                var_23 = (max((min((((69 ? 3221225481 : 16663))), (7047165603416437557 - var_11))), ((max(var_5, 4230782023)))));
                                arr_20 [i_4] [i_1] [i_4] = ((((((var_4 && (arr_18 [i_1] [i_4] [i_4] [i_6]))))) ^ (((!(((1073741814 ? 16664 : 0))))))));
                                arr_21 [i_6] [i_5] [i_4] [i_1] [i_0] = (max(20, 5));
                            }
                        }
                    }
                    arr_22 [i_0] [i_1] [i_4] = ((var_0 - (((min(var_4, (arr_4 [i_4])))))));
                    arr_23 [i_0] [i_0] [i_0] [i_0] = (((((arr_3 [i_0]) || -1)) ? -9223372036854775804 : var_0));
                    var_24 = 2636754520807972550;
                }
            }
        }
    }

    for (int i_7 = 1; i_7 < 12;i_7 += 1)
    {
        arr_26 [i_7] = 23697;
        arr_27 [i_7] [11] = ((max(((var_12 ? (arr_11 [i_7] [6] [i_7]) : var_10)), ((var_4 ? var_2 : var_0)))));
        var_25 = var_12;
    }
    #pragma endscop
}
