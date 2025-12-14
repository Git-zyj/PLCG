/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104344
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_20 = (arr_9 [7] [i_0] [i_1] [9] [i_3] [i_3]);
                            var_21 ^= ((1865086896077535832 ? (((((-614974626 ? 18383699962419525430 : -776939178))) ? var_0 : ((max(-113, 0))))) : (max(((-10604 + (arr_11 [i_3] [i_2] [i_1] [i_0]))), -10602))));
                            var_22 = (min(var_22, 114));
                            var_23 += (!0);
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    arr_14 [i_0] = (arr_5 [i_0] [0]);
                    var_24 ^= (max(((max((arr_4 [i_0] [i_1 + 1]), -1618099506))), -104));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    var_25 ^= -91;
                    var_26 ^= (((arr_7 [i_1 - 1] [i_1 - 1]) ? (arr_7 [i_1 + 2] [11]) : (arr_7 [i_1 + 3] [i_1])));
                }
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    var_27 *= var_1;
                    arr_23 [i_0] [i_1 + 3] [i_6] = (arr_13 [i_0]);
                    arr_24 [i_0] = -1763262316;
                }
                for (int i_7 = 2; i_7 < 11;i_7 += 1)
                {
                    var_28 -= (arr_17 [i_0] [i_7] [i_1 + 2]);
                    arr_29 [i_1 + 2] [i_1 + 2] [i_0] = ((+(max((!1763262304), (max(9577946266614049479, -49))))));
                    var_29 = ((((0 ? 8341816375354451000 : 81))));

                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        arr_32 [i_0] [i_1] [i_7] [i_0] = (((35 ? 1510188129 : 1510188130)));
                        var_30 = (max(-var_13, 1046828440));
                    }
                    for (int i_9 = 3; i_9 < 13;i_9 += 1)
                    {
                        var_31 ^= (((1510188141 ? -1510188107 : -42)));

                        for (int i_10 = 0; i_10 < 14;i_10 += 1) /* same iter space */
                        {
                            var_32 = (253 ? 4 : 13228);
                            var_33 = ((-1510188130 == (((arr_15 [13] [6] [i_9] [i_0]) ? (((arr_36 [2] [i_9] [i_7] [i_1 + 1] [i_0]) - 17486904834500335318)) : (((max((arr_30 [i_0] [i_0]), 10611))))))));
                        }
                        for (int i_11 = 0; i_11 < 14;i_11 += 1) /* same iter space */
                        {
                            arr_43 [i_0] [i_0] [i_7 + 3] [5] [i_11] = (((-(arr_35 [3] [i_11] [i_9 - 1] [i_9 - 3]))));
                            var_34 = ((!((!(arr_17 [i_11] [i_0] [i_0])))));
                            var_35 = (-5068533468834382847 - 31);
                            arr_44 [i_0] = 8077;
                            var_36 = var_13;
                        }
                    }
                }
                arr_45 [i_0] [i_0] = (min(-22825, 72));
            }
        }
    }
    var_37 = var_2;
    var_38 = (min(var_38, (~8341816375354451000)));
    #pragma endscop
}
