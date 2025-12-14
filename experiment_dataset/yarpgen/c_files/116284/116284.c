/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116284
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_20 += 1;
        var_21 ^= (((((arr_0 [1] [i_0 + 2]) + 2147483647)) << (var_4 - 15720781735886772533)));
        var_22 = ((((~(!-59))) + ((~(arr_0 [18] [i_0 - 1])))));
    }
    var_23 ^= ((((~var_18) == 0)));
    #pragma endscop
}
