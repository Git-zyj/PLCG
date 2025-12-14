/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171271
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= (-1 || var_7);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    arr_8 [i_0] [i_0] [i_1] [0] = (34359738367 / var_1);
                    var_15 = ((((-(arr_3 [i_0] [i_0]))) ^ (arr_3 [i_0] [i_0])));
                    var_16 -= var_11;
                    arr_9 [1] [i_0] [1] [i_2] = -94;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_17 = (((arr_6 [i_1 - 2] [6]) + var_0));
                                arr_16 [i_0] [i_3] [i_0] [17] [i_0] = (((arr_14 [i_1 + 2] [i_1 + 1] [i_1 + 2] [i_1 - 1]) ? (arr_2 [i_4] [i_1 + 2]) : var_13));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 4; i_5 < 18;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        {
                            arr_22 [i_6] [i_0] [i_0] [i_0] = 1;
                            arr_23 [i_0] [i_0] [i_5] [i_0] [i_5 - 4] = var_3;
                        }
                    }
                }
                var_18 = ((+(min((arr_19 [9] [i_0] [i_1]), var_13))));
                arr_24 [i_0] = (max((!89), (((var_13 + 9223372036854775807) << (((arr_3 [i_1 - 1] [i_1 + 2]) - 25589))))));
            }
        }
    }
    #pragma endscop
}
