/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155287
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_8;
    var_17 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 6;i_1 += 1)
        {
            {
                var_18 = (((536608768 % 34359738368) ? (max((min((arr_0 [i_0]), 219561100)), (((arr_0 [i_0]) / var_7)))) : (((((arr_1 [i_0]) <= ((576460748008456192 ? 576460748008456192 : 452138795))))))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_19 = (min(var_19, ((((((arr_1 [i_0]) % (arr_4 [i_0] [i_2])))) ? (((arr_1 [i_3]) ? (arr_4 [i_0] [i_1 + 4]) : (arr_4 [i_2 - 1] [i_2]))) : (((arr_1 [i_1 + 3]) ? (arr_4 [i_0] [i_0]) : (arr_4 [i_1 + 2] [i_3])))))));
                            var_20 |= var_13;
                        }
                    }
                }
            }
        }
    }
    var_21 = (var_5 ? var_12 : var_14);
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 22;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            {
                var_22 |= (-452138815 != 13835058055282163712);

                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    var_23 = ((var_8 % (((!(((arr_15 [i_4] [i_5] [i_4]) == var_11)))))));

                    for (int i_7 = 1; i_7 < 20;i_7 += 1)
                    {
                        var_24 = (((min(((max(64, 224))), (arr_17 [i_7] [16])))) ? 452138795 : ((-13835058055282163712 ? 64 : 61)));
                        var_25 += var_8;
                        var_26 *= ((var_8 ? (((arr_16 [i_7] [i_5] [i_5]) ? ((var_13 ? (arr_13 [i_5]) : var_11)) : (arr_18 [i_4 - 1]))) : (arr_20 [14] [i_5] [i_5] [i_7])));
                    }
                }
                arr_23 [i_4] [i_5] [i_5] = ((2046794926193884733 < ((((!(((74 ? var_15 : 33546240)))))))));
                var_27 = ((arr_12 [i_5]) & var_14);
            }
        }
    }
    #pragma endscop
}
