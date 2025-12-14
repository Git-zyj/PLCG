/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123004
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((!(((~(var_17 | 255))))));
    var_21 = ((((var_3 ? (((var_17 ? var_5 : -1218403304))) : var_16)) << 3));
    var_22 = (max(var_22, 11369));

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        arr_2 [13] [13] = ((18446744073709551613 / 791964293) ? var_19 : ((~(arr_0 [i_0 + 1]))));
        var_23 -= (((arr_0 [i_0 + 1]) ? ((1 ? 18446744073709551615 : 2189917325)) : (168 >> 1)));
        var_24 &= (arr_0 [i_0]);
        var_25 = (max(var_25, ((((((2105049961 ? (2189917341 * var_6) : 2189917319))) ? 186 : 0)))));
    }
    #pragma endscop
}
