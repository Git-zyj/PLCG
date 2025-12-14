/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150758
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        var_20 = (((((+(((arr_2 [i_0]) ? 0 : var_8))))) ? ((((arr_0 [i_0]) / (arr_1 [i_0])))) : var_11));
        var_21 = 2470114586;
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        var_22 = ((((1824852709 ? ((min((arr_11 [i_1] [i_2] [14] [14] [14] [i_1]), (arr_7 [i_3] [i_2] [i_1])))) : ((-(arr_11 [i_1] [i_1] [i_1] [i_1] [i_4] [i_4]))))) % (arr_9 [2] [9] [i_2] [i_4])));
                        var_23 = (max(var_23, ((min((((1465964522 != ((var_5 ? (arr_8 [i_1] [i_2] [i_3] [i_4]) : (arr_6 [i_1])))))), (arr_10 [i_2] [i_4]))))));
                    }
                }
            }
        }
        var_24 = ((2470114587 ? (~1) : ((1 ? var_10 : 1))));
    }
    var_25 = (((var_16 + var_1) ? (~var_8) : (((!(((var_12 & (-2147483647 - 1)))))))));
    var_26 = var_14;
    #pragma endscop
}
