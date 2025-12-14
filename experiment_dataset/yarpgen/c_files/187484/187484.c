/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187484
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_20 = 128;
                arr_4 [i_0 + 1] = 148;
                var_21 = 6892445131773899696;

                /* vectorizable */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_22 = 2161585667819873351;
                                var_23 = 1;
                                var_24 = 4294967173;
                            }
                        }
                    }
                    arr_12 [i_0 - 2] [i_1] [i_2] = 1;
                    arr_13 [i_0] [i_1] [i_2] &= 504;
                    var_25 ^= 3370441748;
                }
            }
        }
    }
    var_26 = var_0;
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 3; i_8 < 20;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                var_27 = 124;
                                var_28 = 67;
                                arr_30 [i_5] [i_7] [i_7] [i_8] [i_9] [i_5] = 1;
                                var_29 = (max(var_29, 18014398475927552));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 2; i_10 < 18;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 21;i_11 += 1)
                        {
                            {
                                arr_35 [i_5] [i_6] [i_7] [i_10 - 2] [10] = 1050470321316798865;
                                var_30 |= 34359214080;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
