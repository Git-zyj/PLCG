/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138452
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_17 = (min((((!(arr_0 [i_0] [i_1])))), (min((arr_0 [8] [i_1]), var_9))));
                var_18 = (638134059 * 3656833257);
            }
        }
    }
    var_19 = (min(var_6, 3656833224));
    var_20 = var_12;
    var_21 = var_2;
    #pragma endscop
}
