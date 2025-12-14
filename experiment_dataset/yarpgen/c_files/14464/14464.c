/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((~(var_13 | 90)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = 22;
                var_20 *= (!20);
                var_21 = (var_3 * (var_6 * 32766));
            }
        }
    }
    var_22 = -1;
    #pragma endscop
}
