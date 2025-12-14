/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170895
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((min(5302929987541924270, var_5))) > var_9);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_21 = min(var_1, -3);
        var_22 += (max((((((max(0, -3))) ? ((max(1, var_13))) : 1))), ((-5302929987541924271 ? 37644 : 5302929987541924258))));
        var_23 = (max(-1039802265, 0));
    }
    #pragma endscop
}
