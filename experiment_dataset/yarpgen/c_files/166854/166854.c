/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166854
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (~6652090038368944485);
    var_19 = (min(var_19, -6652090038368944486));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 -= ((max(((min(41255, (arr_3 [i_0])))), (max(6435351409542911547, 6435351409542911548)))));
                var_21 = ((-((6435351409542911555 / ((7443874644194496289 ? 180 : 112))))));
                var_22 = (max((((arr_3 [i_1]) ? (arr_0 [i_0]) : var_16)), (arr_0 [i_0])));
            }
        }
    }
    #pragma endscop
}
