/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176394
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_11 = (min(var_11, (((2305841909702066176 ? (arr_6 [i_1 + 1] [i_1 - 2] [i_1 - 2] [i_2]) : (arr_6 [i_1 - 1] [i_1 - 2] [i_1 - 2] [i_2]))))));
                    var_12 = var_4;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_13 = var_4;
                                var_14 = (max(var_14, (arr_12 [i_0] [i_0] [i_2] [i_3 - 1] [i_4] [i_0])));
                            }
                        }
                    }
                    arr_13 [i_0] [i_1] [i_1] [i_2] = ((!(arr_5 [i_0] [i_1] [i_2])));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 0;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {
                        var_15 = (min(var_15, (((+((~((max((arr_20 [i_0] [i_5] [i_6] [i_6]), var_8))))))))));
                        arr_22 [i_6] [i_6] [i_0] = ((~(((!(((var_9 ? (arr_8 [i_0] [0] [0] [i_7] [i_5]) : (arr_1 [i_0] [i_0])))))))));
                        var_16 = (min((arr_1 [i_0] [i_5]), (2305841909702066181 << 0)));
                    }
                }
            }
        }
        var_17 = ((var_7 ? var_5 : (max((((var_9 ? var_10 : (arr_14 [i_0] [i_0] [i_0])))), (min((arr_3 [i_0] [i_0] [i_0]), (arr_2 [i_0] [i_0])))))));
    }

    for (int i_8 = 1; i_8 < 14;i_8 += 1)
    {
        var_18 *= (arr_24 [1] [1]);
        var_19 = arr_0 [1];
    }
    #pragma endscop
}
