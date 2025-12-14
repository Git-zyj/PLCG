/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138259
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_11;
    var_19 = (max(var_19, -90));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = (arr_1 [1] [i_1]);
                var_20 = (min(var_20, ((max((((var_1 || 90) ? -114 : ((min(-90, 113))))), 12225)))));
                arr_7 [i_0] [i_0] = -114;
                var_21 = -90;
            }
        }
    }
    #pragma endscop
}
