/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129112
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((var_16 >> (-66 + 99))))) ? (var_13 * var_15) : -56));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_20 = ((-((((min((arr_1 [i_1]), 3))) ? ((var_4 ? (arr_4 [i_1] [i_0]) : (arr_2 [i_1] [i_0]))) : var_14))));
                arr_7 [i_0] [i_0] = (min((((((min(1, 53))) & 11979))), (arr_3 [i_0] [i_1])));
                var_21 = (((arr_1 [i_1]) << var_8));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    arr_11 [i_0] [i_1] [i_2] = ((-3 * -80) && var_17);

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        var_22 = (max(var_22, (!1533632872756299992)));
                        var_23 = -85;
                    }
                    arr_15 [i_0] = ((((~(arr_1 [i_0]))) != -4323));
                }
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    arr_18 [i_1] [i_1] [i_4] [i_1] = -1;
                    var_24 &= (((var_6 != (arr_9 [i_0] [i_0] [i_0] [i_0]))));
                }
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    arr_22 [i_0] [i_5] [i_0] = ((var_4 > (arr_1 [i_5])));
                    var_25 &= (var_1 % (((((-55 ? var_15 : var_3))) ? var_16 : (arr_13 [i_0]))));
                    var_26 ^= -1315560966371998986;
                    var_27 = (max(var_27, (((((13920807264143040268 ? (arr_1 [i_0]) : (arr_1 [i_1]))) - (arr_1 [i_0]))))));
                }
            }
        }
    }
    var_28 = (((max((var_18 + var_7), var_6)) - ((max(-var_9, var_9)))));
    #pragma endscop
}
