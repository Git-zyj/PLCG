/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117537
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_12 -= var_2;
        var_13 = (254 * 0);
        var_14 = 3003936028254134726;
        var_15 *= var_5;
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_16 ^= (arr_0 [i_1]);
        var_17 *= 2;
        var_18 = ((var_7 != (arr_2 [i_1])));
        arr_4 [i_1] [i_1] = (((!((((arr_3 [i_1] [9]) * 29027))))));
    }
    var_19 = ((-((var_11 | ((min(var_6, 255)))))));
    var_20 = var_7;
    #pragma endscop
}
