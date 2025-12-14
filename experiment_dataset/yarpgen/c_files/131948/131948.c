/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131948
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= (var_2 >= var_4);
    var_12 = ((!((((var_0 + 9223372036854775807) << (((max(var_0, var_4)) - 16633110491669649040)))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [0] &= -4634449126921889251;
        var_13 = (arr_0 [i_0] [i_0]);
    }
    #pragma endscop
}
