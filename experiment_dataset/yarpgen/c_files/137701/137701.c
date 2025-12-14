/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137701
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= (-(max(var_4, var_11)));
    var_16 ^= max((!-17), var_8);
    var_17 = (18446744073709551598 ? var_8 : var_4);

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_18 = min(((~(arr_0 [i_0] [8]))), ((18446744073709551598 ? 17 : 18446744073709551604)));
        var_19 = (min(var_19, (((!(~1075954926948814871))))));
    }
    for (int i_1 = 2; i_1 < 16;i_1 += 1)
    {
        var_20 = (!140737488355327);
        var_21 = (max(var_21, ((max((arr_4 [i_1 + 2]), (arr_4 [i_1 + 1]))))));
        var_22 = (~144115188075331584);
    }
    var_23 = (((((max(var_6, var_14))) ? ((11336798389362069199 ? 11023563329699335797 : 18446744073709551609)) : (!18446744073709551610))) % (((((var_6 >> (var_4 - 13365620753128543783)))) ? -var_10 : (~18246402000893237538))));
    #pragma endscop
}
