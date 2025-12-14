/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119603
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 1;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        var_13 = arr_8 [i_0] [i_1] [i_1 - 2] [i_3] [i_1];
                        var_14 = (~((((arr_5 [i_0] [i_1] [i_2] [i_3]) != (arr_2 [i_2])))));
                    }
                }
            }
        }
        var_15 = var_2;
        var_16 = (max(var_16, ((((arr_3 [i_0] [i_0]) % ((((arr_3 [i_0] [i_0]) || (arr_3 [i_0] [i_0])))))))));
    }
    /* vectorizable */
    for (int i_4 = 4; i_4 < 15;i_4 += 1)
    {
        var_17 = (arr_14 [i_4] [i_4]);
        var_18 += (arr_13 [4]);
        var_19 *= ((((0 ? 27246 : 0)) & (arr_13 [0])));
        arr_15 [i_4] = var_7;

        for (int i_5 = 2; i_5 < 15;i_5 += 1)
        {
            var_20 = var_8;
            var_21 = ((((((arr_17 [i_4] [i_5] [i_4]) ? (arr_11 [i_4]) : (arr_17 [i_4] [i_5] [i_4])))) && (((~(arr_16 [i_4] [i_4] [i_4 - 3]))))));
            arr_18 [i_4] [i_4] = (((arr_14 [i_4] [i_4]) * (arr_14 [i_4] [i_4])));
        }
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            var_22 = (((arr_11 [i_4]) % var_10));
            arr_22 [i_4] = var_11;
            var_23 = var_9;
            /* LoopNest 2 */
            for (int i_7 = 3; i_7 < 13;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    {
                        var_24 = (i_4 % 2 == 0) ? ((((~var_6) - ((184 >> (((arr_11 [i_4]) - 50036))))))) : ((((~var_6) - ((184 >> (((((arr_11 [i_4]) - 50036)) + 43364)))))));
                        arr_27 [i_4] [i_6] [i_4] [11] [i_6] [i_6] = (((arr_16 [9] [i_4] [i_7]) ? ((((arr_11 [i_4]) <= (arr_14 [i_4] [i_6])))) : (~1)));
                    }
                }
            }
        }
    }
    #pragma endscop
}
