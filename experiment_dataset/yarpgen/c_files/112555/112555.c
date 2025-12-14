/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112555
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_4;
    var_18 = (!var_8);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    var_19 = 4294967276;
                    var_20 = (min(var_20, var_10));
                    var_21 -= ((~((25 ? 0 : (arr_5 [i_0] [i_0] [i_2])))));
                }
            }
        }
    }
    #pragma endscop
}
