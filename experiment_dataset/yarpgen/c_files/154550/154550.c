/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154550
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_17 += 37;
        var_18 += ((0 <= ((610230256514754966 ? (-37 < var_2) : -29048))));
        arr_3 [1] = (-37 && 37);
    }
    var_19 -= (max(0, 0));
    #pragma endscop
}
