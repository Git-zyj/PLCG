/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129628
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        var_15 = (max(var_15, (((!(-9223372036854775807 - 1))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_16 &= (~-30225);
            var_17 = ((((((arr_2 [i_0 - 1] [i_1]) & var_1))) & var_5));
            var_18 = (((arr_0 [11]) - (arr_1 [i_0])));
        }
    }
    var_19 = (max(var_19, ((((((!var_2) == 9223372036854775807)) ? var_6 : ((var_2 >> (((-9223372036854775806 / var_4) + 102481911520608628)))))))));
    #pragma endscop
}
