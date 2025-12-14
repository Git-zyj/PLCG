/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158592
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_13 ? (max((((var_5 ? 49152 : 49152))), var_9)) : 20812));
    var_15 = var_13;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_16 -= var_9;

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_17 += ((((max(var_12, 20812))) ? ((max((arr_0 [i_0]), (arr_0 [i_0])))) : ((min((arr_1 [i_1] [i_0]), (arr_0 [i_0]))))));
            /* LoopNest 2 */
            for (int i_2 = 4; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            var_18 += (arr_7 [i_4] [i_1] [7] [i_1]);
                            arr_13 [i_3] [i_3] [i_2] [i_1] [i_3] = var_8;
                            var_19 = var_5;
                        }
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            arr_16 [0] [i_3] [i_3] [i_3] [i_5] [0] = (arr_4 [i_2] [i_2 + 1] [i_2]);
                            var_20 *= (arr_8 [i_0] [i_1] [3] [8] [6] [i_0]);
                            arr_17 [i_0] [i_1] [i_0] [i_3] [i_3] [i_1] = (arr_8 [i_5] [i_3] [i_2] [i_1] [i_0] [i_0]);
                            arr_18 [i_3] [i_3] [i_2] [i_2] [i_0] = 796236486;
                            var_21 = (max((arr_6 [i_5] [i_2] [i_2]), (max((max(var_9, var_3)), ((((arr_9 [i_0] [i_1] [i_2 + 1] [i_0] [i_1] [i_0]) ? var_10 : (arr_15 [i_0]))))))));
                        }
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            arr_22 [i_0] [i_0] [i_3] [i_0] = min((((((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? var_13 : var_13)))), (min(17910, 126)));
                            arr_23 [i_6] [i_3] [4] [i_1] [i_3] [i_0] = (min((max(((max(-1, 88))), (arr_11 [i_3]))), ((max(((var_2 | (arr_15 [i_2]))), ((-666981506 ? -2 : (arr_0 [i_3]))))))));
                            var_22 &= (max(47632, (arr_8 [i_0] [i_1] [i_2 - 4] [i_3] [i_0] [i_1])));
                        }

                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            var_23 -= (arr_0 [i_3]);
                            arr_27 [9] [9] [i_3] = ((((min((arr_1 [i_0] [i_0]), (arr_19 [i_2] [i_2 - 4] [i_2 - 4] [i_2 + 1] [i_2])))) ? (arr_8 [i_0] [i_1] [i_2] [i_3] [i_0] [0]) : (arr_11 [i_3])));
                            arr_28 [i_7] [i_1] [i_1] [i_3] [i_7] &= var_4;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
