/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128275
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, (((var_10 / ((var_0 ? (((var_10 ? 2834083832 : 32767))) : ((18446744073709551615 ? 2181015644 : -1)))))))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_13 = (min(((var_1 ? (arr_2 [i_0]) : ((8667836709986744296 ? 255 : 1)))), (max(var_8, ((127 ? var_1 : var_4))))));
        arr_3 [i_0] [i_0] = max(((((-1 ? var_3 : (arr_1 [i_0]))) ^ var_3)), (min((arr_1 [i_0]), ((1 ? var_3 : 2834083853)))));
        var_14 -= min(((((max(0, 2834083832))) ? (!11) : ((2147483633 ? var_7 : -1)))), 9223372036854775789);
        var_15 ^= var_0;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_7 [3] [7] &= (max((arr_6 [i_1] [i_1]), ((((min((arr_6 [i_1] [i_1]), 6382929477694958871))) ? ((max(-31893, 0))) : var_6))));
        var_16 = (((((((32767 ? var_2 : 32767)) >> (((arr_5 [i_1]) - 4435787590321199817))))) != -9));
        var_17 = ((!(arr_6 [i_1] [i_1])));
    }
    var_18 ^= var_11;
    var_19 = 26045;
    #pragma endscop
}
