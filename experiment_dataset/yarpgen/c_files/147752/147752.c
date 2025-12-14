/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147752
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(-6062853429963314771, var_9));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_7 [7] [i_1] [i_0] [i_0] = ((~(min((!var_13), (arr_4 [i_0] [15] [15])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_12 [i_4] [i_3] [i_2] [i_1] [8] = ((var_16 | (!var_5)));
                                arr_13 [i_4] [0] [i_4] [0] [i_4] = ((((((((var_2 ? var_15 : -5063338142303486916))) ? ((2010936657351233815 ? var_12 : 32691)) : 0))) ? (((~((var_15 ? var_5 : var_5))))) : (((arr_0 [i_4]) << (arr_10 [i_0] [i_1])))));
                                arr_14 [i_4] [i_0] |= (((var_10 / (1 <= 22))));
                                arr_15 [i_4] [9] [4] [11] [11] [i_1] [i_0] = ((((min((arr_5 [i_0] [i_2] [i_2] [i_3]), var_9))) ? (((min(22, var_0)))) : (-9223372036854775807 - 1)));
                            }
                        }
                    }
                }
            }
        }
        arr_16 [i_0] [i_0] = (-9223372036854775807 - 1);

        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    {
                        arr_26 [i_0] [i_0] [i_6] [i_6] [i_7] = 9223372036854775807;
                        arr_27 [i_6] [i_7] [i_7] = ((-((3203851746 - (arr_8 [3] [i_5] [i_5])))));
                    }
                }
            }
            arr_28 [17] [i_5] [i_5] = 118;
        }
        arr_29 [i_0] [i_0] = 1;
        arr_30 [15] [i_0] = (min(16832099692479524305, (min(65504, 16832099692479524305))));
    }
    var_18 = 1091115556;
    #pragma endscop
}
