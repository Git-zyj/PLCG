/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176642
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += var_11;
    var_19 -= var_7;
    var_20 = var_17;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_21 += 1747173647;
                            var_22 ^= 1076538777;
                            var_23 = (min(0, 27179));
                        }
                    }
                }
                var_24 -= var_1;
                var_25 = (arr_11 [i_1] [i_1]);
            }
        }
    }
    var_26 = (max(42, (~128)));
    #pragma endscop
}
