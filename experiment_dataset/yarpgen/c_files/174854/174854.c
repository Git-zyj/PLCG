/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174854
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (1 / var_14);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_17 |= (arr_6 [i_0]);

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
                        {
                            arr_12 [i_0] [i_1] [i_0] [i_1] [i_3] [i_4] = ((1 && (arr_8 [i_1 + 1] [i_1 - 3] [i_1 - 3] [i_1 - 3] [i_1 - 2] [i_1 + 2])));
                            arr_13 [i_3] [i_1] [i_2] [i_3] = (1 & -3807544868657248093);
                        }
                        for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                        {
                            arr_17 [i_0] [16] [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_0 [i_0]);
                            var_18 += (((28 & 1) != (arr_3 [i_0] [i_0] [i_0])));
                            var_19 = max((202 <= 7778022356050166754), (arr_3 [i_0] [12] [i_5]));
                        }
                        arr_18 [i_0] [i_1 - 3] [i_2] [i_1 - 3] [i_1 - 3] [i_3] &= (arr_10 [i_1 - 2] [i_1 + 2] [i_1 - 2] [i_0] [i_0]);
                        var_20 &= ((!((max(-1, (arr_10 [i_0] [i_1 - 3] [i_2] [i_2] [i_3]))))));
                    }
                    for (int i_6 = 2; i_6 < 17;i_6 += 1)
                    {

                        for (int i_7 = 2; i_7 < 18;i_7 += 1)
                        {
                            var_21 = (min(var_21, ((((((~var_6) ? (min(421791260751737314, var_4)) : (230 | 37))) | (max(var_5, 15812785312339922477)))))));
                            var_22 = 18446744073709551587;
                        }
                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            var_23 = 1;
                            var_24 = (max(((min((var_4 > 8565372089091313303), (arr_24 [i_8] [0] [i_2] [i_0] [i_0] [i_0])))), (arr_10 [i_0] [i_8] [i_8] [i_8] [i_8])));
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            var_25 &= ((arr_9 [i_1] [i_1 - 2] [i_1 - 2] [i_1] [19]) || (arr_9 [i_0] [i_1 + 1] [i_0] [i_6 - 2] [i_6]));
                            arr_28 [i_9] [i_1] = var_12;
                            var_26 -= var_2;
                        }
                        arr_29 [i_0] [i_0] = (min(((((arr_25 [i_6] [i_6] [i_2] [13] [13] [13]) != var_14))), (((arr_26 [i_2]) ? (!1551143020) : 1))));

                        for (int i_10 = 0; i_10 < 20;i_10 += 1)
                        {
                            var_27 -= (min((((var_11 ? var_12 : var_14))), (arr_11 [i_0] [i_1])));
                            arr_33 [i_0] [i_1] [i_2] = (((((((-26609 & (arr_32 [i_6] [i_6] [i_6] [i_6] [i_6])))) && (!0))) ? 8565372089091313272 : ((((3309982065772844939 | 0) ? -var_4 : ((~(arr_31 [i_10] [i_6] [i_0] [i_1 - 3] [i_0]))))))));
                            var_28 = (var_1 > ((-(~var_14))));
                        }
                        for (int i_11 = 0; i_11 < 20;i_11 += 1)
                        {
                            arr_37 [i_0] [i_0] [i_2] [i_11] = 1;
                            var_29 -= var_9;
                            arr_38 [i_0] [i_0] [i_0] [i_0] = var_10;
                            var_30 = (1 / 1);
                        }
                        arr_39 [i_0] [i_0] [i_0] [i_0] [i_0] = ((((((var_3 && var_14) <= (arr_5 [i_6 + 1] [i_1 + 2] [i_0])))) < ((-((var_2 ^ (arr_21 [i_0] [i_1 - 4] [i_2] [i_6] [i_6])))))));
                        arr_40 [i_0] [i_0] = (max((!var_4), (arr_5 [i_1] [i_2] [i_2])));
                    }
                    arr_41 [15] [i_0] [i_1 - 2] [i_2] = ((((max(-47, (arr_22 [i_1] [i_1 - 1] [i_1 - 4] [i_1 - 3] [i_1 - 2])))) << (((~var_11) - 1268656618))));
                }
            }
        }
    }

    for (int i_12 = 0; i_12 < 25;i_12 += 1)
    {
        /* LoopNest 2 */
        for (int i_13 = 1; i_13 < 22;i_13 += 1)
        {
            for (int i_14 = 3; i_14 < 24;i_14 += 1)
            {
                {
                    var_31 = (max(var_31, (((((max(var_12, (arr_42 [i_13 + 2] [i_14 - 2])))) && (((((max(1, 67))) * (!58)))))))));
                    var_32 = (min(var_32, (((1 ? (((319903922 > (((7480103723698614334 < (arr_44 [i_12] [i_12]))))))) : 189)))));
                    var_33 &= (max((max(1, (arr_42 [i_13 + 2] [i_14]))), (((!(arr_43 [1]))))));
                    arr_50 [i_12] [i_12] [i_12] = var_6;
                }
            }
        }
        var_34 = ((!((max(-var_15, var_5)))));
        arr_51 [i_12] = (arr_45 [i_12] [i_12]);
    }
    #pragma endscop
}
