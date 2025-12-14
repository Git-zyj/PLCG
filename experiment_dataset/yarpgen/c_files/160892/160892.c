/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160892
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (11912219991451215312 != 11912219991451215299);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_12 = (!1);
                    var_13 = (max(var_13, (((-(((!(arr_2 [i_1 + 1] [i_1 + 1] [i_1 + 1])))))))));
                    arr_6 [i_0] [i_0] [i_2] = (((((arr_1 [i_2]) ? (arr_1 [i_2]) : (arr_1 [i_1 + 1]))) | 65509));
                    var_14 = (max((min(11449305699229821079, (arr_4 [i_2] [i_1 + 1] [i_0] [i_0]))), (((~6534524082258336303) * ((((!(arr_5 [i_0] [i_0] [i_2] [i_2])))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_15 = ((((((arr_12 [i_0] [i_0] [i_2]) << (((arr_12 [i_0] [i_0] [i_0]) - 6542308120669191237))))) ? (max((arr_12 [i_0] [i_0] [i_2]), 3272198354022915121)) : (arr_12 [i_3 - 2] [i_1 + 1] [i_0])));
                                var_16 = ((+((((((arr_5 [i_0] [i_0] [i_3] [i_0]) ? var_6 : 1)) == (((arr_9 [i_0] [i_0] [i_0]) ? var_8 : (arr_1 [i_0]))))))));
                                var_17 = (max(var_17, (arr_9 [i_0] [i_0] [i_0])));
                                var_18 = (((1 > 3300150335) ? (arr_4 [i_0] [i_0] [i_0] [i_3 - 2]) : (((((arr_4 [i_0] [i_0] [1] [i_3 + 2]) != 1))))));
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] = ((+((var_8 << (((((arr_10 [i_4] [i_3] [i_0] [8] [i_0]) ? var_8 : var_8)) - 98))))));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_5 = 1; i_5 < 21;i_5 += 1)
    {
        arr_16 [i_5] = (((var_0 > var_0) ? (((!((min(var_0, 65518)))))) : var_2));

        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            arr_19 [i_5] = (((arr_15 [i_6]) - ((max(-15804, 1865380171)))));
            var_19 = (min((arr_14 [i_5]), var_6));
            arr_20 [i_5 + 3] [i_5 + 3] [i_5] = (((((127 ? var_0 : 65535))) ? ((((max(var_0, var_4))) ? (-32767 - 1) : (arr_18 [i_5] [i_6]))) : ((1 ? (max(3664337868599899840, (arr_14 [i_5]))) : (((var_6 ? var_4 : (arr_14 [i_5]))))))));
            arr_21 [i_5] = (max((arr_15 [i_6]), ((~(arr_18 [i_5 + 3] [i_5 - 1])))));
            arr_22 [i_5] = (min((var_5 >= 1), ((~(arr_18 [i_5] [i_5 + 1])))));
        }
        var_20 = (((arr_14 [i_5]) ? ((min(var_8, (max(1, var_7))))) : 1));
    }
    var_21 = var_6;
    #pragma endscop
}
