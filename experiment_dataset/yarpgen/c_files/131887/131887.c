/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131887
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_3;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (max(((-(arr_1 [i_0] [3]))), ((max((((arr_2 [i_0]) && (arr_1 [i_0] [i_0]))), ((!(arr_2 [i_0]))))))));
        var_21 = (max(var_11, ((-(((-2147483647 - 1) ? 3714973545 : 2120481474))))));
    }
    #pragma endscop
}
