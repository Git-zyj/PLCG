/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132301
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = max(1, (max(var_3, ((max(var_11, 1))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_16 |= (max((1 + 6646225668154604072), var_4));
                    var_17 = ((!(~var_4)));
                }
            }
        }
    }
    var_18 = var_9;
    var_19 = var_0;
    var_20 = var_7;
    #pragma endscop
}
