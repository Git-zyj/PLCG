/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110774
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_14 |= (((min((22471 > var_6), (max(0, -104)))) & (max(var_2, var_4))));
                arr_6 [i_1] = ((min(var_4, 107)));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            {
                                arr_20 [i_4] [i_4] [i_3] [i_4] [i_4] [i_4] |= ((min(var_1, var_2)));
                                var_15 += 110;
                            }
                        }
                    }

                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        var_16 = ((min(110, var_1)));
                        arr_25 [1] = (min(-var_2, -620167055));

                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            var_17 |= (!113);
                            arr_28 [i_2] [0] [i_4] [i_7] [i_7] [1] [i_8] = -17421;
                        }
                    }
                    /* vectorizable */
                    for (int i_9 = 1; i_9 < 11;i_9 += 1) /* same iter space */
                    {
                        var_18 = var_9;
                        arr_31 [i_9] = var_9;
                    }
                    for (int i_10 = 1; i_10 < 11;i_10 += 1) /* same iter space */
                    {
                        arr_35 [0] [0] [0] [i_10 - 1] = ((!(!4)));
                        var_19 ^= var_2;
                        var_20 = -113;
                        arr_36 [i_10] [i_4] [i_3] [i_2] = -17418;
                    }
                    arr_37 [i_2] [i_3] [i_4] = (((max(-1250, var_10))));
                    var_21 = (~4);
                }
            }
        }
    }
    #pragma endscop
}
