/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105858
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [16] [i_0] |= (~32767);
        arr_3 [12] |= (max(109, (((41417 << (22224 - 22211))))));
        var_14 -= ((-(((((-8416 ? (-32767 - 1) : -32364)) > (-32767 - 1))))));
    }
    var_15 = var_1;
    var_16 = (min(-1, -4771220731580969735));
    #pragma endscop
}
