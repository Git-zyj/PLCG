/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165855
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = min((max(17764370576803553681, 1174096918)), var_6);

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_16 |= (max((min(798614241, (arr_0 [i_0] [i_0]))), (((max((arr_0 [i_0] [i_0]), (arr_1 [i_0])))))));
        var_17 = (min(var_17, (((1174096915 ? (max(7, 4294967283)) : 2767019166)))));
    }
    #pragma endscop
}
