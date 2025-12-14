/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151294
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (32512 & -var_1);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
        {
            arr_6 [i_1] [10] [i_1] &= 48493;
            var_13 = (arr_0 [i_0]);
            arr_7 [i_0] [i_0] = var_5;
            var_14 += (((arr_5 [i_0] [i_1]) / (arr_3 [i_0] [i_1])));
            var_15 = (arr_2 [2]);
        }
        for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
        {
            var_16 = ((~(((arr_8 [4]) << (8294629658137923586 - 8294629658137923573)))));
            var_17 = (arr_4 [i_0]);
            var_18 = -8398485607990401312;
            /* LoopNest 2 */
            for (int i_3 = 3; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    {
                        arr_16 [i_0] [i_0] [i_2] [1] [12] [i_4] = ((18446744073709551615 && (((1 << (1225000906981636070 - 1225000906981636040))))));
                        var_19 = (((arr_13 [i_3 - 1] [i_3 + 1] [i_3] [i_3 + 1]) ? (arr_13 [i_3 - 1] [i_3 - 1] [12] [i_3 - 1]) : (arr_13 [i_3 - 2] [i_3 - 1] [i_3 - 2] [i_3 - 1])));
                        var_20 ^= (63488 || -8294629658137923587);
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 4; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    {
                        var_21 = (min(var_21, ((((arr_22 [i_5 - 2] [i_5 - 3]) / (arr_14 [i_5 + 1] [i_5 - 4]))))));
                        var_22 ^= (((arr_12 [9]) >= var_9));

                        for (int i_8 = 2; i_8 < 14;i_8 += 1)
                        {
                            var_23 = 1;
                            var_24 = -var_1;
                        }
                        for (int i_9 = 4; i_9 < 12;i_9 += 1)
                        {
                            arr_33 [15] [i_5] [15] [i_6] [i_6] [i_7] [i_9 + 2] = -var_10;
                            var_25 = (min(var_25, 3700631628));
                            var_26 = (((arr_10 [i_5] [i_5] [i_5 - 1] [i_6]) * 11485752009903148332));
                        }
                    }
                }
            }
        }
        arr_34 [i_0] [i_0] = ((var_6 ? (arr_17 [i_0] [6]) : 1));
    }
    #pragma endscop
}
