/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131485
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_19 = (min((max(-423624269, 171182699)), (arr_1 [i_0])));
                var_20 = (min(var_20, -15495481649183447142));
                var_21 = (max(95, 2951262424526104474));
                var_22 = var_16;
            }
        }
    }
    var_23 = var_11;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 14;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 14;i_5 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 15;i_6 += 1)
                            {
                                var_24 = ((79 >> (-65535 + 65541)));
                                var_25 = var_8;
                                var_26 = (arr_13 [i_3 - 1] [i_3 - 2]);
                                var_27 = (arr_1 [15]);
                            }
                            var_28 ^= 90;
                            var_29 = (arr_6 [0]);
                            arr_16 [i_3 + 1] = 1;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 15;i_9 += 1)
                        {
                            {
                                var_30 = 8042174401069712332;
                                arr_26 [i_3 - 2] [i_7] [i_9] = var_3;
                                var_31 = ((((min(12945248931987641453, 1483328693))) || (((-5809 ? (max((arr_18 [i_3] [i_8]), -19240264)) : (arr_17 [i_2] [4]))))));
                                arr_27 [i_9] [i_9] [i_9] [i_8] [9] [i_3] [i_2] = ((423624257 ? (max(var_5, -49)) : (arr_2 [i_3 - 2] [i_3 + 1] [i_3])));
                            }
                        }
                    }
                }
                arr_28 [i_2] = ((((min(-101, (9223372036854775792 - 15495481649183447151)))) ? 1 : 105));
            }
        }
    }
    #pragma endscop
}
