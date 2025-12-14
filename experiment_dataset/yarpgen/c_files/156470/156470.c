/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156470
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            {
                var_12 = ((30484 ? 63 : 2233866141));
                arr_4 [9] [i_0] [i_0] = (min(var_6, (((var_2 && ((min(148228939, var_8))))))));
                var_13 = (((~var_9) <= var_1));
            }
        }
    }
    var_14 = (min(var_7, var_9));
    var_15 |= var_8;
    #pragma endscop
}
