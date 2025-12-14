/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174577
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, var_5));
    var_11 = var_1;
    var_12 = ((((2485952236908687483 >> (-175431909 + 175431953))) / 9223372036854775804));
    var_13 += (((((min(8355840, 1)))) ? (((1 == 684147808) ? (~var_7) : ((((-9223372036854775807 - 1) && var_7))))) : (((!(var_8 && var_8))))));

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_14 = 12439;
        var_15 = ((((var_6 ? (arr_1 [i_0]) : var_8)) == (((~(532541070 ^ -1))))));
        var_16 = (var_4 ? (((var_4 ? (!var_1) : (arr_0 [i_0] [i_0 + 3])))) : ((-(min((arr_1 [i_0 + 1]), 1)))));
    }
    #pragma endscop
}
