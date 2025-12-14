/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123601
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= (~0);

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_14 = ((-4096 ? 30 : 3250628076));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] = ((arr_3 [i_0 - 2]) ? (max((((var_3 ? (arr_4 [i_1 - 1]) : (arr_0 [i_2] [9])))), -3328518441430419065)) : (!-6632307401808076652));
                    var_15 = (max(var_15, (((1 ? var_6 : -10111011360914883737)))));
                    var_16 = (((!1) * (min(((100 ? var_6 : var_5)), 0))));
                    arr_9 [i_1] = var_2;
                }
            }
        }
    }
    for (int i_3 = 1; i_3 < 22;i_3 += 1)
    {
        var_17 = ((((max(10111011360914883741, -891455031811509754))) ? -4415649126724023667 : ((min(277006758, -19958)))));
        arr_12 [i_3] = (min((arr_10 [i_3 - 1] [i_3 + 2]), (arr_10 [i_3 + 1] [i_3 + 1])));
    }
    var_18 += var_1;
    var_19 = ((!((((var_12 & var_11) ? var_6 : var_7)))));
    #pragma endscop
}
