/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160352
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((-((max(var_11, var_11))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                var_15 = (min(var_15, (((var_5 | ((((var_7 ? var_13 : var_4)))))))));
                var_16 = 1;
            }
        }
    }
    var_17 = (-(--26211));
    #pragma endscop
}
