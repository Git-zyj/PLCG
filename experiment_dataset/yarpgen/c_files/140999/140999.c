/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140999
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_16 = (max(var_16, (((((86 ? ((var_4 ? var_1 : var_3)) : (((((arr_0 [i_0] [i_1]) <= (arr_3 [i_0] [i_0] [i_1])))))))) ? (min(var_9, (arr_3 [i_1] [i_1] [i_1]))) : 39319))));
                var_17 = (((min(7567813473187686383, -106)) >= -1));
            }
        }
    }
    var_18 += 393216;
    var_19 = (min(var_19, ((((max((~393216), ((-186254371029151445 ? 8909263385930995571 : var_9)))) * 632589813)))));
    #pragma endscop
}
