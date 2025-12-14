/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149754
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 4294967295;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = var_3;
        var_11 = ((-(((((min((-127 - 1), 1)))) & (arr_0 [i_0] [i_0])))));
    }
    var_12 = (max((((var_9 ? (!127) : 736283438))), ((var_2 & (max(-2027, var_4))))));
    var_13 &= ((max((~var_2), var_9)));
    var_14 = (~var_6);
    #pragma endscop
}
