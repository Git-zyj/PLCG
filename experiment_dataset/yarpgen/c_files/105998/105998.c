/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (var_16 && 95);
    var_18 = var_9;
    var_19 = -var_2;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((!(~var_4)));
                var_20 = (min(((min((!7707550466373155577), (!127)))), 7707550466373155577));
            }
        }
    }
    #pragma endscop
}
