/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179360
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_13 = (min(var_13, (arr_2 [i_0])));
        arr_3 [i_0] = ((((min(var_3, var_6))) >= (!-2868944366)));
        var_14 = ((((max((arr_1 [i_0]), (arr_1 [i_0])))) ? (!182884877) : -182884857));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_15 = var_0;
        var_16 = var_0;

        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            arr_10 [i_1] [i_2] = 1;
            var_17 = 2200018299;
            var_18 &= (min((((!(((-182884866 ? var_11 : (arr_5 [i_1]))))))), (var_9 / 64)));

            for (int i_3 = 2; i_3 < 20;i_3 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        {
                            var_19 = ((-(max((var_8 - var_4), (var_10 - var_12)))));
                            arr_19 [i_2] [i_3] [i_3] [i_5] = var_1;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 23;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        {
                            arr_24 [i_1] [i_1] [i_1] [i_1] [i_3] [i_1] [18] = 2262751411;
                            arr_25 [10] [i_3] [i_3] [i_3] = var_10;
                            var_20 = ((252 ? (-1228820634 - -1786120378) : var_6));
                        }
                    }
                }
                var_21 *= (((-127 - 1) && 1));
                var_22 = (arr_15 [i_1] [i_1]);
            }
            for (int i_8 = 2; i_8 < 20;i_8 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 24;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 20;i_10 += 1)
                    {
                        {
                            var_23 = (max(var_23, ((min(((min(2734888498, 1904963675))), (var_4 - 0))))));
                            arr_36 [i_1] [i_2] [6] &= ((((((1767837610 ? -3864124788795158823 : (arr_35 [i_1] [i_2] [i_1]))))) != (((arr_33 [i_1] [i_1] [i_1] [i_2] [i_1]) - (((var_8 ? (arr_8 [11] [i_2] [1]) : 1)))))));
                        }
                    }
                }
                arr_37 [i_8] = (min(0, 1023));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 24;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 23;i_12 += 1)
                    {
                        {
                            var_24 |= (arr_28 [i_11] [i_12]);
                            var_25 = (max(var_25, ((((((20724 >= -2791) >> (131071 - 131058))) | 145)))));
                            var_26 *= ((~(var_8 > var_12)));
                        }
                    }
                }
            }
        }

        for (int i_13 = 3; i_13 < 23;i_13 += 1)
        {
            arr_46 [i_13] = (3364837440 ? (--3341) : ((-(arr_4 [i_1]))));
            var_27 *= ((((1034778895 ? (((118 - (arr_21 [i_1] [i_1])))) : (min(24427, var_7)))) | (((((-223707750 >= -360891879) > (((-11394 + 2147483647) >> var_10))))))));
            arr_47 [i_13] = (1445504479 / (var_5 != 127));
            var_28 = (min(var_28, ((((arr_16 [i_1] [i_13] [i_1] [i_13]) ? -977891536 : var_8)))));
            var_29 &= var_0;
        }
    }
    var_30 = 806475658;
    #pragma endscop
}
