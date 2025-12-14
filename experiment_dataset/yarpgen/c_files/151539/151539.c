/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151539
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_20 = (max(var_20, (max((arr_1 [14]), (arr_2 [i_0])))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        var_21 = (max(var_21, ((min(-1679, 1669)))));

                        /* vectorizable */
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            var_22 = (min(var_22, (((!((((arr_5 [i_0] [i_2] [i_2]) << (1700 - 1685)))))))));
                            var_23 = (min(var_23, var_17));
                        }
                        var_24 = ((min(1704, 1)));
                        arr_15 [i_3] [6] [i_1] [i_3] [i_2] = (arr_12 [i_0] [i_0]);
                    }
                }
            }
        }
        var_25 = (max(var_25, -1704));
    }
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 3; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 21;i_9 += 1)
                        {
                            {
                                var_26 = var_4;
                                var_27 = (max(var_27, (((((1711 % (arr_28 [i_5] [i_5] [i_5] [1] [i_5]))) >> ((((~(max(var_10, var_13)))) + 2144576804333046243)))))));
                            }
                        }
                    }
                    arr_32 [i_5] [i_6] [i_7] = var_16;
                    arr_33 [i_7] [i_7] [i_7] [i_7] |= (max((max(var_19, (arr_16 [i_7] [i_6 - 1]))), (!1668)));
                }
            }
        }
        var_28 = (max(var_28, (~-1695)));
    }
    var_29 *= (max(((-55 ? (min(var_17, var_19)) : var_16)), -var_5));
    #pragma endscop
}
