/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138727
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_4 [i_0] = (min(var_3, ((((!(arr_0 [i_0] [i_0]))) ? (((min((arr_0 [i_0] [i_0]), var_6)))) : ((-1 ? (arr_3 [i_0]) : 15))))));

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_16 = -0;
            var_17 = (max(var_15, (!-126126802)));
        }
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 3; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    {
                        arr_19 [i_0] [i_2] [15] [i_0] = (min((min((min(12, 0)), -19)), (((!((min(125, -32))))))));
                        var_18 = (~var_15);
                    }
                }
            }
            arr_20 [i_0] [i_0] [i_2] = (((~2361798141) & (((min((arr_18 [i_0] [i_0] [i_2] [i_2]), 32))))));
        }

        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                arr_25 [i_5] &= (((!(arr_23 [i_5]))));
                var_19 = arr_23 [i_0];
                var_20 = ((max(((min(var_5, var_8)), (min(var_4, 130023424))))));
                arr_26 [i_0] = ((((((min(15, var_12))) ? var_15 : ((((!(arr_7 [i_0] [i_5] [i_6]))))))) | ((((((arr_1 [i_6]) ? (arr_24 [i_5] [7]) : 777461693059681516)) * (((33550336 ? -27 : (arr_16 [i_0] [i_5] [i_6] [2] [16])))))))));
            }
            var_21 = ((((min(var_9, 777461693059681499))) ? (max(var_8, (min(18446744073709551602, 7448234055158263649)))) : var_10));
        }
    }
    for (int i_7 = 0; i_7 < 13;i_7 += 1)
    {

        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            arr_33 [i_7] = 1;
            var_22 = 119029284;
        }
        var_23 = ((-(min(-33550330, (arr_28 [i_7])))));
    }

    for (int i_9 = 0; i_9 < 22;i_9 += 1)
    {
        var_24 ^= (((-(arr_9 [1] [i_9] [i_9]))));
        var_25 = (arr_5 [i_9] [i_9] [i_9]);

        /* vectorizable */
        for (int i_10 = 0; i_10 < 22;i_10 += 1)
        {
            var_26 -= ((((((arr_24 [i_10] [i_9]) >= var_13))) % -var_9));
            var_27 = ((!((((arr_35 [i_9]) >> (87 - 60))))));
            var_28 = -var_9;
            arr_39 [i_9] [i_10] = (arr_6 [i_10] [8]);
        }

        for (int i_11 = 0; i_11 < 22;i_11 += 1)
        {
            var_29 = (arr_17 [i_11]);
            var_30 = -1;
        }
    }
    /* vectorizable */
    for (int i_12 = 1; i_12 < 15;i_12 += 1)
    {
        arr_44 [i_12] = ((arr_10 [i_12]) >> (-102 + 151));
        var_31 = (arr_12 [i_12] [3]);
        var_32 = ((!(arr_3 [i_12])));
    }
    for (int i_13 = 0; i_13 < 25;i_13 += 1)
    {
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 25;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 25;i_15 += 1)
            {
                {
                    var_33 = 4175938012;
                    var_34 &= (min((((((!(arr_17 [i_14])))) & var_13)), ((var_7 ? ((min(var_8, 8))) : (min(-1079732431, 1))))));
                }
            }
        }
        var_35 *= (min(((((max(0, (arr_14 [i_13]))) > var_4))), ((((14809562846223669464 ? 79 : 9)) << (119029284 - 119029278)))));
    }
    #pragma endscop
}
