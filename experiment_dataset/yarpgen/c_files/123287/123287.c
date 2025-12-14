/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123287
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (~var_7);
    var_17 = (((-101 / var_14) >> var_9));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_18 = ((224 ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_0])));

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_19 += (!var_1);
            var_20 = (arr_3 [i_1] [i_0]);
        }
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            var_21 = (min(var_21, ((((5919093382390103476 != 30596) ? -1327088324687576524 : (((207 ? 85 : 46748))))))));
            arr_10 [i_0] [i_2] = (arr_2 [i_2] [i_0]);
            var_22 -= (var_12 && var_0);
        }
    }
    #pragma endscop
}
