/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112452
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= ((min((var_4 == 221), var_2)));
    var_13 += var_10;
    var_14 = ((221 ? 35 : 247));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_15 = var_11;
        arr_2 [9] [i_0] = var_2;
        var_16 ^= (min(28, 35));
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        var_17 = (((((arr_0 [i_1 - 1]) / (min(var_4, (arr_1 [10]))))) >= (~150)));
        var_18 = min(((min((4095 != var_10), var_4))), ((-256 ? ((1 ? (arr_5 [i_1]) : 63208)) : ((var_8 ? var_10 : 22899)))));
        arr_6 [i_1] = min((((var_11 - var_2) / (((-8482 ? 1023 : 35))))), (((1253124205 ? (!var_8) : ((2328 ? 235 : (arr_4 [i_1])))))));
    }
    #pragma endscop
}
