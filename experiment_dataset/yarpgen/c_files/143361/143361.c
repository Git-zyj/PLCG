/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143361
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, var_13));
    var_18 = (((max(var_10, (var_5 || var_5)))));
    var_19 = (((9264 < 6) & 1992898532));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_20 = (min(var_7, (((!var_15) ? -46136 : (((arr_5 [i_0]) ? (arr_4 [i_0 - 1] [i_1 - 1]) : var_8))))));
                var_21 *= ((9268 * (((!(arr_0 [i_0 + 1]))))));
            }
        }
    }
    #pragma endscop
}
