/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163475
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_11 = ((-((1 ? (arr_6 [i_0] [i_0] [i_1]) : (1 & 0)))));
                var_12 += 1;
            }
        }
    }
    var_13 = (var_4 && var_8);
    var_14 = (max(((max((!-13), (!var_5)))), var_2));
    #pragma endscop
}
