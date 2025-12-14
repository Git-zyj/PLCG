/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_11 = (min(var_11, ((!((min(2103221100019553934, 59913)))))));
                arr_6 [i_0] [i_0] [i_1] = (((((arr_5 [i_0 + 2] [i_1]) ? var_0 : (arr_3 [i_0 - 1])))) ? (max(18134004566434903342, -1312119098018047328)) : (arr_0 [i_0 + 1] [i_1]));
                var_12 = (min(var_12, (((max(6147092062874956934, (min((arr_5 [i_0] [i_1]), (arr_2 [i_1 - 1])))))))));

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    arr_9 [i_2] [i_1] = (min((((-2499806156547913382 + 9223372036854775807) << (((((arr_5 [i_0] [i_1 + 1]) + 2161277870636373599)) - 57)))), -var_3));
                    var_13 = (min((!-var_10), (max((max((arr_0 [i_1] [i_1]), 65535)), (((var_8 ? (arr_7 [i_0] [i_0] [i_0] [i_2]) : (arr_4 [i_1]))))))));
                }
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    var_14 = -9231;
                    arr_12 [i_0] = var_10;
                    arr_13 [i_0] [i_0 + 2] [i_0] [i_0] = -8606194831098133358;
                    var_15 = 94;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 3; i_4 < 7;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            {
                arr_20 [i_5] = (arr_7 [i_4] [i_4] [i_4] [i_4]);
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        {
                            arr_25 [i_6] [i_6] [i_6] [i_6] = (arr_4 [i_4]);
                            arr_26 [i_5] [i_6] = min((((-(arr_2 [i_4 + 1])))), var_5);
                            var_16 = (((((((!(arr_11 [i_4 - 1] [i_4 - 1])))))) ? (arr_17 [i_7]) : ((((!((((arr_4 [i_5]) ? var_6 : (arr_22 [i_4] [i_5] [i_6] [i_4]))))))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
