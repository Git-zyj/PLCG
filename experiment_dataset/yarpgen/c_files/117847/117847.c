/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117847
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= ((((max((min(-524288, 524287)), -524287))) ? (((var_3 / 524287) / (min(131071, var_2)))) : 1));
    var_17 = (((var_14 != (0 < 21324))));
    var_18 = (max((1040187392 > var_2), 21324));
    var_19 = var_12;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_20 = (((320464624 >= -111) / ((36027697507336192 ? var_0 : (arr_1 [i_0])))));
        var_21 = var_3;
    }
    #pragma endscop
}
