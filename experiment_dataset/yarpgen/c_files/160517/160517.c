/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160517
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= 14843415051007037862;
    var_13 = (var_11 + var_7);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_14 [i_1] [15] [i_1] [18] = 18446744073709551606;
                            arr_15 [i_0] [i_1] [i_2] [1] [i_3] = (arr_13 [i_0 - 1]);
                        }
                    }
                }
                var_14 -= var_0;

                for (int i_4 = 3; i_4 < 17;i_4 += 1)
                {
                    arr_19 [i_0] [i_4] = ((!(arr_0 [i_0 + 1])));
                    var_15 = (max(var_15, var_9));
                    arr_20 [i_1] = var_7;
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 16;i_7 += 1)
                        {
                            {
                                var_16 = var_0;
                                var_17 = (max(var_17, var_4));
                            }
                        }
                    }
                    var_18 += (((arr_22 [i_0 + 1] [i_0 - 1] [i_0 + 1]) != (arr_22 [i_0 - 1] [i_0 - 1] [i_0 + 1])));
                    /* LoopNest 2 */
                    for (int i_8 = 3; i_8 < 19;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 16;i_9 += 1)
                        {
                            {
                                var_19 = (arr_21 [i_5] [i_1] [8]);
                                var_20 = (~var_2);
                                var_21 -= (((arr_0 [i_8 - 1]) & (arr_0 [i_8 - 1])));
                                var_22 = (((arr_27 [i_0 - 1]) >> (var_11 - 2602056346)));
                            }
                        }
                    }
                }
                for (int i_10 = 0; i_10 < 20;i_10 += 1) /* same iter space */
                {
                    arr_36 [i_0] [i_0] [i_0 + 1] = ((-(max((((arr_17 [i_0 - 1]) + var_10)), var_2))));
                    arr_37 [i_1] = (var_4 + 4075897402);
                }
            }
        }
    }
    #pragma endscop
}
