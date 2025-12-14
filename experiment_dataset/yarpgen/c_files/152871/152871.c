/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152871
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = (max(var_13, 1));
        var_14 = (max(var_14, (arr_1 [i_0] [i_0])));
    }
    var_15 -= var_1;
    /* LoopNest 2 */
    for (int i_1 = 3; i_1 < 10;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 10;i_2 += 1)
        {
            {
                var_16 = (min(var_16, ((max((((((var_8 + (arr_4 [2]))) <= (arr_7 [1])))), var_7)))));
                var_17 &= (max(var_4, (var_0 + -17)));

                /* vectorizable */
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    var_18 = (arr_6 [i_1] [i_1]);
                    var_19 = (min(var_19, ((((((arr_9 [i_3] [i_2 + 2] [i_3]) + 2147483647)) << (((((arr_9 [i_1 - 2] [4] [i_1 + 2]) + 112)) - 24)))))));
                }
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                arr_18 [i_2] = ((arr_8 [i_1] [i_1] [i_1] [i_1]) && (!-3635593326));
                                var_20 = ((((((((arr_16 [i_1 - 3] [i_1 - 1] [i_2 - 2]) + 2147483647)) << (((arr_17 [i_1 + 2]) - 3752673848100058927))))) ^ (-45 | 2945733302)));
                                var_21 *= (var_2 << (((arr_17 [i_1 - 1]) - 3752673848100058916)));
                            }
                        }
                    }
                    var_22 = -31;
                    var_23 = (arr_13 [1] [i_4] [1] [i_2]);
                }
                /* vectorizable */
                for (int i_7 = 1; i_7 < 11;i_7 += 1)
                {
                    arr_21 [i_2] = ((1 + (arr_3 [i_1] [i_2 - 2])));
                    /* LoopNest 2 */
                    for (int i_8 = 3; i_8 < 8;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                arr_27 [0] [i_2] [i_2] = 1;
                                arr_28 [i_1] [i_2] [1] [i_2] = -var_10;
                                var_24 = (arr_9 [i_1] [i_7] [1]);
                                var_25 = (arr_17 [9]);
                                arr_29 [0] [4] [4] [0] [i_9] &= (arr_25 [i_1 - 3]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
