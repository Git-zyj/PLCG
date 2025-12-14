/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113441
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_0;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((min(var_8, ((min(-8190, var_3))))) >= ((~((12007975607176399106 ? 0 : 4294967295))))));
        var_11 = (((((!(~var_9)))) / 1666622696));
    }
    for (int i_1 = 2; i_1 < 19;i_1 += 1)
    {
        var_12 = (~-0);
        var_13 = ((-(arr_4 [i_1])));
    }
    var_14 = var_7;
    var_15 = 1401952934;
    #pragma endscop
}
