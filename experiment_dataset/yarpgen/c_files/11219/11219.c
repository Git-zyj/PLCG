/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11219
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            arr_5 [i_0] [13] = -2922916612194509311;
            var_10 = (min((!4910100335581644306), var_6));
        }
        var_11 = ((!(((var_8 ? ((1340812126513002872 >> (var_4 - 20940))) : (1340812126513002872 % var_2))))));
        var_12 = (-((-(!-30286))));
    }
    var_13 = ((+((((220 < var_9) || (var_8 % 242))))));
    #pragma endscop
}
