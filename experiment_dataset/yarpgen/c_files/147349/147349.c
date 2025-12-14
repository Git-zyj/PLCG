/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147349
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 1;
    var_12 ^= var_4;
    var_13 = 13176791073866575957;
    var_14 = var_2;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_15 -= (arr_1 [i_0] [i_0]);
        arr_3 [i_0] [i_0] = ((1609693910 ? (arr_1 [i_0] [i_0]) : (((arr_2 [i_0]) ? 9223372036854775793 : ((((arr_2 [i_0]) - 26790)))))));

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_16 = (min(var_16, 9223372036854775793));
            var_17 = ((-(((((-(arr_2 [i_0])))) ? 1 : ((var_0 ? var_0 : 1))))));
        }
    }
    #pragma endscop
}
