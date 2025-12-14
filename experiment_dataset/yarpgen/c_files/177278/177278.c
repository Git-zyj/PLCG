/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177278
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (((var_12 ? ((~((min(18431, -18438))))) : 37122)))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = (((var_13 != (!var_11))) && (28414 * 28405));
        arr_3 [i_0] = -18438;
        arr_4 [9] [i_0] = (!117);
    }
    var_15 = var_9;
    var_16 = (((((var_2 ? var_4 : var_10)) | 8514)));
    #pragma endscop
}
