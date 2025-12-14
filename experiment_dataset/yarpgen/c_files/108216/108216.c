/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_6;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (max((max(((1 ? 1 : var_1)), ((9223372036854775807 ? (arr_1 [i_0]) : (arr_2 [i_0] [i_0]))))), ((max((arr_1 [i_0]), (arr_1 [i_0]))))));
        arr_4 [i_0] = (max(((33521664 ? 1 : (arr_0 [i_0]))), ((((~1993797492470372610) >= 51)))));
    }
    #pragma endscop
}
