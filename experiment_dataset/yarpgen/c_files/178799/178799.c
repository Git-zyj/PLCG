/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178799
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= (max(((!((max(var_17, var_12))))), ((((min(28329, -28330))) && var_16))));

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_19 = (min((~var_6), var_4));
        var_20 = (max(var_20, ((max(-28329, (-1 == 815315981))))));
        var_21 = max(16676457042843393756, -2332);
    }
    var_22 = var_1;
    var_23 = ((((((var_9 << (((var_16 + 845403777) - 23))))) <= (min(var_12, -4727037664998649974)))) && var_4);
    #pragma endscop
}
