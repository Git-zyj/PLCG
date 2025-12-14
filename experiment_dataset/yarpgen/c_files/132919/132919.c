/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132919
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, (~-668)));
    var_18 = ((-((max(var_12, (min(4096, var_14)))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                var_19 |= ((((((((min(-31217, (arr_6 [10])))) | (max(-26270, var_2)))) + 2147483647)) >> (((max(var_7, ((var_13 << (((arr_3 [1] [i_1]) - 137)))))) - 6972433753900867974))));
                var_20 = var_12;
                arr_7 [i_0] [i_1] = (min(var_10, ((-(arr_6 [i_0])))));
            }
        }
    }
    #pragma endscop
}
