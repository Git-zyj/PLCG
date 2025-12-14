/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171233
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        var_15 ^= (((arr_0 [i_0 + 1]) <= ((-(((arr_0 [i_0]) / var_7))))));
        arr_3 [i_0 + 1] = (max(((0 ? ((-(arr_2 [i_0]))) : (((arr_2 [i_0 - 3]) ? 1 : 1)))), var_1));
        arr_4 [i_0] = (min(12753, 47042));
    }
    var_16 &= ((((max((3226912359 || var_12), var_7))) && 1));
    #pragma endscop
}
