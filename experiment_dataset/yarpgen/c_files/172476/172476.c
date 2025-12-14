/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172476
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_6;
    var_21 = (max(var_21, (((((!3165639128) / var_19))))));
    var_22 = (max(var_22, var_1));
    var_23 -= ((15941465963678698805 ? var_19 : ((var_11 ? var_1 : var_15))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_24 = (15760 ? 1129328159 : 2012595252);
        var_25 *= ((((max((arr_0 [i_0] [10]), -130816))) ? ((max((!2505278110030852808), (((arr_0 [i_0] [1]) ? 63 : (arr_2 [10])))))) : (max((arr_2 [24]), (arr_0 [i_0] [12])))));
    }
    #pragma endscop
}
