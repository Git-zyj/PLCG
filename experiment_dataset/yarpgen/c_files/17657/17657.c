/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17657
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        var_14 = 1043144126;
                        var_15 = (max(var_15, -var_10));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            {
                                arr_16 [i_0] [i_1] [i_2] [i_1] [i_5] = (((min(var_4, var_10))) ? (((((arr_8 [i_1 + 3] [i_1 + 2] [i_1 - 1] [i_1 + 3] [i_1 - 1] [i_2 + 1]) && var_8)))) : (12288 + -4820332238509092692));
                                var_16 = ((((((arr_1 [i_5]) ? (-1184084672575489666 - var_13) : var_6))) % (min((max(33, var_0)), -4820332238509092694))));
                            }
                        }
                    }

                    for (int i_6 = 1; i_6 < 21;i_6 += 1)
                    {
                        var_17 |= var_3;
                        arr_21 [i_1] = var_2;
                        var_18 = (max(var_18, var_8));
                        var_19 = var_12;
                        var_20 = (max(var_20, ((min(13, ((var_13 ? var_6 : (arr_8 [i_6] [i_1] [i_6] [i_6 - 1] [i_1 - 2] [i_6]))))))));
                    }
                    for (int i_7 = 1; i_7 < 19;i_7 += 1)
                    {
                        var_21 *= (min(((((((var_8 - (arr_14 [i_0] [i_1 - 1])))) ? var_6 : (arr_9 [i_7 + 2] [i_7] [i_7 - 1] [i_7])))), (~5331233863341612209)));
                        arr_24 [i_1] [i_1 - 2] [i_1] [i_1] [i_1] = (max((((arr_6 [i_1] [i_7]) ? 65472 : 4820332238509092692)), ((max(4294901824, -1744303889)))));
                    }
                    var_22 *= (min((~var_10), ((var_3 & (arr_23 [i_0] [i_1 - 2] [i_1 - 2] [i_2])))));
                    var_23 = (((arr_23 [i_0] [i_2 - 1] [i_1 + 1] [i_2 + 1]) + (~var_13)));
                }
            }
        }
    }
    var_24 += var_11;
    var_25 |= var_13;
    var_26 = var_10;
    var_27 *= var_10;
    #pragma endscop
}
