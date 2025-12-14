/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142485
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((((max(1, 50373))) * 0)) >> (((!(793529322301216642 / var_6))))));
    var_17 = var_1;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] |= ((((175856074 / 175856074) << ((((min(127, var_14))) - 108)))));
        var_18 = (min(((((max(18388922155673296795, -7690635512049288542))) ? (10856518428269105568 * 241) : ((var_15 ? (arr_2 [i_0] [i_0]) : 1081887422)))), (1 / var_4)));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_19 = ((((((var_0 || var_7) % 22))) - (max((min(5, var_1)), (var_3 && var_10)))));
        arr_8 [i_1] = (min((((arr_2 [i_1] [i_1]) << (!7690635512049288542))), ((-(max(65409, 13873286288233798057))))));
    }
    #pragma endscop
}
