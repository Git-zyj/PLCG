/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138917
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, var_16));
    var_19 = var_9;
    var_20 = -2062736252;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_21 = (max((max((min(-1846686640, 2062736252)), (min(-50, -186890000)))), ((21699 ? (arr_0 [i_2]) : (arr_0 [i_0])))));
                    arr_9 [i_1] = arr_7 [i_0] [i_1] [i_1];
                }
            }
        }
        var_22 = (((arr_7 [i_0] [i_0] [i_0]) | (min((min(186890000, 16177897399730170028)), (arr_2 [i_0])))));
    }
    var_23 = (max(var_9, (((39 & var_12) ? -186890000 : (-64 ^ var_16)))));
    #pragma endscop
}
