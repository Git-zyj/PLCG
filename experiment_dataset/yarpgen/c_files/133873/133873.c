/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133873
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_10 ? var_11 : var_6));
    var_13 = (min(var_13, (((((max(var_11, ((6924849998488986513 ? 0 : var_3))))) ? ((var_2 ? (~var_3) : var_10)) : (~var_2))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 = (max((((((var_7 ? (arr_2 [i_0]) : var_6))) ? ((var_0 ? (arr_1 [i_0]) : (arr_0 [i_0] [i_0]))) : (arr_1 [i_0]))), ((min((arr_0 [i_0] [i_0]), (arr_1 [i_0]))))));
        var_15 = var_9;
        arr_3 [i_0] [i_0] = ((!(((((max(-7, (arr_1 [i_0])))) ? ((min(1, (arr_1 [i_0])))) : ((1 ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0]))))))));
    }
    var_16 = max(var_9, ((max(var_9, var_4))));
    #pragma endscop
}
