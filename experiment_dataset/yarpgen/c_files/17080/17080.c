/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17080
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= ((((-15907 <= 17571794972203960043) != var_9)));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = var_7;
        var_21 *= ((((((17571794972203960051 != -579173171) ? 874949101505591585 : ((111 ? 262140 : (arr_1 [i_0])))))) ? var_5 : (max((arr_1 [i_0]), (((arr_0 [i_0]) >> (19413 - 19409)))))));
        var_22 = ((((131 * (((arr_0 [i_0]) ? (arr_1 [i_0]) : -579173171)))) >= (max((arr_1 [i_0]), ((var_7 ? 1436 : var_14))))));
    }
    var_23 = var_12;
    #pragma endscop
}
