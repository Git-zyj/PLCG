/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136584
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, (var_7 / var_1)));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] |= (((36250 / 36250) ? 29313 : 64));

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_12 = (min((((64620 - (36263 % 29309)))), (((max(-519790324, var_3)) / (0 ^ var_3)))));
            arr_6 [i_0] [i_0] [i_0] = ((((((((-2579059873870012567 + 9223372036854775807) << (var_2 - 7768038994070883778)))))) == var_3));
            var_13 = ((~(((281474909601792 - 281474909601796) - -var_7))));
        }
    }
    #pragma endscop
}
