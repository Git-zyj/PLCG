/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130635
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_14 += (min(3586, ((~(arr_2 [i_0 + 2])))));
        var_15 = (arr_3 [i_0 + 1]);
    }
    var_16 = (max(var_16, (max(var_1, var_1))));
    var_17 = ((min(((max(2147483647, 1))), var_11)));
    #pragma endscop
}
