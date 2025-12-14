/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120310
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_12 = (max(var_12, 58));
                    var_13 = var_3;
                }
            }
        }
    }
    var_14 = (min(var_14, ((max(((max(-4096, (var_1 | var_7)))), (max(-var_9, (min(var_3, var_8)))))))));
    var_15 = var_8;
    var_16 *= (((var_0 < 4294967285) < (((!(-11507 <= 16921677968333456360))))));
    #pragma endscop
}
