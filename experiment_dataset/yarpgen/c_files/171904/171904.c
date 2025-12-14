/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171904
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((+((var_10 ? (var_7 || 31) : (max(var_14, var_15))))));
    var_18 = ((var_12 ? var_13 : var_16));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] = ((((arr_6 [i_0] [i_0]) != (min(var_3, var_15)))));
                arr_8 [i_0] [i_1] = (((~var_1) ? (arr_4 [14] [i_0] [i_0]) : ((((var_3 ? 2 : 1)) ^ 0))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    arr_12 [i_0] [i_0] [i_0] = var_3;

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        arr_17 [0] [i_0] [i_0] [i_0] [i_0] = (~var_9);
                        arr_18 [i_1] [i_1] [i_0] [i_1] [i_1] = 1;
                    }
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        var_19 *= (((2147483647 ? var_4 : var_8)));

                        for (int i_5 = 3; i_5 < 19;i_5 += 1)
                        {
                            var_20 *= 6801778384146371316;
                            arr_24 [i_0] [i_4] [i_2] [i_1] [i_0] = ((var_12 ? 2147483647 : -6481649041608662140));
                        }
                    }
                    arr_25 [i_0] [i_1] [i_0] [i_2] = ((8166393272442809656 ? (-2147483647 < 1) : 1));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 18;i_7 += 1)
                        {
                            {
                                var_21 *= (~var_3);
                                arr_32 [i_0] = (1 == var_9);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 21;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 21;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 19;i_10 += 1)
            {
                {
                    arr_40 [i_8] [i_10] = ((((((1 ? var_6 : 604501896)) <= (arr_4 [i_10] [i_9] [i_10 + 1]))) || (arr_35 [i_8])));
                    var_22 = (max(var_22, ((max((!var_6), (((arr_36 [i_8] [i_8]) && ((max(var_3, -9223372036854775807))))))))));
                }
            }
        }
    }
    #pragma endscop
}
