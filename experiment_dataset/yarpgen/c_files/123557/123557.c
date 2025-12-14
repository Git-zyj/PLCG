/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123557
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((!((min((arr_2 [i_1]), 19)))));
                arr_5 [i_0] [i_1] = (min(-3718, -105));
                arr_6 [15] [15] [i_1] |= (~-var_0);
            }
        }
    }
    var_13 = (min(var_13, var_12));
    var_14 |= (~-5279299470024134102);
    #pragma endscop
}
