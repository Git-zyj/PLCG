/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122232
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                arr_8 [i_0] [i_1 + 1] = -1;
                var_20 = ((+(max((arr_3 [i_1] [i_1 + 1]), 1))));
                arr_9 [i_0] [i_0] [i_0] = (max((((arr_4 [i_1 + 1] [i_1 + 1] [i_1 + 1]) - (arr_4 [i_1 + 1] [i_1 + 1] [i_1 + 1]))), (arr_4 [i_1 + 1] [i_1 + 1] [i_1 + 1])));

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    arr_12 [i_0] [5] [i_2] [i_1] = ((max(1, (arr_5 [i_1] [6] [i_1 + 1]))));
                    var_21 &= ((((((min(12778773853739969676, -2121558277)) | (((var_12 ? -11083 : var_1)))))) ? (((arr_0 [i_0]) + (arr_7 [2]))) : (((arr_4 [i_0] [i_0] [i_0]) - 1686512092))));
                }
                for (int i_3 = 1; i_3 < 13;i_3 += 1)
                {
                    var_22 = ((7701738506076327926 ? (((arr_11 [i_3 - 1] [i_1 + 1]) ? (arr_11 [i_3 - 1] [i_1 + 1]) : (arr_11 [i_3 + 1] [i_1 + 1]))) : (arr_11 [i_3 + 2] [i_1 + 1])));

                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        var_23 = ((-((((arr_13 [i_1 + 1]) && (arr_13 [i_1 + 1]))))));

                        for (int i_5 = 1; i_5 < 11;i_5 += 1) /* same iter space */
                        {
                            var_24 = var_17;
                            arr_21 [i_0] [i_0] = ((-((~(((!(arr_2 [i_4]))))))));
                            arr_22 [i_0] [i_0] [i_1] [i_3] [i_4] [i_1] [i_0] = (arr_6 [i_5 + 3]);
                        }
                        for (int i_6 = 1; i_6 < 11;i_6 += 1) /* same iter space */
                        {
                            var_25 = 1;
                            arr_26 [i_0] [i_1] = 120;
                            var_26 ^= (arr_10 [i_0] [i_1] [i_0] [i_4]);
                            var_27 |= var_18;
                        }
                        arr_27 [1] [i_4] = (((arr_3 [i_1 + 1] [i_1 + 1]) ? ((min((arr_23 [i_1 + 1] [i_3] [i_1 + 1] [i_1 + 1] [i_3 - 1]), 65535))) : (((!(arr_23 [i_1 + 1] [i_1 + 1] [i_1] [i_1] [i_3 + 2]))))));
                    }
                    arr_28 [0] [0] = (max((arr_17 [i_3] [i_3] [i_3] [2] [2] [i_3 + 2]), (arr_13 [i_1 + 1])));
                    var_28 = ((!(arr_23 [i_0] [3] [i_0] [i_1] [i_3])));
                }
            }
        }
    }
    var_29 = ((((((var_7 > 1) ? ((var_2 ? var_12 : 30686)) : (var_11 >> 1)))) ? ((1 ? var_19 : (!var_3))) : (((var_18 ? (111 * 1) : (!9371))))));
    var_30 = ((((min(((var_2 ? var_8 : var_7)), var_4))) ? (((((min(185, var_4))) | var_1))) : -var_7));
    var_31 ^= (var_9 < var_15);
    #pragma endscop
}
