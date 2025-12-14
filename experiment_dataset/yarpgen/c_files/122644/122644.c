/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_18 = (max(var_18, ((max(((((((var_6 ? var_17 : var_4))) ? (arr_0 [i_0] [3]) : ((-(arr_1 [i_0])))))), (min((var_7 & var_5), ((((arr_0 [i_0] [i_0]) ? var_13 : (arr_1 [i_0])))))))))));
        arr_2 [i_0] = ((-(arr_0 [i_0] [i_0])));
        var_19 = (min(var_19, ((((((!var_12) ? (max((arr_0 [i_0] [i_0]), var_1)) : (!var_9)))) ? (arr_0 [i_0] [i_0]) : var_10))));
        var_20 = (max(var_20, ((max((~var_9), ((-(~3586568149))))))));
        var_21 = (((((((var_3 ? var_3 : var_13))) ? var_9 : (((arr_0 [i_0] [i_0]) & var_7)))) ^ (((!var_4) ? var_1 : (~var_16)))));
    }
    var_22 = ((var_14 >> (((((var_16 + var_12) ? -var_15 : ((var_13 ? var_10 : var_2)))) + 74))));
    #pragma endscop
}
