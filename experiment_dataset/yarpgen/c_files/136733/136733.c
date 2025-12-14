/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136733
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_15 = (max(var_15, 34995));
                arr_8 [i_0] [i_0] [i_0] = (arr_4 [i_1] [i_1] [i_1]);
            }
        }
    }
    var_16 = ((((min(((39 ? -32743 : var_10)), ((min(111, -101)))))) ? (max(var_12, 642189607)) : var_4));
    var_17 += ((min((max(-24525, var_1)), (!var_12))));
    #pragma endscop
}
