/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127411
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (!var_5);

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_17 = (((!(((43749 ? 21786 : 43750))))) ? (!var_4) : ((43749 ? (arr_2 [i_0 - 2]) : var_3)));
        var_18 = (min(var_18, var_8));
        arr_3 [3] = ((-(+-0)));
    }
    #pragma endscop
}
