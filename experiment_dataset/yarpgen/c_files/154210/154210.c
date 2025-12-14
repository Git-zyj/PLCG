/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154210
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((-((((~2644831625) < (((max(-9186, var_2)))))))));
    var_20 = var_7;

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_21 = (max(var_21, ((max(-29189, 683322434)))));
        var_22 += max(2644831625, -29190);
    }
    #pragma endscop
}
