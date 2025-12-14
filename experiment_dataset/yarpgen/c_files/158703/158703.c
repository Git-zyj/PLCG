/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158703
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_15;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_21 = -4170578256814121474;
                var_22 = ((max((arr_1 [i_1]), 4170578256814121478)));
            }
        }
    }
    var_23 = (min(var_23, (((((max(-9223372036854775807, 18610))) != (((var_16 ? 6533497327028217285 : (max(var_14, var_3))))))))));
    var_24 = (max((!var_6), var_9));
    #pragma endscop
}
