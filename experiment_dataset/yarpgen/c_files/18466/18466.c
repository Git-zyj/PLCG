/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18466
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_16 = ((arr_1 [i_0] [i_0]) >= var_0);
        var_17 += var_9;
        arr_2 [i_0] = 5;
        var_18 = (min(var_18, ((((((var_7 ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))) <= 0)))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 21;i_2 += 1)
        {
            {
                var_19 = (((arr_0 [i_1] [i_1]) || (((var_14 - -108) >= (max(5, -138599540))))));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 20;i_4 += 1)
                    {
                        {
                            var_20 |= ((-(arr_0 [i_4] [i_3])));

                            /* vectorizable */
                            for (int i_5 = 4; i_5 < 20;i_5 += 1)
                            {
                                var_21 = ((1 ? 65514 : (-32767 - 1)));
                                var_22 = (!-138599551);
                            }
                            /* vectorizable */
                            for (int i_6 = 1; i_6 < 21;i_6 += 1) /* same iter space */
                            {
                                arr_22 [i_1] [i_2] [i_2] = (arr_12 [i_1] [i_1] [i_3] [i_2] [i_6]);
                                var_23 = ((var_2 ? (arr_1 [i_2 + 1] [i_2 + 1]) : (11679562419612337233 == 35)));
                            }
                            /* vectorizable */
                            for (int i_7 = 1; i_7 < 21;i_7 += 1) /* same iter space */
                            {
                                arr_27 [i_1] [i_2] [i_3] [15] [i_1] = (~(arr_15 [i_2] [i_2] [i_2] [i_2] [i_4 + 2] [i_4]));
                                var_24 = 10686261387303374089;
                            }
                            for (int i_8 = 1; i_8 < 21;i_8 += 1) /* same iter space */
                            {
                                var_25 = (max((min(19438, ((-1 ? (arr_14 [i_4] [1] [1] [i_4] [i_8] [i_2]) : 1)))), (max((arr_16 [i_1] [i_1] [i_2 + 1] [i_4 + 1] [i_1] [i_8 - 1] [i_2]), -1))));
                                var_26 = (max(-var_9, (~18446744073709551615)));
                            }
                            var_27 = ((var_6 <= ((((((-1 ? var_6 : (arr_1 [i_4] [i_4])))) || var_10)))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 2; i_9 < 21;i_9 += 1)
                {
                    for (int i_10 = 4; i_10 < 20;i_10 += 1)
                    {
                        {
                            var_28 = 8195775128877875976;

                            for (int i_11 = 1; i_11 < 1;i_11 += 1)
                            {
                                var_29 = ((((max(32, var_10))) >= (arr_37 [i_2] [i_9 - 1] [i_9 - 1] [i_2 + 1] [i_9 - 1])));
                                var_30 = (8386560 | 19);
                                var_31 -= ((max(58217, ((1528331190 ? 6327947747518012750 : 2766636093)))));
                            }
                        }
                    }
                }
                var_32 = (max(((1 << ((((-127 - 1) != -6))))), var_6));
            }
        }
    }
    var_33 = (7374 ? 1 : -546188714);
    var_34 = 1;
    #pragma endscop
}
