/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168758
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_15 = (((((var_10 << (1067238293 - 1067238230)))) ? var_5 : -var_0));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 18;i_2 += 1)
            {
                {
                    arr_10 [i_0] [10] [i_2] [i_0] = var_7;
                    arr_11 [i_0] [i_1 + 1] [i_2] = 268402688;
                    var_16 *= 2691013622;
                    var_17 = (max(var_17, (((-(arr_8 [i_0]))))));
                }
            }
        }
    }
    for (int i_3 = 2; i_3 < 23;i_3 += 1)
    {
        var_18 = ((var_1 ? (((arr_12 [5] [i_3]) | (((var_8 >> (26588 - 26585)))))) : (1067238293 == 102)));
        arr_14 [i_3 - 2] = ((var_0 ? ((((var_9 | var_3) || (((arr_13 [i_3 + 1]) && 1603953674))))) : var_1));
        var_19 = (((1343066454 <= 2691013603) > (arr_13 [i_3])));
        var_20 += (((((arr_12 [18] [i_3]) + 9223372036854775807)) >> (((((min(var_8, var_5)) << ((((-159708906 ? 145 : 2131628153)) - 135)))) - 211907))));
    }
    var_21 = ((((((var_2 || (!var_0))))) < (var_14 + var_14)));
    #pragma endscop
}
