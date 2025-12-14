/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135154
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_1] &= max(var_13, ((2214 ? ((~(arr_4 [i_1] [i_0] [i_1]))) : -2201)));
                var_20 += (-1386297889823150656 && ((!(arr_2 [i_0] [i_1] [i_1]))));
            }
        }
    }
    var_21 = (min(var_21, var_0));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            {
                arr_11 [i_2] [i_3] [i_2] = (((arr_7 [i_2]) - ((var_4 ? -2198 : (arr_10 [i_3] [i_3] [i_3])))));
                var_22 *= (arr_8 [i_2]);
            }
        }
    }
    var_23 = var_14;

    for (int i_4 = 2; i_4 < 19;i_4 += 1) /* same iter space */
    {
        var_24 = (min(var_24, ((max((!var_10), (min((((arr_7 [i_4]) / var_17)), ((max(var_18, -29819))))))))));
        var_25 = ((-((~(((arr_13 [i_4]) ? (arr_9 [i_4 - 1] [i_4]) : 11345408461456160525))))));
        arr_16 [0] = (arr_8 [i_4 - 2]);
    }
    for (int i_5 = 2; i_5 < 19;i_5 += 1) /* same iter space */
    {
        var_26 = ((-2195 ^ (((var_10 < (arr_17 [i_5 + 1]))))));
        var_27 = (-7969338688493164516 ? var_15 : (((((max(var_18, 1)))) / ((11345408461456160525 ? (arr_14 [i_5 - 2]) : (-9223372036854775807 - 1))))));

        for (int i_6 = 1; i_6 < 18;i_6 += 1) /* same iter space */
        {
            var_28 -= 0;

            for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
            {
                var_29 ^= 11;
                arr_25 [i_5 + 1] [15] [i_6] [i_7] = ((!((((arr_21 [i_7] [i_6 + 1] [i_5 + 1]) ? 1 : 1)))));
                arr_26 [i_5 - 1] = (((max(var_7, (arr_15 [i_5 + 1])))));
            }
            for (int i_8 = 0; i_8 < 20;i_8 += 1) /* same iter space */
            {
                arr_30 [i_6] [i_5] = 1;
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 18;i_10 += 1)
                    {
                        {
                            var_30 = ((-7969338688493164498 ? 1508936429 : (((((1 ? var_13 : (arr_29 [i_9] [i_8] [i_5])))) ? var_8 : -7969338688493164516))));
                            arr_37 [10] [i_9] = (max((((var_6 / (arr_31 [i_9] [9] [i_10 + 1] [17] [i_10] [i_10])))), (max((arr_34 [i_5 - 1] [i_5] [i_6 - 1] [i_10 + 1]), 7101335612253391090))));
                        }
                    }
                }
                var_31 = 7969338688493164516;
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 20;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 20;i_12 += 1)
                    {
                        {
                            var_32 = (((((-(~741431680)))) ? (((((var_17 ? (arr_8 [i_8]) : 3292345177))) ? -3136 : ((8239717663828957543 ? 4040804508681276593 : var_17)))) : (arr_18 [7])));
                            arr_42 [i_5 + 1] [5] [i_8] [i_11] [7] [i_5] [5] = (min(var_0, -90));
                        }
                    }
                }
                var_33 = ((~(arr_20 [i_5 - 2] [i_5 + 1] [i_6 - 1])));
            }
        }
        for (int i_13 = 1; i_13 < 18;i_13 += 1) /* same iter space */
        {
            arr_47 [i_13] [i_13 + 2] = (~var_9);
            var_34 += ((min((arr_21 [i_5 - 1] [i_13 + 1] [i_13 + 2]), ((4294967270 ? var_3 : 3979988527763008165)))));
        }
        /* vectorizable */
        for (int i_14 = 1; i_14 < 18;i_14 += 1) /* same iter space */
        {
            var_35 = (((arr_27 [i_14 - 1] [i_14 - 1] [i_14] [i_14 - 1]) - 1));
            arr_50 [i_14] = var_2;
            var_36 *= ((!(arr_33 [i_14 + 1] [i_5 + 1])));
            var_37 = (min(var_37, var_18));
        }
        var_38 &= (arr_12 [i_5]);
    }
    #pragma endscop
}
