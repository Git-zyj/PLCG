/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163360
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((((min(7, 84))) ? (min(var_11, var_2)) : var_5)) / var_0));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_16 = (min((max(var_1, (arr_0 [i_0 - 2]))), ((min(((min(-22556, 0))), (~49175))))));
                arr_4 [i_1] [i_1] [i_1] = (min((88 | 18374686479671623680), ((~(~16717779512607934758)))));
                var_17 = (max(var_17, (((202 ? 15 : 126)))));
                arr_5 [i_1] = ((max((var_7 / 48), 745166131345295352)));
            }
        }
    }
    #pragma endscop
}
