/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103313
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_17 = (min(var_17, 72));
                var_18 = ((((!(var_8 / var_1))) ? (((arr_3 [i_0] [i_1] [i_1]) ? ((var_5 ? -979255795 : (arr_3 [i_0] [i_1] [i_1]))) : ((var_11 ? var_15 : var_16)))) : ((((arr_1 [i_0]) <= -893011988)))));
            }
        }
    }
    var_19 = (max(var_15, var_10));
    #pragma endscop
}
