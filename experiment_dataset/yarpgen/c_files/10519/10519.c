/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10519
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
                var_12 -= ((((max(65535, (arr_4 [i_0])))) == ((((arr_6 [i_0] [i_1]) < 5269)))));
                var_13 = var_0;
                var_14 = ((var_9 ? (((65535 && var_4) ? 29102 : -23622)) : var_1));
            }
        }
    }
    var_15 -= var_8;
    var_16 = ((((((max(21632, 19035))) ? ((max(43913, 42090))) : var_11)) << (var_1 - 9070)));
    var_17 &= (((var_4 / 36434) * (((~42090) ? ((max(29102, var_9))) : var_4))));
    #pragma endscop
}
