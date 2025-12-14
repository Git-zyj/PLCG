/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133816
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_20 = (-4 - -1);
                var_21 = (min(-1, (min(-1, (arr_2 [i_0])))));
                var_22 = arr_1 [i_0] [7];
                var_23 -= -26;
            }
        }
    }
    #pragma endscop
}
