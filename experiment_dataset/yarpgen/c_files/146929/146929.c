/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146929
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_20 = (((~1) ? (((arr_1 [i_0]) + (arr_1 [i_0]))) : (arr_1 [i_0])));
        var_21 = (min(var_21, (((!((min(var_9, 64))))))));
        arr_2 [i_0] = (min((((((((arr_0 [i_0]) && var_1)))) + ((var_4 ? 1023 : (arr_1 [i_0]))))), ((max(var_8, 4072208004)))));
    }
    var_22 = 12011290575702639821;
    var_23 = 1;
    var_24 = var_18;
    #pragma endscop
}
