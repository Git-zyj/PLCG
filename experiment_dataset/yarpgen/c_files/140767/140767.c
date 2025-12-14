/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140767
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_7 [1] [i_1] [i_2] [i_2] &= (min((((55484 ? 0 : 10))), var_8));
                    arr_8 [i_0] = ((((min(-271885100, 0))) ? (arr_5 [i_0] [8] [7] [2]) : (((min((arr_6 [i_0] [i_1]), (arr_6 [i_0] [i_1])))))));

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            var_17 = 3848213455351320774;
                            var_18 &= (arr_4 [i_3 - 1] [i_1]);
                            var_19 = (arr_3 [i_3 + 1] [i_3] [3]);
                        }
                        var_20 = (100 * 0);
                        arr_15 [i_0] [i_1] [i_2] [i_2] = (arr_13 [i_3 + 1] [i_3] [i_3 + 1] [i_2] [i_1]);
                    }
                }
            }
        }
    }
    var_21 = (((4881936891016298566 ? ((var_6 ? -2147483625 : 65535)) : ((var_1 ? var_7 : var_8)))));

    /* vectorizable */
    for (int i_5 = 2; i_5 < 22;i_5 += 1)
    {
        var_22 = var_11;
        var_23 = (arr_17 [12] [i_5]);
        var_24 &= ((~(var_9 ^ var_9)));
        arr_20 [i_5] [i_5] = (((arr_18 [i_5 - 2]) * (arr_18 [i_5 + 1])));
    }
    var_25 = (max(var_25, var_16));
    var_26 -= (min(((((min(var_14, var_2))) ? ((68 ? var_12 : var_13)) : var_1)), var_3));
    #pragma endscop
}
