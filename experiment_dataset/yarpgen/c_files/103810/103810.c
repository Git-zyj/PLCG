/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103810
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = var_1;
        var_10 = (((arr_0 [i_0] [i_0]) ? ((((max(var_8, var_0))))) : (max((arr_0 [i_0] [i_0]), (max((arr_1 [i_0]), (arr_0 [i_0] [i_0])))))));
    }
    var_11 = min(((((var_9 == var_6) ? ((1 ? var_5 : 46769)) : 94))), ((3937735623 ? 0 : 4294967295)));
    #pragma endscop
}
