/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_5;
    var_21 = (max(var_21, var_5));
    var_22 = ((var_2 ? var_7 : (((((max(var_9, 107))) && 1960372647)))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = -1960372637;
        var_23 = (min(var_23, (+-8388608)));
    }
    var_24 ^= var_3;
    #pragma endscop
}
