/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168125
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((max(var_1, var_8))));
    var_12 = (max(var_12, var_0));
    var_13 = (max(var_13, var_7));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_4 [i_0] = 2243823146;
        var_14 = ((~(arr_0 [i_0] [i_0])));
        var_15 = (max(var_15, (((((min(var_9, 22))) >= var_1)))));
        var_16 = ((!(((max((arr_0 [i_0] [i_0]), var_7)) >= -18831))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_17 = ((!(((+(min((arr_5 [i_1]), (arr_5 [i_1]))))))));
        arr_7 [i_1] = var_9;
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    {
                        arr_15 [i_1] = ((~var_8) ? (arr_13 [i_4] [6] [i_2] [i_1]) : (~-18831));
                        arr_16 [i_1] [13] [5] [i_4] = (max((max((((arr_10 [i_1] [i_2]) ? (arr_9 [6] [i_4]) : (arr_8 [15] [i_4]))), (max(22, (arr_6 [i_3]))))), var_10));
                        arr_17 [i_4] = ((10 ? ((22 ? (((!(arr_10 [i_1] [i_3 - 2])))) : 255)) : (!var_2)));
                    }
                }
            }
        }
    }
    #pragma endscop
}
