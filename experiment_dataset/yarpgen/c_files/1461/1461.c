/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1461
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [i_1] [1] [i_0] = ((-(arr_3 [i_0] [i_0] [i_0])));
                var_19 = ((((-(max(var_7, (arr_0 [0]))))) > var_13));
            }
        }
    }
    var_20 = ((-(((1236235832 | var_14) ^ ((9223372036854775794 ? -525 : var_7))))));
    var_21 = (max((~var_9), (min(var_15, var_11))));
    var_22 = ((((((var_4 ? 9223372036854775787 : var_4)) | var_17)) & ((((((max(var_16, -525)))) * (var_14 * var_9))))));
    #pragma endscop
}
