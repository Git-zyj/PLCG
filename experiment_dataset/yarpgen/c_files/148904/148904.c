/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148904
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= (!var_9);
    var_11 = max(var_7, ((827138953 ? -256120249 : -256120249)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {
                var_12 = -2135218822;
                var_13 = (arr_2 [i_0] [i_0]);
            }
        }
    }
    #pragma endscop
}
