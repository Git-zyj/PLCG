/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132059
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_14 = (max(var_11, (((arr_2 [i_1] [i_0 - 1]) ? ((((arr_3 [i_0 + 2] [i_0 + 2] [i_0 + 2]) / (arr_0 [i_1])))) : 3097762853))));
                var_15 = (max(((+(min((arr_3 [i_0] [i_1] [i_1]), 3097762853)))), (((1197204442 - -102706073) * (arr_3 [i_0] [i_1] [i_1])))));
            }
        }
    }
    var_16 = (~6912116917621306611);
    #pragma endscop
}
