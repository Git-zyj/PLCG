/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_17 ? 1 : -1));
    var_21 = 1;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_22 = (min(var_22, ((((arr_3 [i_0]) == 1)))));
        var_23 = ((((((!20125) ^ var_10))) ? ((min(1, (((arr_3 [i_0]) >> (var_1 - 13337)))))) : (((min(var_6, var_6)) * (((1 ^ (arr_0 [i_0]))))))));
        arr_4 [i_0] [i_0] = (arr_3 [i_0]);
    }
    var_24 = (min(18446744073709551615, (~33452)));
    var_25 = (min((1 >> 1), (-1 * 0)));
    #pragma endscop
}
