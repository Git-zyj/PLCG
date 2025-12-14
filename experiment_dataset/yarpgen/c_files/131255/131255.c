/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        var_11 = (((4294967295 * 7) ? (min(((-7860 + (arr_1 [i_0]))), (((arr_0 [i_0]) ? -1 : (arr_1 [i_0]))))) : (arr_1 [i_0 - 1])));
        var_12 = (min(var_12, (((var_3 ? (!1) : 1)))));
        arr_2 [i_0] = 1;
        var_13 = ((((max((1 + 13), ((min(0, 1)))))) ? ((max(1, ((5780227221647755627 ? 1 : -1470472094579582535))))) : (arr_0 [i_0])));
    }
    var_14 = (((((127 & 0) ^ (max(var_3, var_0)))) ^ ((min(8191, 4294967274)))));
    var_15 = ((-((var_6 ? var_1 : var_2))));
    #pragma endscop
}
