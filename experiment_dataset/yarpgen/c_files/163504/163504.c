/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163504
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_20 ^= var_16;
        var_21 = (min(var_21, -27158));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_22 = (((arr_6 [i_1]) ^ var_17));

        for (int i_2 = 1; i_2 < 20;i_2 += 1)
        {
            var_23 = ((((max(var_0, (-1363257349 && var_2)))) >= 1535050797));
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    {
                        arr_15 [i_2] = ((!((((-749138631 ? var_11 : (arr_10 [i_2] [i_2])))))));
                        var_24 = (min(var_24, var_12));
                        var_25 = (min(var_25, 0));
                        var_26 -= (!var_1);
                        var_27 = var_12;
                    }
                }
            }
            var_28 -= ((((((((arr_12 [i_1] [20] [i_2 + 1]) ? var_1 : var_7))) && -var_3)) ? ((-(arr_10 [8] [i_2 - 1]))) : (((((((1 ? 22 : (arr_8 [14] [i_2 - 1] [i_2])))) < var_16))))));
            var_29 = (((((arr_8 [i_2] [i_2 + 1] [i_2 + 1]) || (arr_8 [i_2] [i_2 - 1] [i_2 + 1]))) ? (arr_8 [i_2] [i_2 - 1] [i_2 + 1]) : (arr_11 [i_2] [i_2 + 1] [i_2 + 1] [i_2])));
            arr_16 [i_2] [i_2] [14] = (max((min(var_4, var_3)), -29328));
        }
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            arr_20 [12] |= ((((max(((var_16 ? (arr_19 [i_1]) : (arr_5 [i_5]))), var_5))) ? -9223372036854775807 : -var_18));
            var_30 = (min(var_30, (((((((var_18 | 1535050782) ? var_19 : var_8))) ? (arr_10 [16] [i_1]) : (((~var_2) ? -26 : ((((arr_5 [i_1]) ^ var_8))))))))));
            arr_21 [i_5] [i_5] [i_5] = var_0;
            var_31 = (!((max(var_1, var_4))));
        }
        var_32 |= var_14;
    }

    /* vectorizable */
    for (int i_6 = 1; i_6 < 1;i_6 += 1)
    {
        var_33 |= var_11;
        var_34 = -2147483628;
        var_35 ^= ((1535050816 ? 4058440781085484032 : 9223372036854775807));
    }
    var_36 = var_10;
    #pragma endscop
}
