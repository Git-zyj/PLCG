/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167391
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, (((var_7 ? var_15 : (max(((min(var_7, var_12))), (max(var_17, var_10)))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_20 *= (arr_1 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_21 = ((-(arr_5 [i_1] [i_0])));

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        var_22 = (arr_9 [i_0] [i_1 - 1] [i_1 - 1]);
                        var_23 ^= (arr_6 [i_3] [i_2] [i_1] [i_0]);
                        var_24 -= ((~(arr_1 [i_3])));
                        var_25 |= (arr_6 [i_3] [i_2] [i_1] [i_0]);
                    }
                    for (int i_4 = 2; i_4 < 10;i_4 += 1)
                    {
                        var_26 -= var_6;
                        var_27 = ((~(arr_12 [i_4] [i_1] [i_0])));
                        arr_14 [i_0] [i_2] = (arr_6 [i_0] [i_0] [i_0] [i_0]);
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        var_28 |= (max(128, -15));
        arr_18 [i_5] = arr_17 [i_5] [i_5];
        var_29 = (min((arr_16 [i_5]), var_17));
        var_30 = (min((min(-1, -15)), ((max(var_13, (arr_15 [i_5]))))));
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        arr_23 [i_6] = (max((((!((max((arr_20 [i_6] [i_6]), (arr_22 [i_6]))))))), (min((arr_20 [i_6] [i_6]), ((~(arr_17 [i_6] [i_6])))))));
        var_31 = (max(var_31, ((max((arr_20 [i_6] [i_6]), ((-(arr_16 [i_6]))))))));
    }
    var_32 = var_9;
    #pragma endscop
}
