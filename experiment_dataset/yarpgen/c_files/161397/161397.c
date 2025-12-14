/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161397
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = (min((min(var_9, (var_9 * var_3))), ((((~var_6) >= (min(var_2, var_4)))))));
        var_10 = min((min(((min(var_0, var_6))), (min(var_1, var_1)))), (min(var_7, ((min(var_2, var_5))))));
        var_11 = (min((((var_9 > var_7) ^ (var_7 ^ var_0))), ((min(var_2, var_2)))));
        var_12 = ((var_2 - ((((min(var_1, var_7)) > (min(var_1, var_4)))))));
    }
    var_13 = (min(var_13, (((((min((var_8 <= var_2), (min(var_1, var_2))))) ? (var_6 < var_3) : (min(((min(var_4, var_4))), (min(var_7, var_8)))))))));
    var_14 = ((((274877906943 | 0) >> (((min(var_1, var_9)) - 6749295786673968477)))));
    var_15 ^= (((((!((min(var_9, var_7)))))) < var_4));
    #pragma endscop
}
