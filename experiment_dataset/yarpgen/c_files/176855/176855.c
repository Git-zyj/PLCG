/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176855
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 -= (max(((var_8 ? (110 ^ -670436852051497874) : ((max(var_12, 3255975210))))), (((((var_5 ? 50872 : 29546))) & ((3573070420 ? var_12 : var_4))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0])));
        var_15 = (min(var_15, var_11));
        var_16 = (((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])));
        var_17 = var_11;
        var_18 ^= (4294967295 ^ 3984480640);
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = (arr_0 [1] [1]);
        var_19 = ((!(((min(var_13, var_9)) > ((max(var_0, 50866)))))));
    }
    var_20 = (min(14586592203176632460, -3871));
    var_21 = ((-(((~var_3) & (var_5 | var_8)))));
    var_22 = var_1;
    #pragma endscop
}
