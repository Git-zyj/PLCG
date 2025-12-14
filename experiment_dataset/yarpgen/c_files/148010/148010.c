/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148010
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max((((var_13 >= ((11862 ? var_1 : var_9))))), ((var_12 ? (var_2 / 102) : (var_12 * var_5)))));
    var_17 -= max(((((max(var_12, 118))))), var_1);
    var_18 = (((((((240 ? 11 : var_5)) * 1))) ? ((max(((19 << (4523258566991365354 - 4523258566991365341))), var_8))) : (((min(var_15, 237)) ^ -var_9))));

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        var_19 ^= (((max((arr_0 [i_0]), (((arr_2 [i_0]) * (arr_2 [i_0 - 2]))))) == var_13));
        var_20 = (((~var_7) + (((((((arr_1 [i_0 + 1] [i_0 - 1]) >= (arr_2 [i_0]))))) - var_1))));
    }
    #pragma endscop
}
