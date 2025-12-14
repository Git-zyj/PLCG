/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154326
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_2;
    var_14 = 1633310544;

    for (int i_0 = 1; i_0 < 13;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        var_15 = var_3;
                        arr_12 [i_2] [i_2] = -var_8;
                        var_16 = ((((max(var_5, ((var_7 ? 1 : (arr_6 [i_1] [i_2] [i_3])))))) && (((var_6 ? ((((arr_5 [i_0] [i_0]) ? var_7 : var_2))) : ((var_7 ^ (arr_0 [i_2]))))))));
                    }
                }
            }
        }
        var_17 = ((+(min(1, (((arr_10 [i_0 - 1] [i_0 - 1] [14] [i_0] [14]) ? var_1 : var_10))))));
    }
    for (int i_4 = 1; i_4 < 13;i_4 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_5 = 1; i_5 < 14;i_5 += 1)
        {
            arr_17 [i_4] [i_5] [i_5] = var_11;
            var_18 |= (!var_0);
            arr_18 [i_5] [i_5] = 65535;
            arr_19 [i_4 + 1] [i_5] = 1;
        }
        for (int i_6 = 1; i_6 < 14;i_6 += 1)
        {
            arr_24 [i_6 + 1] [i_4] = ((-((max(var_1, var_8)))));

            for (int i_7 = 1; i_7 < 14;i_7 += 1)
            {
                arr_27 [i_6] [i_6] [4] [i_4 + 1] = ((((max(((-20036 ? 253 : 2199023255551)), 172))) ? (arr_16 [i_7] [i_4] [i_4]) : (max(var_10, ((var_5 ? (arr_16 [i_4 + 1] [i_6] [i_7]) : (arr_8 [i_4] [1] [1] [i_6] [i_7])))))));
                var_19 -= ((+((~(((arr_8 [i_7] [8] [i_6] [8] [i_4]) ? (arr_15 [6] [i_6]) : var_4))))));
                arr_28 [i_7] [i_4] = (!268435455);
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 14;i_8 += 1)
                {
                    for (int i_9 = 3; i_9 < 12;i_9 += 1)
                    {
                        {
                            arr_35 [i_9] [i_9] [i_4 - 1] [1] [i_9] [i_4 - 1] = ((~(254 || 152)));
                            arr_36 [i_9] [i_8] [7] [12] [i_9] = ((+(((((var_7 ? (arr_29 [i_4] [i_6] [i_7] [i_8] [14] [4]) : var_11))) ? ((((arr_2 [i_6] [i_6]) ^ 860772421))) : ((var_9 ? (arr_21 [i_4]) : var_9))))));
                        }
                    }
                }
            }
            arr_37 [7] = ((((var_11 ? 5950 : (arr_10 [i_4] [i_4] [i_6 + 1] [i_6] [i_6]))) <= var_1));
            var_20 = (((((~(arr_2 [i_4] [1])))) ? ((min(178, 65535))) : ((var_7 ? ((7775090587025748696 ? (arr_29 [8] [i_6] [i_6] [8] [i_4 + 1] [i_6]) : var_4)) : 63))));
            arr_38 [i_6] [i_6] [i_4] = ((((((arr_14 [i_6 - 1]) == (((max(15018, var_7))))))) & (arr_2 [1] [i_4])));
        }
        /* vectorizable */
        for (int i_10 = 2; i_10 < 12;i_10 += 1)
        {
            var_21 *= (arr_9 [12] [4] [i_10] [i_4]);
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 15;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 15;i_12 += 1)
                {
                    for (int i_13 = 1; i_13 < 11;i_13 += 1)
                    {
                        {
                            var_22 = var_0;
                            var_23 = 1;
                            var_24 = ((var_3 ? (((arr_47 [i_10] [2] [i_10]) * (arr_26 [i_13] [i_12] [i_11] [4]))) : 14662));
                        }
                    }
                }
            }
            arr_48 [i_10] = ((825943409 >= ((var_1 ? 0 : var_1))));
        }
        arr_49 [i_4] = var_10;
        var_25 = ((((~(arr_40 [0]))) ^ ((~(arr_23 [i_4] [i_4 - 1])))));
    }
    #pragma endscop
}
