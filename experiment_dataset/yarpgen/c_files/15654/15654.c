/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15654
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_3;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_14 = 0;
        var_15 *= (((arr_1 [i_0]) >= 9223372036854775807));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_16 = (arr_2 [6] [i_1]);
        arr_6 [i_1] = (arr_5 [i_1]);
    }
    /* LoopNest 3 */
    for (int i_2 = 4; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 12;i_4 += 1)
            {
                {
                    arr_15 [i_2] [i_3] [i_4] = (((arr_9 [i_2 - 2] [i_4 - 3]) | var_2));

                    for (int i_5 = 3; i_5 < 14;i_5 += 1)
                    {
                        var_17 = (min(var_17, (((((((max(var_0, -17697))))) | var_0)))));
                        var_18 = (max(var_3, ((1626446071 ? (arr_16 [i_4 + 4] [i_5 - 3] [i_5] [i_5 + 2]) : 17885311229287470155))));
                    }
                    for (int i_6 = 1; i_6 < 15;i_6 += 1)
                    {
                        var_19 = (max(var_19, var_10));
                        var_20 = (min((arr_11 [i_6]), var_4));
                        arr_20 [i_3] = ((((((262143 && 2147483647) <= var_9))) & (((((~40831) + 2147483647)) >> (975172159 - 975172142)))));
                        arr_21 [i_2] [6] [9] [i_3] = (((~var_12) ? (var_11 / 611835828) : (((var_8 ? var_0 : (arr_19 [i_2] [i_2] [i_2 + 1] [i_3] [i_4] [i_6 - 1]))))));
                        arr_22 [i_3] = var_10;
                    }
                }
            }
        }
    }
    var_21 = (((((var_3 ? var_2 : var_10))) ? ((min(((var_9 >> (116 - 102))), var_4))) : var_12));
    var_22 = ((var_3 ^ (min(var_3, var_10))));
    #pragma endscop
}
