/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152989
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((max(((-630694960 ? 18446744039349813248 : -2147483636)), var_6)) * var_0));
    var_16 = (max((max(((7499510332718771095 ? var_9 : var_2)), (1 | var_14))), (((var_2 || 2147483624) ? var_14 : (min(10000308823213325828, var_14))))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_4 [i_0] = (min(4186112, ((((arr_3 [i_0]) & (arr_3 [i_0]))))));
        var_17 |= ((min(((((arr_2 [1]) / 65535))), (-122 * 2097151))));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_18 = (18211135947149056805 ? ((-2147483636 ? -32747 : 1)) : ((-32758 ? 27990 : (-27984 && 133852838))));
            /* LoopNest 2 */
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 20;i_3 += 1)
                {
                    {
                        var_19 |= (min((((arr_1 [i_2 - 1] [i_3]) ? (arr_6 [i_3]) : (arr_1 [i_2 + 2] [i_3]))), 2147483636));

                        /* vectorizable */
                        for (int i_4 = 2; i_4 < 21;i_4 += 1) /* same iter space */
                        {
                            var_20 = var_5;
                            var_21 = -var_0;
                            var_22 = (~var_1);
                        }
                        for (int i_5 = 2; i_5 < 21;i_5 += 1) /* same iter space */
                        {
                            arr_18 [5] [5] [18] [10] [i_0] [8] [8] = ((arr_13 [3] [i_0] [10] [18] [0]) || ((min(((1 ? -32766 : (arr_8 [4] [7] [17] [i_0]))), (arr_11 [1] [4] [i_0] [0] [14])))));
                            var_23 = (((max((arr_8 [i_5 + 1] [17] [1] [i_0]), (arr_11 [i_5 - 2] [1] [i_0] [1] [i_2 - 1]))) && (arr_8 [i_5 - 2] [11] [6] [i_0])));
                        }
                        for (int i_6 = 2; i_6 < 21;i_6 += 1)
                        {
                            var_24 = (max(32758, (max((min((arr_16 [2]), 2147483620)), (min((arr_6 [i_0]), 57521))))));
                            arr_21 [8] [5] [i_0] [11] [14] [3] = (((arr_9 [18] [14]) ? (max(((max(var_13, var_3))), 2604982663)) : (((-(arr_7 [5] [i_6 - 2] [1]))))));
                        }
                    }
                }
            }
            var_25 = (((--187) ? 8015 : 1));
        }
        for (int i_7 = 2; i_7 < 21;i_7 += 1)
        {
            arr_24 [i_7] |= ((((((((arr_14 [10] [6] [3] [11]) ? (arr_8 [6] [4] [10] [i_7]) : (-2147483647 - 1)))) ? 16488 : ((((arr_23 [19]) >= (arr_16 [14])))))) | (((((1 ? -5613 : 126)) == (4095 || 1309090522))))));
            /* LoopNest 3 */
            for (int i_8 = 2; i_8 < 21;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 19;i_10 += 1)
                    {
                        {
                            arr_31 [6] [0] [i_7] [16] [0] |= ((+(((arr_28 [10] [i_10 - 1] [i_8 - 1]) + (!84)))));
                            var_26 = 32748;
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 22;i_11 += 1)
        {
            var_27 = ((arr_30 [10] [i_0] [2] [3] [19]) - var_12);
            arr_35 [i_0] = ((-126 ? 1 : 8));
            arr_36 [i_0] [20] [1] = (((arr_32 [i_0] [i_0]) ^ (arr_32 [18] [i_11])));
            var_28 = (((arr_32 [1] [20]) <= (arr_5 [i_0])));
        }
    }
    for (int i_12 = 0; i_12 < 17;i_12 += 1)
    {
        arr_39 [10] = var_12;
        var_29 = (((((arr_16 [8]) && (arr_25 [1] [2] [6]))) ? ((-(((arr_37 [8] [2]) ? (arr_26 [9] [18] [1] [7]) : (arr_11 [20] [2] [1] [6] [8]))))) : (((min(2738, (arr_0 [14])))))));
    }
    #pragma endscop
}
