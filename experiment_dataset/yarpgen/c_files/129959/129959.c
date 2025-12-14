/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129959
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = 11533;
        var_18 ^= ((16383 ? ((1 ? 16383 : var_1)) : -62407));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_6 [5] [i_1] = (~16383);
        var_19 |= ((((-(var_16 + 4294967295)))) ? (((-((var_14 ? 1 : -2242936580595672884))))) : (((((var_4 ? 5844953423861799975 : var_2))) ? 1421 : (((var_5 ? var_5 : (arr_3 [i_1])))))));
    }
    var_20 = (max((max(var_10, var_2)), var_7));
    #pragma endscop
}
