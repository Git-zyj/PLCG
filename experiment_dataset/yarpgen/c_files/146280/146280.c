/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146280
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] |= 4321874729311550147;
        var_16 = (min(var_16, (~14838349542323361211)));
        arr_3 [i_0 - 1] = 15360;
    }
    var_17 &= (max(var_2, var_4));
    var_18 = ((50192 ? 1446906804 : -24));
    var_19 = 7564951878578122225;
    #pragma endscop
}
