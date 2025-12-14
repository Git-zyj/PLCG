/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129952
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_13 *= (((~var_4) <= -1));
        var_14 |= 0;
        var_15 += var_11;
        var_16 = (var_5 < 234);
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_17 = ((((-4470909013328689587 ? 6 : 0)) >> (((arr_3 [i_1]) - 4881827635248032158))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 22;i_3 += 1)
            {
                {
                    var_18 |= (((((~(max((arr_8 [i_3] [i_2]), (arr_2 [i_2] [14])))))) ? ((1 ? (((~(arr_2 [i_1] [i_1])))) : (max(6468136091028759246, var_6)))) : (((((arr_3 [i_3 - 1]) <= (arr_3 [i_3 - 1])))))));
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 21;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            {
                                var_19 = var_7;
                                var_20 ^= (max(1152921504606814208, (min(6468136091028759246, 49))));
                                arr_15 [i_5] [i_5] [i_4 + 1] [i_3] [i_2] [i_1] [i_1] = var_12;
                                arr_16 [i_3 - 1] [i_3] = ((var_6 ? -0 : 6468136091028759246));
                            }
                        }
                    }
                    var_21 += (((~(arr_13 [2] [20] [i_2] [15] [i_2] [i_3] [i_3]))));
                }
            }
        }
        var_22 = var_1;
    }
    var_23 = var_3;
    var_24 += ((var_1 ? var_12 : var_3));
    #pragma endscop
}
