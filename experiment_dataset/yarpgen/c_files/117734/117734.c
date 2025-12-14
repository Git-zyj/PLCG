/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117734
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_8, var_2));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_15 = 759620729;
        var_16 = (max(var_16, var_0));
        var_17 = (((arr_0 [i_0]) ? ((((arr_1 [i_0] [i_0]) ? var_5 : 2097151))) : (max(var_2, (arr_0 [i_0])))));
        var_18 = 233248279;
    }
    var_19 = (max(var_19, ((min((var_4 && 2097151), (var_4 >= var_5))))));
    var_20 = ((var_3 ? var_4 : var_6));
    #pragma endscop
}
