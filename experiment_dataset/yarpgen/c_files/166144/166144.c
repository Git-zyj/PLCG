/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166144
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -69565272;
    var_15 = -69565249;
    var_16 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_17 = 2748250578;
                arr_5 [i_1] = -69565269;
                var_18 = ((~(min(var_6, (arr_0 [6] [i_1])))));
                var_19 = (min(var_19, ((min(1935837699, (((130818227 >= (min(-581140905, 4611686018293170176))))))))));
                var_20 = (min(var_20, ((((((3017318834 ? 69565272 : 816720530))) - -3729956027937863643)))));
            }
        }
    }
    #pragma endscop
}
