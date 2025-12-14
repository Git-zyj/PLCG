/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136250
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= -533120303;
    var_14 = 3378;
    var_15 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_1] = (min((arr_0 [i_0] [i_1]), (arr_5 [i_0] [i_1 + 1])));
                arr_7 [i_0] [i_1] [i_1] = ((((((min(-13, (arr_5 [i_0 + 1] [i_0 + 1])))) + 2147483647)) >> (max((arr_1 [i_0 + 1]), var_6))));
                var_16 = (max(var_16, (((~(((arr_4 [i_1 + 2] [i_1 - 1] [i_1 - 1]) ? ((-(arr_1 [i_0 + 1]))) : (arr_4 [16] [i_1 - 1] [i_1 + 1]))))))));
                var_17 = 716601103;
            }
        }
    }
    var_18 -= min((((34 ? (var_12 - -533120295) : var_3))), ((-716601115 ? 18446744073709551615 : var_5)));
    #pragma endscop
}
