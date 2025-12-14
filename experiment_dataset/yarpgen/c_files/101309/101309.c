/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101309
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            arr_4 [2] [i_0] = 764200770017593187;
            var_15 = var_5;
            var_16 ^= ((65 + (arr_1 [i_0 + 2])));
        }
        arr_5 [i_0] = ((((!28097) - (arr_1 [i_0 - 1]))));
        arr_6 [i_0] = 15761508142616852295;
    }
    for (int i_2 = 1; i_2 < 16;i_2 += 1)
    {
        var_17 = (((arr_9 [i_2]) < var_12));
        var_18 = (arr_1 [i_2 - 1]);
    }
    var_19 = var_12;
    #pragma endscop
}
