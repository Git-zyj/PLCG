/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178985
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    var_20 = (max(var_20, (((-((((((arr_4 [i_0] [i_1] [i_2]) ? var_16 : (arr_6 [i_0] [4])))) ? (arr_7 [i_2] [4] [i_0 + 1]) : (~var_13))))))));
                    var_21 = (((((arr_7 [i_0 + 1] [i_2 - 1] [i_2 - 2]) ? (arr_7 [i_2 - 1] [i_1] [i_0]) : (arr_7 [i_0 - 1] [1] [i_0 + 1]))) - (arr_7 [i_0] [i_1] [6])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_3] [i_4] = 110;
                                var_22 = (max(var_22, (((((!(arr_8 [i_1] [i_1] [i_2 - 2] [i_1]))) && 22)))));
                                var_23 = (((((((min(1, 2147483647))) ? (((arr_7 [i_2] [i_3] [i_4]) ? 1 : 1)) : var_4))) ? var_5 : (min((arr_5 [i_2] [i_2] [i_2 - 2]), (((1 / (arr_7 [i_4] [i_2] [i_2]))))))));
                                arr_14 [i_0 + 1] [i_1] [i_0 + 1] [i_3] [i_4] = ((!(!32767)));
                            }
                        }
                    }
                    arr_15 [i_0 + 1] [i_1] [i_2] = (!var_6);
                }
            }
        }
    }
    var_24 = ((((1 ? (75 + var_14) : ((var_5 ? var_4 : var_4)))) * var_17));
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                {
                    var_25 = (min(var_25, ((((((23963 ? 902213950 : -1810059607))) * (((arr_21 [i_7] [i_5] [i_7]) ? (arr_21 [i_5] [0] [i_5]) : (arr_21 [i_7] [i_5] [i_7]))))))));
                    var_26 = ((1 ? (((var_13 - ((min(1, var_5)))))) : ((((((arr_16 [6]) ? 1 : (arr_21 [i_6] [i_6 - 1] [i_7])))) ? (((max((arr_18 [i_6 + 2] [i_5]), 1)))) : 1309475488))));
                }
            }
        }
    }
    var_27 = var_6;
    #pragma endscop
}
