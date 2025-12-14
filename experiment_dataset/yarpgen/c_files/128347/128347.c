/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128347
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_18 = (min(var_18, (((min((arr_3 [i_0 - 4]), (arr_4 [i_0 - 4] [i_0 - 2]))) - ((((arr_8 [i_0 - 1] [i_1 + 2] [i_1] [i_1] [i_1 - 1] [i_1 - 2]) * var_3)))))));
                            arr_11 [i_0] [i_1] [i_3] [i_3] = (((arr_2 [i_0] [i_0] [i_0]) ? ((var_10 - (min(131071, 60550)))) : ((((((arr_0 [i_0] [i_0]) ? var_8 : (arr_4 [i_0] [i_2]))))))));
                            arr_12 [i_0] [i_1 - 1] [i_3] [i_2] [i_2] [i_0] = (min(((+(min((arr_7 [i_0] [i_0] [i_0] [i_0] [7]), var_11)))), ((max((arr_0 [i_0 - 1] [i_0 + 3]), (arr_0 [i_0 + 3] [i_0 - 2]))))));
                            var_19 = (max(var_19, ((min((((arr_4 [i_1] [i_3]) >= (-131073 + 11869201901741913862))), ((!((!(arr_10 [i_0 + 3] [i_0 + 3] [i_0 + 3] [i_3] [i_2] [i_0 - 2]))))))))));
                            arr_13 [i_0 + 3] [i_3] [i_0] [i_0] [i_0] [i_3] = ((((arr_2 [i_0 + 1] [i_0 + 1] [i_1 - 1]) % (arr_1 [i_0]))) & (((((max(4294967295, 19635))) ? (arr_2 [i_0 - 2] [i_0] [i_0]) : 65535))));
                        }
                    }
                }
                arr_14 [i_0] = (((max(var_6, var_5)) - (min(-131071, 3965520164866855486))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        for (int i_5 = 3; i_5 < 11;i_5 += 1)
        {
            {
                var_20 += ((((!(arr_2 [i_5 - 1] [i_5 + 1] [i_5 - 2]))) ? (((arr_7 [i_5 + 1] [i_5 + 2] [i_5 + 2] [i_5 - 1] [i_5 - 3]) ? (arr_2 [i_5 - 2] [i_5 + 1] [i_5 - 3]) : (arr_2 [i_5 + 1] [i_5 - 3] [i_5 - 2]))) : ((max((arr_2 [i_5 - 3] [i_5 - 2] [i_5 - 2]), (arr_7 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5] [i_5 + 2]))))));
                var_21 = ((~(((arr_3 [i_4]) / (arr_3 [i_4])))));
                var_22 = ((!((max((arr_15 [i_5 - 1] [i_4]), 312768626)))));
            }
        }
    }
    #pragma endscop
}
