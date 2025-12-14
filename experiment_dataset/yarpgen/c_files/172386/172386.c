/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172386
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((var_8 && var_10) && (!var_14))) && (!0)));
    var_17 = (0 || 24);

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_18 = (min(var_18, (((min(15, (arr_0 [i_0] [i_0 - 1])))))));
        var_19 = (((min((arr_1 [i_0 + 1] [i_0 - 1]), ((min((arr_0 [i_0] [16]), 65535))))) != (6948165639452121630 + 386222597)));
    }
    #pragma endscop
}
