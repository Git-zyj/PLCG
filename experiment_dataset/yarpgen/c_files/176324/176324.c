/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176324
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= (((((((min(13662728745459329682, (-32767 - 1)))) ? ((var_4 << (var_13 - 3216812528))) : -318278111))) ? (((!((max(var_5, var_5)))))) : -var_11));
    var_15 = var_6;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = min(((max(var_0, (arr_0 [i_0])))), (((!(((var_10 / (arr_1 [i_0]))))))));
        var_16 *= (((~((var_7 ? (arr_1 [i_0]) : (arr_1 [i_0]))))));
        arr_3 [i_0] [i_0] = ((~(((arr_1 [i_0]) ? 13662728745459329682 : var_8))));
    }
    #pragma endscop
}
