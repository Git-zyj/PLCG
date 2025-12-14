/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143779
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((max(var_13, var_5)) * ((((max(var_0, 55))) ? -12 : var_4))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_18 = ((-(5137621150892327223 + -2118751131774120970)));
                    arr_9 [i_0] [i_1] [i_1] = ((-((-(arr_8 [i_0])))));
                    var_19 -= var_6;
                }
            }
        }
        arr_10 [i_0] = (((((var_2 ? 92 : 2064384))) > (arr_5 [i_0] [i_0] [i_0])));
        var_20 = (min(var_20, ((min((max(var_16, var_13)), (((!((min(var_2, -20189)))))))))));
    }
    #pragma endscop
}
