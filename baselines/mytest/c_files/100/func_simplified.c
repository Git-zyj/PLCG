/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100
Invocation: ../scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100 -o /data/zyj/loop_generator/baselines/yarpgen/mytest/c_files/100
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21; i_0 += 2)
    {
        var_18 *= ((5591483090965707555LL) + (-5591483090965707556LL));

        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1)
        {
            arr_7 [i_0] [i_0] [i_1] = (arr_1 [i_0]);
            arr_8 [i_1] [i_1] = ((!(((var_15 ^ (arr_6 [i_0] [i_0] [i_0]))))));
            var_19 = (((((min(var_17, (5591483090965707555LL))))) ? var_8 : -24820));
        }
    }
    var_20 = (((max((!var_10), (var_3 / var_5))) + var_5));
    #pragma endscop
}
