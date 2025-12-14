/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118348
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((!(2858077143208963221 & var_11)));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        var_17 = ((max(32767, -8105)));
                        var_18 = (max((((arr_1 [i_0] [i_3]) ? (min(var_12, (arr_0 [i_0] [i_0]))) : 8112)), (arr_10 [i_2] [i_3])));
                        var_19 = (((var_1 ? (arr_6 [10] [i_1] [5] [i_2]) : (arr_8 [i_0] [i_0]))));
                        arr_12 [i_0] [i_1] [i_0] [0] = arr_5 [i_0] [i_1] [i_0];
                        var_20 = (((arr_10 [i_1] [i_3]) ? (arr_8 [i_3] [i_0]) : (max(var_2, var_9))));
                    }
                }
            }
        }
        arr_13 [i_0] = ((-8101 ? (((!(arr_7 [i_0] [i_0])))) : ((((arr_7 [i_0] [i_0]) < var_5)))));
        var_21 = (arr_3 [i_0] [i_0] [i_0]);
    }
    #pragma endscop
}
