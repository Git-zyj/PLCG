/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117027
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_11 = (min(var_11, ((min(-var_6, (min((var_4 <= var_10), (min(var_8, var_2)))))))));

                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        arr_12 [0] [i_3] [i_2] = ((((min(var_6, 0))) >> (((-9223372036854775807 - -9223372036854775782) + 76))));
                        var_12 = ((((((max(8425235200716345707, 116))) ? (~-1) : 13)) <= 1));
                        arr_13 [i_0] [i_1] [i_2] [0] [i_2] = ((-(~var_10)));
                        var_13 = (~var_6);
                    }
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        var_14 = (max(((var_8 ? var_2 : (var_10 / var_6))), var_10));
                        var_15 = var_3;
                        arr_17 [3] [i_1] [i_2] [i_4] = (-(min(var_5, ((var_7 ? 1 : var_4)))));
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 19;i_6 += 1)
                        {
                            {
                                arr_22 [5] [i_2] [i_5] [i_6] = ((min(((-1272278044 ? 16164 : 31)), 31)));
                                arr_23 [i_0] [i_1] [0] [i_5] [i_6] = (min(((min(var_4, (max(0, var_7))))), (min(3657301096, 1))));
                            }
                        }
                    }
                    arr_24 [14] [i_1] [i_2] = ((((min(var_3, var_6))) ? ((max(var_5, 228))) : var_9));
                    arr_25 [i_0] [i_1] [19] [5] = (min(var_10, (((min(var_8, var_3))))));
                }
            }
        }
    }
    var_16 = var_2;
    var_17 &= var_10;
    var_18 = (min(var_18, (~var_2)));
    #pragma endscop
}
