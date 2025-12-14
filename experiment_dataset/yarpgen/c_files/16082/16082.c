/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16082
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= (~var_12);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_20 = var_18;
        var_21 *= (arr_2 [i_0]);
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_7 [4] = (min((((-((-20 ? (-127 - 1) : 11))))), (max(var_3, (arr_2 [i_1])))));

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        {
                            var_22 += ((max(((1 ? var_8 : 18019979905368673138)), (~var_7))));
                            var_23 = -30133;
                            arr_18 [i_1] [i_1] [i_1] [i_2] [i_4] [i_1] [i_1] = ((arr_4 [i_4 - 1]) ? -20987 : (((((arr_16 [12] [i_2] [5] [i_4 - 1] [1]) && var_8)) ? (((((-32767 - 1) + 2147483647)) >> 19)) : (~1))));
                        }
                    }
                }
            }
            var_24 = (min(((((!1) >= (!var_12)))), (~57344)));

            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                arr_21 [12] [i_2] [i_2] [i_6] = (max((((arr_8 [i_1] [14] [i_6]) ? 53153 : 13441)), ((-(arr_8 [i_1] [i_2] [i_6])))));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    for (int i_8 = 4; i_8 < 14;i_8 += 1)
                    {
                        {
                            arr_29 [i_1] [i_1] [i_2] [11] [i_7] [i_2] [i_8] = var_5;
                            var_25 = (max(var_25, ((var_14 <= ((26856 ? ((max(-9604, 28588))) : ((var_11 ? var_9 : var_14))))))));
                            arr_30 [i_1] [i_2] [14] [i_7] [i_8 - 1] = (((((-71 / (arr_22 [i_1] [12] [i_1] [i_8 - 4] [i_8 - 4] [i_7])))) ? ((((((arr_17 [10] [i_2] [10] [i_2] [i_2]) ? var_12 : 17))) ? -1 : 125)) : ((min((arr_1 [i_6]), 1926)))));
                        }
                    }
                }
            }
            var_26 = (((~-31792) & (((arr_6 [2] [i_1]) ? var_4 : 1022))));
            arr_31 [i_2] = (((~27316) < 9200458530500440344));
        }
    }
    var_27 = (min(var_27, -41684));
    #pragma endscop
}
