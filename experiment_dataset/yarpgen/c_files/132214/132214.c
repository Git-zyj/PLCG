/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132214
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1 + 3] = (((min(var_13, 0)) >> (((arr_4 [i_0] [i_1 + 1]) - 30603))));
                var_21 = (((min(((var_4 + (arr_3 [i_1 + 2]))), (arr_3 [i_0]))) / var_6));
                var_22 = (+(((arr_3 [i_1]) / (arr_0 [i_0]))));
                var_23 += (((~var_15) ? -32 : 18));
            }
        }
    }
    var_24 = (max(var_24, (!var_5)));
    var_25 = ((~(!var_12)));
    var_26 = ((~((((var_10 ? var_18 : var_14)) | (var_7 | var_7)))));
    #pragma endscop
}
