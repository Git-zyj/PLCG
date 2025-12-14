/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120374
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max((~245128244), 165));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            {
                var_11 = (min(var_11, ((151 | (~-3612)))));
                var_12 = (((max(151, 2560283660)) | 85));
            }
        }
    }
    var_13 *= 78;
    #pragma endscop
}
