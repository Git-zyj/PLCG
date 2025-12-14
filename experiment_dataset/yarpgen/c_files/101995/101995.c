/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101995
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (-var_1 ? var_8 : ((var_5 ? var_2 : var_9)));

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = (max((((arr_2 [i_0 - 1]) ? (arr_2 [i_0 + 1]) : var_7)), (!65280)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_3] [i_0] [i_3] [5] [18] = (min(((var_4 >> (((max(var_6, var_6)) - 1054570118)))), (((max(-893896916, (arr_10 [i_3] [13] [i_2] [i_2] [i_3]))) ^ (-127 - 1)))));
                                arr_16 [13] [i_1] [i_2] [i_3] [i_3] = var_11;
                                var_13 = (max(var_13, (((~(max((((arr_2 [i_1]) | 127)), var_9)))))));
                                arr_17 [i_0] [i_3] [i_3] = arr_0 [i_0 - 1];
                            }
                        }
                    }
                    var_14 = -603646179;
                    arr_18 [i_0] = (arr_7 [i_0] [i_1] [i_0] [i_0 - 1]);
                }
            }
        }
        var_15 = (((!(arr_4 [i_0] [i_0 - 1] [i_0]))));
    }
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        var_16 = max((min((arr_9 [i_5] [i_5] [12] [i_5]), (arr_14 [i_5] [i_5] [i_5] [i_5] [i_5] [1] [i_5]))), ((((arr_19 [i_5]) < (arr_19 [i_5])))));
        var_17 = (min(((-(((!(-127 - 1)))))), (arr_21 [i_5] [i_5])));
    }
    var_18 = ((+(((~488743805) - 22))));
    #pragma endscop
}
