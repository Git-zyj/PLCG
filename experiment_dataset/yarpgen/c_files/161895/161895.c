/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161895
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            var_20 = (max(var_20, (arr_1 [i_1 - 3] [i_1 - 1])));

            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                var_21 = var_0;
                arr_7 [i_2] = var_17;
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 22;i_4 += 1)
                    {
                        {
                            arr_13 [0] [9] [i_1] [i_2] [i_4] [i_4 + 2] = ((+(((arr_3 [i_0]) ? (arr_6 [i_0] [i_1 + 2] [i_1]) : var_9))));
                            arr_14 [i_4] [i_3] [i_1 - 3] [i_4] = var_5;
                        }
                    }
                }
                var_22 = ((((49225 >> (13126 - 13126))) > (var_8 % 65535)));
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 23;i_6 += 1)
                    {
                        {
                            var_23 = ((30423 ? 65535 : 32748));
                            arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_6] = (~var_7);
                            arr_22 [i_6] [i_1] [i_2] [i_5] [i_6] = (((arr_12 [i_0] [i_1] [10] [i_6] [i_5] [i_5 - 2] [8]) ? var_10 : (arr_12 [i_0] [i_0] [i_0] [i_6] [i_0] [i_5 - 2] [i_0])));
                        }
                    }
                }
            }
            for (int i_7 = 1; i_7 < 20;i_7 += 1)
            {
                var_24 -= (var_6 ? (arr_17 [i_0] [1] [i_1 + 2] [1] [i_7]) : var_6);
                arr_25 [i_0] [i_1] [i_7] [i_7] = (-37 > -2091940832);
            }
            arr_26 [i_0] = 8967740519818261233;
            var_25 = 19787;
        }
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    {
                        var_26 = (min(var_26, (-84 > 1)));
                        var_27 += var_3;
                        arr_34 [19] [i_8] [i_9] [i_9] [i_9] [i_10] = var_0;
                    }
                }
            }
            arr_35 [i_0] = ((((((arr_8 [i_0] [i_8]) | var_16))) ? (arr_0 [i_0]) : var_16));
        }
        var_28 = (arr_11 [1] [i_0] [i_0] [i_0]);
        arr_36 [i_0] [i_0] = (((arr_24 [9] [i_0] [i_0] [i_0]) == (arr_24 [i_0] [i_0] [i_0] [i_0])));
    }
    for (int i_11 = 0; i_11 < 19;i_11 += 1) /* same iter space */
    {
        var_29 = (arr_30 [i_11]);
        arr_40 [i_11] [i_11] = (arr_37 [i_11] [i_11]);
        arr_41 [i_11] [i_11] = ((((((((~(arr_10 [i_11] [i_11] [i_11] [i_11])))) ? (arr_8 [i_11] [2]) : ((~(arr_11 [i_11] [18] [i_11] [3])))))) ? (max((((7400236594089734462 ? (arr_2 [i_11] [17]) : 0))), (var_8 ^ -2039204646611168364))) : (((3667527627 ? -53397118 : 30735)))));
        var_30 = (((!var_5) ? (((((arr_5 [17] [i_11] [i_11]) ? var_12 : var_6)))) : ((max(var_4, (arr_9 [i_11] [i_11] [i_11] [i_11]))))));
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 19;i_12 += 1) /* same iter space */
    {
        arr_44 [i_12] = ((9836623515869363813 * (arr_9 [9] [9] [9] [i_12])));
        var_31 = (arr_0 [i_12]);
    }
    var_32 = (((((~var_13) && 9223372036854775807)) ? ((-(min(var_1, var_12)))) : ((((!(var_3 - var_6)))))));
    var_33 = (~0);
    #pragma endscop
}
