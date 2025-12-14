/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137750
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_10;

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        arr_4 [i_0] [i_0 + 2] = (max((((+(((arr_0 [i_0]) << (668577977 - 668577966)))))), (max((arr_3 [i_0]), (arr_2 [9])))));
        arr_5 [i_0 + 3] = (((!var_5) ? (arr_0 [i_0 + 2]) : (var_1 || var_3)));
        var_14 = (min(((-12805 || ((((arr_0 [i_0]) >> (12819 - 12816)))))), (!-12805)));
    }
    #pragma endscop
}
