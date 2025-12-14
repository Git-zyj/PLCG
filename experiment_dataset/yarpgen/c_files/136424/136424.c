/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136424
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_12;
    var_20 &= ((max(((var_15 ? 14836 : 50696)), var_18)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_0] [i_0] = var_15;
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_21 *= (arr_9 [i_0] [i_2] [i_3] [21]);
                                var_22 = (arr_6 [i_0] [16] [i_3 - 1]);
                                var_23 = (((var_18 + (arr_12 [i_1] [i_0] [i_1] [i_1] [i_3 - 2] [i_4 - 1]))));
                                arr_13 [i_0] [21] [i_2] [13] [i_4] = 32770;
                            }
                        }
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        arr_17 [i_5] [1] = ((arr_14 [i_5]) ^ var_8);
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 21;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    {
                        var_24 *= (-1620668232 ^ var_13);
                        var_25 += ((!(arr_23 [i_7 + 2] [i_7] [i_7 - 3])));
                    }
                }
            }
        }
        arr_28 [i_5] = (!(arr_20 [2] [i_5]));
        arr_29 [i_5] [1] = (~(!1));
        arr_30 [i_5] [i_5] = var_1;
    }
    #pragma endscop
}
