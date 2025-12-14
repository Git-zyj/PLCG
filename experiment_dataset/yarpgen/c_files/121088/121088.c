/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121088
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(-3024, var_12));
    var_21 = (max(var_5, ((max(210, (~var_9))))));
    var_22 = ((-((min(var_7, 64)))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [1] = 2944452347;
        var_23 = ((arr_1 [i_0]) || (179 == 202));
    }
    var_24 += var_18;
    #pragma endscop
}
