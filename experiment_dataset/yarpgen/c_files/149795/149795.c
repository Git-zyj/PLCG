/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149795
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_16 = ((((max(var_5, (!var_11)))) && (63 && 17244337750433634920)));
                var_17 = ((-(arr_1 [i_1])));
            }
        }
    }
    var_18 = ((-(((5402980397294182435 > var_7) << (6374470494506414037 - 6374470494506414017)))));
    #pragma endscop
}
