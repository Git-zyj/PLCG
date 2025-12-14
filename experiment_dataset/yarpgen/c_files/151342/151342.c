/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151342
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_11 [i_3] [i_1] [i_0] [i_3] [10] [i_3] [i_3] = (((((!(arr_5 [i_0 - 2])))) - ((((arr_1 [i_3]) || (arr_4 [i_4] [i_4] [i_4]))))));
                                var_12 |= ((!((((((!(arr_3 [i_0 + 2] [i_0] [i_0])))) & (~56666))))));
                                var_13 = (max(var_13, ((min(56666, 28954)))));
                                var_14 = (min(var_14, 3215211727));
                            }
                        }
                    }
                }
                var_15 -= (((min(214162956, (~3215211727))) != ((((((var_8 ? (arr_5 [i_1 - 2]) : var_7))) ? (arr_6 [i_0 + 1] [i_0 - 2] [i_0 - 2]) : ((var_4 ? (arr_10 [i_0] [i_1] [i_1] [i_1 + 4] [i_1]) : (arr_1 [i_1]))))))));
                arr_12 [i_1] [i_1] [i_0] = ((var_9 ? 8857 : var_1));
            }
        }
    }
    var_16 += ((-(min(var_8, var_10))));
    var_17 = (~var_8);

    /* vectorizable */
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            var_18 = (arr_8 [i_5] [i_5] [i_6] [i_6]);
            var_19 = (arr_8 [i_6] [i_6] [i_6] [i_6]);
            var_20 ^= ((~(arr_1 [i_5])));
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    {
                        arr_21 [i_5] [i_5] [i_7] [i_5] = (((arr_17 [i_7]) ? (arr_16 [i_5]) : (arr_13 [i_7 - 1])));
                        arr_22 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] |= 1079755589;
                        var_21 = -1;
                    }
                }
            }
        }
        var_22 = (min(var_22, (~var_9)));
    }
    for (int i_9 = 0; i_9 < 19;i_9 += 1)
    {
        arr_25 [i_9] = ((((min(((40018 ? 56654 : 340497753)), (arr_24 [i_9] [i_9])))) ? ((((arr_7 [i_9] [i_9] [16] [i_9]) < ((max(var_1, (arr_2 [i_9]))))))) : (~1)));
        var_23 = (~((3215211731 ? 1 : 72)));

        for (int i_10 = 0; i_10 < 19;i_10 += 1)
        {
            arr_30 [i_9] [i_9] [i_9] = -var_8;
            arr_31 [i_9] [i_9] [i_9] = var_4;
            var_24 -= (min((((-((673638651 ? 1127324236 : 40009))))), ((-(((arr_7 [10] [10] [6] [i_10]) ? (arr_27 [i_10] [4]) : (arr_5 [i_9])))))));

            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                /* LoopNest 2 */
                for (int i_12 = 1; i_12 < 1;i_12 += 1)
                {
                    for (int i_13 = 1; i_13 < 18;i_13 += 1)
                    {
                        {
                            var_25 = (max(var_25, (((-((~(arr_38 [i_9] [i_12 - 1] [i_9] [i_9] [12]))))))));
                            var_26 = var_1;
                        }
                    }
                }
                arr_40 [1] [6] [i_11] |= ((-(((!(arr_28 [10]))))));
                var_27 = (min(var_27, -51021));
            }
            var_28 = ((((((arr_0 [i_10]) & (arr_0 [i_10])))) || ((((arr_0 [i_9]) ? (arr_0 [i_9]) : var_4)))));
        }
        for (int i_14 = 3; i_14 < 15;i_14 += 1)
        {
            arr_43 [10] |= ((39978 ^ ((min(47471, 25528)))));
            var_29 = 19784;
        }
        var_30 = (min(var_30, (((var_0 < (arr_27 [i_9] [1]))))));
    }
    #pragma endscop
}
