/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151376
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((-(((var_3 > var_9) - var_0))));
    var_21 = (max(var_6, (max(var_12, (18446744073709551615 + 1)))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            arr_4 [i_0] |= -105;
            var_22 ^= ((~var_13) && var_19);
        }
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            var_23 *= var_5;
            arr_8 [i_0] [i_2] = ((!(((-(!0))))));
        }
        arr_9 [i_0] [i_0] = arr_7 [i_0];
        arr_10 [i_0] = ((((((max(110, 84)) <= ((-(arr_2 [i_0] [i_0]))))))));
    }
    var_24 = 171;
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 0;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            {
                                var_25 = (max(174, 1039127247408017516));
                                arr_23 [i_7] [i_7] [i_6] [i_3] [i_3] [i_3] [i_3] = (max(-var_12, (max((var_6 / var_17), -7806970431894617245))));
                                arr_24 [i_3] [i_3] [i_3] [i_3] [i_3] = (~127);
                                var_26 = (max(128, (((-31 ? var_11 : (arr_17 [i_4] [i_4] [i_6]))))));
                            }
                        }
                    }
                    var_27 = (max(var_27, ((((12208780192876023665 ? 210 : 10178298704620515949))))));

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        var_28 ^= (((66 - var_19) ? 61 : var_5));

                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            var_29 = 48;
                            arr_30 [1] [i_4] [i_5] [i_8] [i_4] = arr_25 [i_3] [13];
                            arr_31 [i_9] [i_4] = ((67092480 - (arr_15 [i_5 + 1] [i_5] [i_5 + 1])));
                            var_30 = (min(var_30, ((((~var_7) && (((~(arr_18 [i_3] [i_5 + 1] [i_3] [9] [1] [i_4])))))))));
                        }
                        arr_32 [i_3] [i_4] [i_4] [i_3] = (arr_11 [4]);
                    }
                }
            }
        }
    }
    #pragma endscop
}
