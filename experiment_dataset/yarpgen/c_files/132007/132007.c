/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132007
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_11;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_20 &= var_11;
        arr_2 [i_0] = ((var_16 ? var_18 : ((var_8 ? var_3 : var_7))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            arr_9 [i_1] [i_2] = ((-(arr_0 [i_1 - 1])));
            /* LoopNest 3 */
            for (int i_3 = 2; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        {
                            arr_17 [i_1] [i_3] [i_1] = ((var_3 ? ((var_9 ? var_0 : (arr_13 [i_1] [i_1] [i_1] [i_1] [i_5]))) : var_16));
                            arr_18 [i_3] [i_4] [i_4] &= (((!var_2) + (arr_12 [i_1 - 1] [i_1 - 1] [i_3])));
                            arr_19 [i_1] = (((arr_8 [i_1]) ^ -22546));
                            arr_20 [i_1] [i_1] [i_1] = ((28733 ? var_6 : -13002));
                            arr_21 [15] [i_1] [15] = var_12;
                        }
                    }
                }
            }
        }
        var_21 = (min(var_21, var_14));
        var_22 += (arr_8 [0]);
        arr_22 [12] &= (((arr_4 [i_1 - 1]) ? (arr_16 [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1]) : (arr_15 [i_1 - 1] [i_1 - 1] [i_1])));
    }
    for (int i_6 = 0; i_6 < 14;i_6 += 1)
    {
        var_23 = 3895686089;
        var_24 = (min((((arr_5 [i_6] [i_6] [i_6]) || var_16)), ((var_7 || (!var_12)))));
    }
    #pragma endscop
}
