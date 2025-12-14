/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126860
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, ((max((((~(~var_16)))), ((~(min(var_18, var_0)))))))));
    var_21 = (((min(var_4, 116))) ? ((~((-3 ? 0 : 1)))) : var_15);

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_22 = (-1612178992 * 1612178968);
        arr_2 [i_0] [i_0] = ((((!(arr_0 [i_0]))) ? 4294967295 : (((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : 249))));
    }
    var_23 = ((var_15 ? (~var_17) : (var_12 != var_17)));
    #pragma endscop
}
