/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15498
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= (((((((max(var_12, var_5)) < var_2)))) % (min(var_18, 61904))));

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = max(((var_18 ? var_4 : var_2)), -var_1);
        arr_3 [i_0] = ((-(~-61912)));
        arr_4 [i_0] [i_0] = (var_10 >= ((((var_18 == var_12) ? var_14 : ((var_1 ? var_14 : (-2147483647 - 1)))))));
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] [i_0] = ((((((max(3644579633366069028, var_8))) ? 65535 : -10207))) ? (((((max(var_2, var_17))) || ((max(10519, 28943)))))) : (((var_0 - 3909823468) ? -var_19 : var_0)));

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        arr_15 [i_0] [i_0] [i_0] [i_0] = (~(min((~var_7), var_19)));

                        for (int i_4 = 2; i_4 < 13;i_4 += 1)
                        {
                            var_21 = var_1;
                            var_22 = ((-var_16 ? var_5 : ((var_3 ? 55300 : var_10))));
                        }
                        var_23 = ((var_11 ? (((var_15 + var_1) + -5457)) : -var_15));
                    }
                    for (int i_5 = 2; i_5 < 15;i_5 += 1)
                    {
                        var_24 ^= var_2;
                        var_25 ^= (((min(var_12, 14802164440343482588))) ? (((min(var_7, 4)) * (!var_16))) : ((((~var_12) > ((var_8 >> (var_17 - 15272140353557551699)))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
