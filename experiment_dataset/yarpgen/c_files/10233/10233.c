/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10233
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_17 = (max(var_17, ((min((min(((max(255, 0))), (arr_0 [i_0]))), ((max((arr_1 [i_0]), 246))))))));
        arr_2 [i_0] = (((min(246, -8459970235271464783)) + (((arr_0 [1]) ? (((arr_1 [3]) ? 255 : (arr_0 [i_0]))) : 233))));
        arr_3 [i_0] = (!9);
    }
    var_18 = (min(var_18, var_8));
    var_19 = (((max(28, 16775168)) + 1));
    var_20 = (min(var_20, ((((!var_4) ? var_2 : (var_12 ^ var_6))))));
    #pragma endscop
}
