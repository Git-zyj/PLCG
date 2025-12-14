/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108220
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_10 = (max(var_10, ((min((arr_1 [i_1 - 1] [i_1 - 1]), (arr_6 [i_1 + 1] [i_1 + 1] [i_1 + 1]))))));
                    var_11 ^= max((arr_0 [i_1 - 1]), (min((arr_7 [i_1 - 1] [i_1 + 1]), (arr_7 [i_1 + 1] [i_1 + 1]))));
                    var_12 = ((var_9 ? ((min((arr_2 [12]), 125))) : var_6));
                    arr_8 [i_2] = var_6;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 20;i_5 += 1)
            {
                {
                    var_13 *= (~var_8);
                    var_14 = (max(((max((max(var_5, var_5)), 1))), (arr_16 [i_3] [i_3] [6])));
                    var_15 = ((var_4 ? ((max((arr_11 [i_4] [i_5 + 2]), (arr_16 [i_3] [i_4] [i_5 - 1])))) : ((~((var_0 ? var_0 : 1))))));
                    var_16 = ((+((min((arr_14 [i_5 - 1] [i_5 + 2] [i_5]), (max(var_1, var_3)))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 1;i_7 += 1)
        {
            {
                var_17 = (arr_15 [i_6] [i_6]);
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 15;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 15;i_10 += 1)
                        {
                            {
                                arr_33 [i_8] [i_8] [i_8] [i_7] [i_8] [i_8] = ((-((((max((arr_25 [i_6]), 1))) ? 255 : var_0))));
                                var_18 += 4095;
                            }
                        }
                    }
                }
                arr_34 [i_7] [i_7 - 1] = (arr_16 [i_6] [i_7 - 1] [17]);
                var_19 += var_4;
            }
        }
    }
    var_20 = var_8;
    #pragma endscop
}
