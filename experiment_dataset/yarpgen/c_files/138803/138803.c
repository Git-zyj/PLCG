/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138803
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_0] [i_1 + 1] [i_0] = (~13684);
                    var_16 = ((~((-(arr_0 [i_0])))));
                }
            }
        }
    }
    var_17 = 1;
    var_18 = ((!(((-13685 * (~-1))))));
    var_19 = (((1 / 18860) * ((((min(4, var_0))) * (var_15 / var_7)))));
    var_20 = (max(var_20, (((!(((-((min(var_9, var_14)))))))))));
    #pragma endscop
}
