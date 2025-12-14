/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104782
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_1, (max(((981272325 ? var_13 : var_2)), (~0)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_7 [1] [i_1] = (max((65535 - 65525), 36));

                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        arr_10 [i_0] = 0;
                        var_18 = (max(var_18, (arr_9 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 + 1])));
                        var_19 = 3313694970;
                        arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] = (((arr_6 [i_3]) | (0 >= 47243442)));
                    }
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {

                        for (int i_5 = 1; i_5 < 21;i_5 += 1)
                        {
                            var_20 = (max(var_20, (arr_8 [i_1] [i_1])));
                            arr_17 [i_0] [i_1] [21] [i_0] [i_5] = -106;
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_21 &= (((((arr_1 [i_0] [i_0]) ? var_15 : var_14))) ? (((arr_1 [i_0] [i_4]) ^ (arr_1 [i_0] [i_0]))) : (((arr_1 [i_0] [i_1]) ? (arr_1 [i_2] [i_6]) : (arr_1 [i_0] [i_1]))));
                            var_22 = (arr_13 [i_0] [i_1] [i_2] [i_4] [i_2]);
                            var_23 = (((((max((arr_6 [23]), 0)) << (((max((arr_18 [i_4] [i_1] [7] [1] [i_6]), var_4)) - 4294967253)))) | var_2));
                        }
                        var_24 = 65535;
                        arr_20 [5] = (arr_2 [18]);
                    }

                    for (int i_7 = 4; i_7 < 24;i_7 += 1)
                    {
                        var_25 = (max(65525, (((!(arr_15 [i_7 + 1] [23] [i_7 - 1] [i_7 - 2] [i_7 - 3]))))));
                        arr_23 [i_2] = ((((((arr_9 [i_7] [i_7] [i_7 - 4] [i_0] [i_0]) > 3313694970))) << (((arr_9 [i_2] [i_7 - 2] [i_7 + 1] [i_2] [i_1]) - 1797462077))));
                    }
                }
            }
        }
    }
    var_26 ^= ((((max(var_10, var_9)) > (var_2 && 511))) ? (((((var_11 ? var_0 : var_12))) ? (!var_7) : (max(var_2, var_14)))) : (max(2170012828, var_2)));
    #pragma endscop
}
