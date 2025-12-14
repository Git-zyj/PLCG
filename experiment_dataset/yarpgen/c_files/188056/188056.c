/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188056
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_14 = (min((((max(0, (arr_7 [i_2] [i_2] [i_2] [i_2]))))), ((1073741824 / ((var_10 ? -3006 : 9223372002495037440))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_15 = (((173534728 ? 9223372002495037440 : 9223372002495037440)) | (!var_11));
                                arr_16 [i_2] [i_1] [i_2] [i_3 - 1] [i_4] = ((((max((min(var_2, var_9)), (((!(arr_0 [i_2]))))))) ? -1498084438 : (arr_0 [i_3 - 2])));
                            }
                        }
                    }
                    arr_17 [i_0] [i_1] [i_2] = (min((((var_11 ? (arr_8 [i_2] [i_2] [i_1] [i_0]) : (-527420735 >= -708325796590307539)))), ((var_8 ? (var_3 ^ var_8) : (9223372002495037440 % 1)))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 20;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        {
                            var_16 &= 33119;
                            var_17 |= (var_2 && 65535);
                            arr_28 [i_5 - 2] [i_6] [i_6] [i_7] [i_8] = (((((arr_25 [i_7] [i_5]) ? (var_7 ^ var_11) : (arr_14 [3] [19] [i_7] [i_8] [i_8]))) > var_6));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 21;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        {
                            var_18 = (min((max((arr_27 [i_10] [10] [10] [i_5 - 1]), (var_1 * 13))), (max(0, ((max(var_12, 8190)))))));
                            arr_34 [6] [i_10] = ((70 ? (((((9223372036854775807 ? 129 : 1))) ? var_11 : var_6)) : ((min(((17 ? 1047552 : 31)), ((max((arr_21 [i_5 + 1] [i_6] [i_9]), 1))))))));
                            arr_35 [i_10] [i_5 - 2] [i_6] [i_9] [i_10] [i_10] = 1;
                            arr_36 [i_5 - 2] [1] [i_10] [i_10] = 134184960;
                            arr_37 [i_10] [18] = (max((((var_10 ^ var_9) << (((((arr_33 [i_5 - 2] [i_6]) + 1221399338)) - 35)))), 6));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
