/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144753
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_5;
    var_12 *= ((var_5 & ((var_4 ? (min(var_4, var_2)) : -4))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_13 = ((var_3 - (arr_3 [i_0] [i_0])));
        arr_4 [i_0] = (((arr_2 [i_0] [i_0]) | (((arr_2 [i_0] [i_0]) / 287242824))));

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            arr_7 [i_0] = ((arr_3 [i_0] [i_1]) & var_10);
            var_14 = (max(var_14, -var_2));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        var_15 = (min(var_15, (((var_9 ? (((arr_12 [i_0] [i_2] [i_1] [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_10 [i_3] [i_2] [i_0]))) : ((var_0 ? (arr_6 [i_0] [7] [i_3]) : var_9)))))));
                        arr_13 [i_0] [i_1] [i_1] [i_1] [i_1] = (51926 == -8762451626286585421);
                    }
                }
            }
        }
    }
    #pragma endscop
}
