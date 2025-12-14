/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138287
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_16 = (max(var_16, (((1552573351 ? 4235333547482090799 : 31)))));
        arr_2 [i_0 + 1] [6] = 31;
    }
    for (int i_1 = 2; i_1 < 18;i_1 += 1)
    {
        arr_5 [2] = (((min(((min(var_8, -32))), (max(var_4, var_9))))) >> (var_6 - 98));

        for (int i_2 = 2; i_2 < 18;i_2 += 1)
        {
            arr_8 [i_2] = ((min((var_3 ^ var_3), var_1)));
            arr_9 [i_1] [i_2] = (max((((((arr_4 [i_2]) / (arr_4 [i_1 - 2]))) / ((min(var_9, (arr_3 [14])))))), (var_12 * var_14)));
            var_17 -= ((((min((arr_7 [i_1] [i_2 - 2] [i_1]), (arr_7 [18] [i_2] [i_1])))) ? ((((arr_7 [i_2] [i_2] [i_1]) > var_3))) : ((((arr_7 [i_1] [10] [i_1]) < 126)))));
            arr_10 [i_2] [i_2] = ((((((5819048505129985682 ? -32 : 123))) ? (arr_7 [i_2 + 1] [12] [i_2]) : -32)));
        }
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            var_18 = (min(var_18, (((((var_13 - (((arr_7 [i_3] [i_3] [i_3]) * (arr_13 [i_1]))))) * ((((arr_6 [i_1] [i_1 - 1]) ? 5819048505129985691 : -32))))))));

            for (int i_4 = 2; i_4 < 19;i_4 += 1)
            {
                var_19 = ((((((((145 ? -31 : 11025))) ? var_12 : (((var_12 << (((arr_11 [i_1] [i_3]) - 18234360563609003267)))))))) ? ((min((arr_16 [i_1 + 1] [i_3] [i_4] [i_3]), (arr_16 [i_1 - 1] [i_1 - 1] [i_4 - 1] [i_4])))) : ((max(var_14, var_8)))));
                arr_18 [6] [6] = (min((((var_8 ? var_2 : 9))), (((12627695568579565933 ? 16885281374147574999 : 22)))));
            }
            /* vectorizable */
            for (int i_5 = 2; i_5 < 17;i_5 += 1)
            {
                var_20 = (min(var_20, -23));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 20;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        {
                            arr_30 [i_7] [i_5] [i_5] [i_5] [i_5] [i_1] = 36825;
                            arr_31 [i_5] [3] [i_3] [i_6] [19] [i_5] = (arr_21 [i_1] [i_1 - 1] [11] [i_5 + 2]);
                        }
                    }
                }
            }

            /* vectorizable */
            for (int i_8 = 3; i_8 < 17;i_8 += 1) /* same iter space */
            {
                var_21 = (((51 ? 1 : 28)));

                for (int i_9 = 2; i_9 < 19;i_9 += 1)
                {
                    var_22 = 17206382182537541220;
                    arr_38 [i_1] [i_3] [i_8 - 3] [i_8] [i_9] = (((var_12 << (13772849888873478727 - 13772849888873478727))));
                    arr_39 [i_9] [i_8] [i_3] [i_3] [i_1 + 2] [i_1] = ((var_10 ? 19 : 2557009970750559195));
                }
                for (int i_10 = 1; i_10 < 19;i_10 += 1)
                {
                    var_23 -= ((var_12 ? var_11 : (arr_25 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])));
                    arr_42 [i_10] [i_10] [i_8] = (var_15 - var_8);
                    var_24 *= (((arr_37 [i_8 + 3] [i_3] [i_1 - 2]) ? 18446744073709551615 : 0));
                }
            }
            /* vectorizable */
            for (int i_11 = 3; i_11 < 17;i_11 += 1) /* same iter space */
            {
                arr_45 [i_3] [i_11] [i_1 + 2] = (var_14 - -8228318719370985250);
                arr_46 [i_11] [i_3] [i_1] &= (17206382182537541220 - 1188601151);
                /* LoopNest 2 */
                for (int i_12 = 1; i_12 < 19;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 20;i_13 += 1)
                    {
                        {
                            var_25 = (min(var_25, ((((arr_7 [i_3] [i_11] [i_1]) < (var_7 / 7))))));
                            arr_53 [i_1] [i_11] [i_11] [i_12] [i_3] = (-5492063329423114747 & (-127 - 1));
                            var_26 = (min(var_26, ((((var_13 ? (arr_50 [i_12] [i_11 - 2] [i_3] [i_1]) : var_10))))));
                        }
                    }
                }
            }
        }
        var_27 = (max(var_27, ((((((((arr_41 [i_1] [i_1] [i_1] [i_1]) && (arr_7 [i_1] [i_1] [i_1]))) ? ((0 ? (arr_11 [i_1] [i_1]) : (arr_28 [i_1] [i_1] [i_1] [i_1] [i_1 - 2] [i_1 + 2] [i_1 + 2]))) : var_4))) ? ((((arr_28 [i_1] [i_1] [i_1] [i_1 - 2] [i_1] [i_1] [i_1]) + (arr_48 [i_1] [i_1] [i_1] [i_1])))) : ((((4294967295 ? 46 : var_9))))))));
        arr_54 [i_1] = var_12;
    }
    var_28 = -12;
    #pragma endscop
}
