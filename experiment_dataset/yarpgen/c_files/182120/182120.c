/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182120
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_19 = (max(var_19, (606603971447460334 + 264241152)));
                arr_4 [i_1] = 47435;
            }
        }
    }
    var_20 = var_0;
    var_21 = 1;
    #pragma endscop
}
