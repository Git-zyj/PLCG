/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((~(((~var_9) ? (!239) : (var_5 ^ var_4)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] [i_0] = -31281;
                arr_6 [i_0] [i_0] = (arr_0 [i_0]);
            }
        }
    }
    #pragma endscop
}
