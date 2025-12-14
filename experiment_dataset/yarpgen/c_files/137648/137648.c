/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137648
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((1 ? (((30456 > var_2) ? (max(var_4, var_15)) : (~var_15))) : (((-(2147483647 == var_15))))));

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_17 = var_1;
            var_18 &= (-28342 && 2147483647);
        }
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            var_19 *= (((((2147483647 == (max((-2147483647 - 1), (-2147483647 - 1))))))) / (9223372036854775807 & 2147483647));
            var_20 = ((~((-(min(var_5, var_14))))));
        }
        var_21 = ((((-(((arr_0 [i_0]) / -9223372036854775807)))) >> (var_8 - 6581)));
    }
    var_22 = (min((min((min(var_12, var_4)), ((min(var_11, (-9223372036854775807 - 1)))))), var_9));
    var_23 *= 958666900;
    var_24 ^= (~1988062591);
    #pragma endscop
}
