/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129749
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_20 = ((-224959730 ? (max(1900807268, 6675)) : (arr_1 [i_0] [i_0])));
        var_21 = (min((min(15, 6234254755942513958)), (max(var_12, (arr_0 [i_0])))));
        var_22 = (min(var_22, ((max((max(((max(3250833646, 3451588673))), (~5894758110543802321))), (arr_1 [i_0] [i_0]))))));
    }
    var_23 = (min(var_23, var_14));
    #pragma endscop
}
