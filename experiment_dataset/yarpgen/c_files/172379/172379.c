/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172379
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_2] [i_2] = (((max((arr_0 [i_3]), ((28 / (arr_7 [i_0]))))) * ((((((arr_4 [1] [1]) / var_11)))))));
                            arr_11 [15] [3] [i_2] [12] = (max((min((arr_2 [i_0] [i_0]), var_8)), ((min(((0 & (arr_0 [i_0]))), 65423)))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_17 &= (min(((+(max((arr_12 [i_0] [i_0] [16] [16]), 7)))), ((max((arr_15 [i_4 - 1] [i_4 - 1] [i_4 - 1]), var_7)))));
                            var_18 = (-75332021 >= 16625);
                            var_19 *= (~1);
                            arr_18 [i_0] [i_0] [i_4 - 1] [i_5] = (((max(-3792866349026545976, 1)) < ((((max(var_1, var_3)) * 1143370490)))));
                        }
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
    {
        arr_21 [i_6] [i_6] = (11661633812824054045 <= 2179012025);
        var_20 = (1 / -5537370211902181932);
        arr_22 [i_6] [i_6] = (~var_13);
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 25;i_7 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_8 = 3; i_8 < 23;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 21;i_9 += 1)
            {
                {
                    arr_32 [i_7] [i_7] [i_7] [i_7] = (!var_11);
                    var_21 ^= 1;
                }
            }
        }
        arr_33 [i_7] = ((((var_15 | (arr_26 [i_7] [i_7] [i_7])))) || -var_15);
        arr_34 [i_7] [i_7] = ((1971993084 != (arr_23 [i_7])));
    }
    var_22 = var_8;
    #pragma endscop
}
