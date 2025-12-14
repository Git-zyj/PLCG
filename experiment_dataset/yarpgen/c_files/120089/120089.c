/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120089
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, var_9));

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        var_11 = (max(var_11, (((arr_0 [i_0 - 1]) < ((7637586524482622358 ? (arr_0 [i_0 + 1]) : (!11551)))))));
        var_12 = (((((53982 ? ((max(39425, var_8))) : (arr_0 [i_0 - 1])))) ? ((((arr_0 [i_0 - 1]) ? ((954393064 ? (arr_0 [i_0]) : (arr_1 [14] [14]))) : (arr_1 [i_0] [i_0])))) : (max(((((arr_0 [i_0]) - 1))), var_1))));
        arr_2 [i_0] = 43579;
        var_13 = (((53985 && 0) <= ((min((arr_1 [i_0] [i_0 + 1]), (arr_1 [i_0] [i_0 - 1]))))));
    }
    #pragma endscop
}
