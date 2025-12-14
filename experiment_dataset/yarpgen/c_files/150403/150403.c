/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150403
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= (min(((246 ? 180848507640689182 : 244)), var_6));

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        arr_3 [i_0 + 3] = 2;
        arr_4 [i_0] = 247;
    }
    #pragma endscop
}
