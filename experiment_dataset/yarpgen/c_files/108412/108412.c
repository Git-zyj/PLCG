/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_0 || (((24 ? 31334 : 8989101321954177312)))));
    var_12 = ((0 ? 1 : 79));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_13 = ((1 ? (((arr_3 [i_0 + 4] [i_0 + 2] [i_0 + 1]) ^ 22)) : ((30673 ? 10 : -9323))));
                var_14 = (max(var_14, var_1));
            }
        }
    }
    var_15 = var_1;
    #pragma endscop
}
