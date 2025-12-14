/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189339
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
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        var_20 = ((var_0 ? ((32753 ? 4195231526 : var_15)) : var_17));
                        var_21 = (((((27619 ? (arr_9 [i_0] [i_0] [i_3]) : (arr_6 [i_0] [i_2] [i_2])))) ? var_4 : (arr_4 [i_1] [i_2] [i_3])));
                        arr_11 [i_2] [i_2] = ((~(var_19 + var_11)));
                    }
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        var_22 = (min(var_22, ((min((arr_9 [i_0] [i_1] [7]), ((780069065 ? ((var_3 ? var_6 : var_6)) : var_19)))))));

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            var_23 += (arr_14 [i_0] [i_5] [i_0] [i_0] [i_2] [i_4] [8]);
                            var_24 = (arr_4 [12] [i_1] [i_2]);
                            arr_16 [i_0] [i_0] [i_0] [i_0] [i_2] = (((arr_1 [i_2]) ? ((((var_12 == (arr_8 [i_2] [i_2] [i_2] [i_4]))))) : (arr_5 [i_2] [i_4] [i_5])));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            var_25 = var_12;
                            arr_20 [i_6] [i_2] = (((arr_3 [i_0]) ? (arr_3 [i_1]) : var_19));
                            arr_21 [i_0] [i_0] [i_2] [i_2] = (arr_17 [i_0] [i_1] [i_1] [i_2] [i_4] [i_6]);
                        }
                    }
                    var_26 ^= (arr_17 [i_2] [i_0] [i_1] [i_0] [i_0] [i_0]);
                }
            }
        }
    }
    var_27 = (max(((((max(-13888, 192))) ? var_10 : (32640 + 599156807))), -var_13));
    var_28 = (((((3405105732 ? 4087132521834141726 : 0))) && var_0));
    var_29 = 32764;
    #pragma endscop
}
