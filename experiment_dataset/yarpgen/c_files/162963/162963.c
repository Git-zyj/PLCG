/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162963
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_10, (min(var_7, ((-1659492805710154090 ? var_7 : -1))))));
    var_18 = max((max(var_14, 0)), (!var_13));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_19 -= var_4;
                    var_20 = (min((((arr_6 [i_2] [i_1 - 1] [i_1 + 1]) ? 255 : (arr_6 [i_2] [i_1 - 1] [i_1 - 1]))), -28643));
                    arr_7 [i_0] [i_1] [i_2] [i_0] = (((max(1, -96))) ? ((max(0, 36893))) : ((var_3 ? (arr_0 [i_1 + 1]) : 0)));
                    var_21 = (((((var_9 ? 4686101423569492407 : 77))) ? ((var_10 ? 255 : (((arr_2 [i_0]) ? var_7 : var_4)))) : (!-var_9)));
                }
            }
        }
    }
    #pragma endscop
}
