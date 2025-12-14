/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188102
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = min((max(var_3, (min(var_0, var_4)))), ((0 ? 4220755004 : 1299985738)));
    var_21 -= (var_7 > ((-(max(var_7, var_6)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_1] = 816598192;
                arr_7 [i_1] = var_2;
                var_22 = ((max(7, 639268771)) - (max(((var_4 ? 3478369103 : var_6)), 3655698524)));
                var_23 &= (-(arr_5 [16]));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_24 = (max(var_24, var_2));

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 20;i_4 += 1)
                            {
                                arr_15 [i_0] [18] [i_1] [i_3] [i_4] = (~(arr_13 [i_0] [i_1] [i_2] [i_1] [i_4]));
                                var_25 *= 3917313235;
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] = ((!(arr_11 [i_1 - 1] [i_1 - 1] [i_2] [i_3])));
                                var_26 ^= 4294967295;
                                arr_17 [i_1] [i_1] [i_2] [18] [i_1] = ((-(4294967295 - 4294967295)));
                            }
                            for (int i_5 = 0; i_5 < 1;i_5 += 1)
                            {
                                arr_22 [i_1] [i_2] [i_1] [i_1] [i_2] [i_2] = (arr_8 [i_1 - 1]);
                                var_27 = 3590291631;
                                arr_23 [i_1] [i_3] [i_2] [i_1] [i_1] = (arr_0 [i_3] [i_5]);
                                var_28 = min(0, 3478369103);
                            }
                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
                            {
                                arr_26 [i_1] = arr_20 [i_6] [i_6] [i_1] [i_2] [i_1] [i_1] [i_0];
                                arr_27 [i_0] [i_1] = var_0;
                                arr_28 [i_1] [i_1] [14] [i_3] [i_6] [i_1] [i_2] = 33554431;
                                arr_29 [i_1] [i_1 - 1] = arr_14 [i_6] [12] [i_1] [i_1] [i_1] [i_0] [i_0];
                            }
                            for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
                            {
                                var_29 = (max(((-(arr_0 [i_0] [i_1]))), ((-(max(var_5, (arr_4 [i_1] [i_1] [i_0])))))));
                                arr_32 [i_0] [i_0] [i_1] [i_2] [i_2] [i_7] = (33554431 ? 701662612 : 2994981567);
                                arr_33 [i_1] [i_1] [i_2] [i_3] [i_3] = 4294967295;
                            }
                            arr_34 [i_0] [i_0] [i_2] [i_1] = max((min((arr_2 [i_1] [i_3]), (~7))), (1 * 0));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
