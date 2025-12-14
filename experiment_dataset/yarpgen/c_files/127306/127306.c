/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127306
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_18 = min((((arr_3 [i_0]) ? (var_16 / -14051) : ((-674361946512904244 ? 23 : var_11)))), ((min(var_8, 1))));
                var_19 = (arr_2 [i_1] [i_1]);
                var_20 = ((!((!(((var_1 ? 674361946512904243 : var_8)))))));
                var_21 = -14055;
            }
        }
    }
    var_22 = (((min((~var_0), ((var_5 ? -8536482060572166818 : var_12))))) ? (((~var_9) ? ((2862885776557385146 ? 674361946512904259 : 9513861398337743022)) : (var_4 >= var_7))) : var_4);
    #pragma endscop
}
