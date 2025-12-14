/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123881
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, 1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                var_15 = ((1 ? 4294967288 : (((1 ? (arr_3 [i_1] [i_1 - 2]) : 1)))));
                var_16 ^= (((((var_13 ? 4414348548764589648 : ((min((arr_4 [i_0]), 4294967295)))))) ? 4294967295 : (((max(var_9, (arr_6 [i_1 - 2] [i_1 - 3])))))));
            }
        }
    }
    var_17 = (max((~var_7), ((((1245023340 ? 1 : 15591))))));
    #pragma endscop
}
