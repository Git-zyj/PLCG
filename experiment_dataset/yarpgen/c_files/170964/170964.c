/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170964
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_7;

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_13 = (max(var_13, (((!((min(var_4, ((max((arr_1 [16]), var_0)))))))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        arr_11 [i_0] [i_0] [i_2] [i_0] = ((!(((~(((arr_2 [i_0 + 2]) ? var_9 : (arr_6 [2] [0] [8]))))))));

                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            var_14 *= (arr_7 [i_0] [1] [i_2] [i_3]);
                            var_15 = (arr_15 [i_0 + 2] [i_1] [i_2] [i_2] [i_0 + 2]);
                            arr_16 [i_0] = (arr_9 [15] [i_4]);
                        }
                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            arr_20 [i_0] [i_5] = (max(43, (arr_0 [i_5] [10])));
                            arr_21 [19] [i_1] [i_2] [i_0] [i_5] [i_0] [19] = ((((((arr_10 [i_0] [i_0] [i_0] [i_0]) ? -44 : var_6)) | (arr_13 [i_1 + 2] [i_1 + 2] [i_0]))) >= (arr_19 [i_0] [i_1 + 2] [i_0]));
                            var_16 = ((min(var_6, (4294967295 <= var_5))));
                            arr_22 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] = (+(((10068 == var_11) - -254)));
                        }
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            var_17 *= var_1;
                            var_18 *= var_4;
                        }
                        arr_25 [i_0] = (!-22382);
                        arr_26 [i_0] [i_1] [i_1] [i_1] [i_1] [i_0] = (max(((var_11 ? (arr_5 [i_0]) : (arr_5 [i_0]))), ((((var_4 + var_4) / (((arr_12 [i_3] [i_2] [i_2] [i_0] [i_1 - 1] [i_1 - 1] [i_0]) ? var_1 : -8041723207965808577)))))));
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_19 = min(255, (arr_6 [i_7] [i_2] [i_0]));
                        var_20 = (~2906818491);
                        arr_30 [i_0] [i_0] [13] [i_2] [i_0] [i_7] = ((((max(var_1, (arr_13 [i_0] [i_2] [i_0])))) ? ((((min(var_1, (arr_7 [i_0] [18] [i_0] [i_2]))) <= (!var_5)))) : (((arr_6 [i_0 + 1] [i_1 + 3] [i_2]) ? ((457888634 / (arr_15 [i_1] [i_1] [i_2] [i_0] [1]))) : 32758))));
                    }
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        var_21 = (((!(((-(arr_29 [6] [i_0] [i_0] [i_0])))))) && (arr_0 [i_8] [18]));

                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            var_22 = (arr_7 [i_1] [i_1] [i_0] [i_8]);
                            var_23 = 29082;
                            arr_37 [i_0] [i_0] [16] [i_0 - 1] [i_0] = (1 == 281022363712578627);
                            var_24 = ((!((max((arr_2 [i_2]), 121)))));
                            arr_38 [1] [i_1 + 2] [i_0] [i_1 + 2] [i_9] = ((~(((arr_7 [i_0 + 1] [i_1] [i_0] [i_0 + 1]) + (arr_7 [i_0 + 2] [i_1 + 3] [i_0] [i_1 + 3])))));
                        }
                        var_25 += (((var_0 * var_10) ? var_8 : 231));
                    }
                    for (int i_10 = 2; i_10 < 18;i_10 += 1)
                    {
                        var_26 = -1;
                        var_27 = ((+(max((126 <= var_4), (arr_19 [i_0 + 1] [i_1] [i_0])))));
                        var_28 = (arr_7 [i_10 - 2] [i_0] [i_0] [i_0 + 2]);
                    }
                    var_29 = ((((((arr_17 [i_0 - 1]) ? (arr_17 [i_0 - 1]) : (arr_17 [i_0 - 1])))) ? ((-304589490 / (-2147483647 - 1))) : var_7));
                    var_30 = (min(var_30, ((((var_11 - var_10) ? ((var_5 ? (arr_18 [i_2] [i_1 + 1] [i_1 + 3] [i_1 + 3] [i_0 + 1] [i_2]) : var_3)) : (arr_13 [i_0 + 2] [i_0 + 2] [i_2]))))));
                }
            }
        }
        var_31 = (max(var_31, (((!(!var_2))))));
    }
    var_32 = (((var_2 <= var_4) != (min(1804655084, (max(1388148804, var_2))))));
    #pragma endscop
}
