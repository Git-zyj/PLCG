/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166102
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (!var_8);

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_4 [12] &= var_5;
        var_14 = (4040201813456054644 ? -13 : (max(var_7, 15081479576245642914)));
    }
    #pragma endscop
}
