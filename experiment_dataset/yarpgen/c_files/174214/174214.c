/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174214
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;
    var_11 -= 3871189154;
    var_12 = (((((((min(var_8, var_0))) ? (max(3871189147, 1329698005)) : -var_0))) ? (var_2 / var_8) : (((~var_8) ? (min(var_6, var_4)) : var_9))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 6;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                {
                    var_13 -= (arr_2 [i_2]);

                    for (int i_3 = 3; i_3 < 9;i_3 += 1)
                    {
                        var_14 = (min(-20838, (arr_7 [i_2 + 2] [i_2 - 2] [i_2 + 2])));
                        var_15 = ((-63 ? var_1 : ((((!(arr_4 [1]))) ? (arr_8 [i_0] [i_0] [i_0] [i_0]) : (arr_2 [i_0])))));
                        var_16 = ((~(arr_0 [2] [5])));
                    }

                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        var_17 = ((((((arr_8 [4] [4] [i_2] [6]) > 3871189157))) / ((var_7 ? ((-17 ? (arr_7 [i_0] [i_0] [i_0]) : 155)) : ((var_7 ? 155 : var_9))))));

                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            var_18 *= ((var_0 ? (((!(((var_6 ? (arr_4 [i_0]) : 15283804836321221230)))))) : (arr_12 [i_2] [i_2] [i_2] [i_1])));
                            var_19 = var_3;
                            var_20 = 8;
                            var_21 *= (min(-20848, (max(var_2, 160))));
                        }
                        arr_17 [i_1] [i_0] [i_1] [9] [i_2 - 1] [i_4] = var_7;
                    }
                    var_22 = -21;
                    arr_18 [i_0] [i_1] [i_2] = max((arr_13 [i_2 + 1] [i_2] [i_1] [i_1] [i_0] [i_0]), ((max((arr_11 [0] [i_1] [i_1] [i_0]), (arr_13 [i_2 - 1] [1] [i_1] [i_1] [8] [1])))));
                }
            }
        }
    }
    #pragma endscop
}
