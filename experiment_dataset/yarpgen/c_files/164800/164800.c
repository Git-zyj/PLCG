/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164800
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((~66) + 2147483647)) >> (var_7 + 791658492)));
    var_20 = -67;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_21 = ((((((!(arr_2 [i_0] [i_0]))))) >= (((arr_2 [i_0] [i_0]) << (((((arr_1 [i_0] [i_0]) + 118)) - 59))))));
        var_22 = (~((((min((arr_1 [i_0] [i_0]), (arr_0 [i_0])))) * 66)));
        var_23 = (arr_2 [i_0] [i_0]);
        var_24 = -86;
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_25 = (-56 % 66);
        var_26 = ((((~(arr_0 [i_1]))) | ((var_17 % (arr_3 [i_1] [i_1])))));
        var_27 = (((((arr_0 [i_1]) ? (arr_0 [i_1]) : (arr_0 [i_1]))) % -1));
    }
    var_28 = ((var_18 || ((var_16 != (max(var_5, var_3))))));
    #pragma endscop
}
