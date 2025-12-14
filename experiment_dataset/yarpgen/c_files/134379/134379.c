/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134379
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_18 = (((0 % 255) ? -1 : (((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : var_1))));
        var_19 -= arr_1 [i_0];
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_20 |= ((((((((((arr_2 [i_1]) ^ (arr_2 [i_1])))) && var_7)))) | (min((((var_1 ? var_2 : 1))), (arr_3 [i_1] [i_1])))));
        var_21 = (-1201471263 ? 42 : (arr_2 [i_1]));
    }

    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        var_22 = ((~(((1 ? 0 : var_9)))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                {

                    for (int i_5 = 3; i_5 < 21;i_5 += 1)
                    {
                        var_23 = ((min(((var_10 ? 1 : (arr_9 [i_2] [i_2])), (!1)))));
                        var_24 = (1201471265 % var_13);
                        var_25 = (max(var_25, (arr_10 [i_5 - 2] [i_5 + 2] [i_5 - 2])));
                    }
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            var_26 = var_13;
                            var_27 = ((var_11 ? var_3 : (((((255 ? 27739 : var_9)))))));
                            var_28 &= var_3;
                        }
                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            arr_22 [i_2] [i_3] [i_4] [i_2] [i_6] [i_8] [i_8] = 1;
                            arr_23 [i_2] [i_3] [i_2] [i_2] [15] = (arr_5 [i_6]);
                        }
                        var_29 = ((~(((-43 & var_3) ? ((~(arr_13 [i_2] [20] [i_2] [i_2]))) : (arr_7 [i_2] [i_2] [i_6])))));
                    }
                    var_30 += (arr_16 [i_2] [i_3] [13] [i_4] [i_4]);
                }
            }
        }

        for (int i_9 = 0; i_9 < 24;i_9 += 1) /* same iter space */
        {
            var_31 &= ((((((~var_4) >> (var_10 - 47194)))) ? (arr_8 [i_2]) : (~var_3)));
            var_32 = ((~(((arr_5 [i_2]) ? var_4 : (~-43)))));
        }
        for (int i_10 = 0; i_10 < 24;i_10 += 1) /* same iter space */
        {
            arr_29 [i_10] = (min(96, (max(-7, ((-7 ? var_17 : (arr_8 [i_10])))))));
            var_33 = ((!(arr_13 [i_2] [i_2] [i_2] [i_2])));
            var_34 = var_8;
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 24;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 24;i_12 += 1)
                {
                    {
                        var_35 = (min(var_35, (((var_5 > (max(-1033810712, var_1)))))));
                        arr_35 [i_2] |= 1;
                        var_36 = (((((min(((~(arr_13 [i_2] [21] [i_2] [i_2]))), ((min(var_9, -227))))) + 2147483647)) >> (((arr_5 [i_2]) - 61201))));
                    }
                }
            }
        }
    }
    for (int i_13 = 0; i_13 < 1;i_13 += 1)
    {
        var_37 ^= var_13;

        for (int i_14 = 0; i_14 < 24;i_14 += 1)
        {

            for (int i_15 = 0; i_15 < 24;i_15 += 1)
            {
                var_38 -= (max((~1), ((max((arr_31 [i_13] [i_14] [i_15] [8]), var_14)))));
                var_39 |= (((~(var_6 ^ var_5))));
                var_40 = (min(var_40, ((max((arr_8 [i_15]), 61900)))));
            }
            var_41 ^= 10640244171301934707;
        }
        var_42 = (((max((arr_25 [i_13] [i_13]), var_13)) ^ (((65535 ? (arr_25 [i_13] [i_13]) : (arr_25 [21] [i_13]))))));
        var_43 = ((((-var_9 * ((var_16 ? (arr_9 [i_13] [i_13]) : 7752351902916736070)))) & var_6));
    }
    var_44 = var_7;
    var_45 = (max(var_45, (((var_3 ? ((max(((min(1, var_2))), var_1))) : ((var_14 % (min(var_17, var_0)))))))));
    var_46 &= 2147483647;
    #pragma endscop
}
