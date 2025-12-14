/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133575
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_20 = (arr_2 [i_0] [i_0] [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_21 = (min(((min((min((arr_1 [i_0] [i_1]), (arr_3 [i_1]))), (max((arr_3 [i_0]), (arr_9 [i_0] [14])))))), ((~((min(0, 1)))))));
                            var_22 = ((!(arr_7 [i_3 - 1] [i_3] [i_0] [i_3 - 1])));
                        }
                    }
                }
                var_23 = (arr_5 [i_0] [i_0]);

                for (int i_4 = 2; i_4 < 14;i_4 += 1)
                {
                    arr_12 [i_0] [i_1] [i_0] [i_0] = ((((-(arr_10 [i_0] [i_0] [i_0]))) % ((min(-18, 1)))));
                    var_24 = ((!((min((arr_6 [i_4] [i_4 - 2] [i_4 - 2]), (arr_7 [i_4 + 1] [i_4 - 1] [i_0] [i_4]))))));
                }
                var_25 = (arr_7 [i_0] [i_0] [i_0] [i_1]);
            }
        }
    }
    var_26 = (min(var_26, var_17));

    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        var_27 += ((+(((arr_13 [i_5]) - (arr_14 [8])))));
        arr_16 [i_5] = ((~(min((arr_7 [i_5] [i_5] [i_5] [i_5]), (arr_7 [i_5] [i_5] [i_5] [i_5])))));
        arr_17 [i_5] = (max(((((arr_8 [i_5]) != (arr_6 [i_5] [i_5] [i_5])))), ((-(arr_6 [i_5] [i_5] [i_5])))));
        var_28 *= max(((((arr_9 [i_5] [0]) >> (((arr_9 [i_5] [12]) - 12003))))), (arr_7 [i_5] [i_5] [12] [i_5]));
        arr_18 [i_5] [i_5] = (arr_3 [i_5]);
    }
    for (int i_6 = 0; i_6 < 17;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            for (int i_8 = 3; i_8 < 15;i_8 += 1)
            {
                {
                    var_29 ^= (((min((arr_26 [i_6] [i_7] [i_8 - 2]), ((-(arr_24 [i_6] [i_7] [i_8 + 1]))))) - (arr_24 [i_7] [i_7] [i_7])));
                    arr_29 [14] [i_7] [i_8 - 3] [i_7] &= (arr_27 [0] [i_7]);

                    for (int i_9 = 3; i_9 < 14;i_9 += 1)
                    {
                        arr_34 [i_6] [i_6] = (max(52772, 1556090798));
                        var_30 = (min(var_30, ((max((max((arr_24 [i_9 + 2] [i_9 - 1] [i_8 - 2]), (arr_24 [i_9] [i_9 + 1] [i_8 + 1]))), (max((arr_24 [i_9] [i_9 - 3] [i_8 - 2]), (arr_24 [i_9] [i_9 - 1] [i_8 - 1]))))))));
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 17;i_10 += 1)
                    {
                        var_31 ^= (~(arr_31 [i_8 - 1] [6] [i_8] [i_8 + 1] [i_8]));
                        arr_39 [i_6] = (~(arr_23 [i_8 - 3] [i_8 - 3]));
                    }
                }
            }
        }
        var_32 = (arr_23 [i_6] [i_6]);
        var_33 = (min((((~(arr_20 [i_6])))), (min((arr_35 [i_6] [i_6] [i_6] [i_6]), (arr_35 [i_6] [i_6] [i_6] [i_6])))));
    }
    var_34 = (max(var_34, (((~((min((max(var_9, var_4)), var_0))))))));
    #pragma endscop
}
