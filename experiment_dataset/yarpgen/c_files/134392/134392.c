/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134392
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += ((-2437850265349319746 ? (((-53 < ((max(77, 1)))))) : ((max(var_15, (var_3 >= var_2))))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_19 = (max((((arr_1 [i_0]) ? 90 : (max(-2437850265349319746, -2437850265349319746)))), (((-50 <= (arr_2 [i_0]))))));
        var_20 = ((((((arr_1 [i_0]) ? (arr_1 [i_0]) : var_15))) ? ((((arr_1 [5]) < (arr_1 [i_0])))) : (94 + 243)));
        var_21 = (max(var_21, var_14));
    }
    var_22 *= (max(var_3, ((var_5 > (var_16 != 119)))));
    #pragma endscop
}
