/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144980
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= var_13;
    var_21 = var_2;
    var_22 = (max((((var_7 ? var_4 : var_16))), ((((((3689528614 ? 32767 : var_19))) ? ((605438681 >> (var_9 - 212230255))) : (((var_2 ? var_12 : var_1))))))));

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    arr_10 [i_0] [13] [i_0] = ((~(((arr_9 [i_2 - 1] [i_2] [i_2 - 2]) ? var_0 : var_6))));
                    arr_11 [i_0] = (min(((((arr_5 [i_2] [19] [i_0 + 2]) ? var_5 : 18))), 18446744073709551615));

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        var_23 ^= ((!((((var_11 ? (arr_8 [i_2] [i_2]) : var_4))))));
                        arr_16 [i_0] = ((arr_7 [i_3] [i_0] [i_0]) + (~var_12));
                    }
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        var_24 &= (((arr_8 [i_2] [i_2]) ^ ((((5532 ? -435700398 : 60003))))));
                        arr_21 [i_0] [i_0] [i_2 - 1] [i_2] [i_0] [i_4] = (((var_1 | var_18) ? ((((((var_1 ? (arr_2 [i_0]) : var_9)) != (!var_7))))) : (((min(var_16, var_17)) - -2010275650))));

                        /* vectorizable */
                        for (int i_5 = 3; i_5 < 21;i_5 += 1)
                        {
                            arr_24 [i_5] [i_0 + 1] [5] [i_0] [i_1] [i_0 + 1] [i_0 + 1] = (((arr_4 [i_0]) + var_4));
                            arr_25 [i_0] [i_4] [i_2] [i_1] [i_0] = ((~(var_12 / 5532)));
                        }
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            var_25 &= (!((((var_2 | (arr_18 [i_0 + 1] [i_1] [i_4] [i_2]))))));
                            var_26 &= (((arr_12 [i_0]) ? (max(var_8, (((var_17 / (arr_8 [i_2] [i_4])))))) : var_6));
                        }
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            var_27 ^= (min(((-(arr_18 [i_0 + 3] [i_0 + 3] [i_4] [i_7]))), ((((var_9 ? var_16 : var_1)) / 1475118189046357397))));
                            arr_31 [i_0] [i_1] [i_1] [i_1] [i_0] = (var_9 - var_8);
                        }
                        arr_32 [i_0] [i_1] [i_2] = ((((((460344062 << (1622817262 - 1622817262))))) ^ (min((~5532), ((var_4 & (arr_1 [i_0])))))));
                    }
                    for (int i_8 = 2; i_8 < 19;i_8 += 1)
                    {
                        arr_36 [i_1] [i_0] [i_1] [i_1] = (arr_12 [i_1]);
                        var_28 ^= var_4;
                        var_29 += (arr_13 [i_0] [i_0] [i_0] [i_8] [i_8] [i_8 - 2]);
                    }
                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        var_30 = (((var_10 - (arr_5 [i_0] [i_0] [i_0]))));
                        var_31 = (((var_13 ? var_10 : (min(var_12, (arr_29 [i_2] [i_2] [i_2] [i_2] [i_9] [i_1] [i_0]))))));
                        var_32 -= var_8;
                        arr_39 [i_0] [i_0] [i_2] [i_0] = (max((((-2592377304813551249 ? var_8 : (((arr_33 [i_9] [i_2] [i_0] [i_0]) ? (arr_8 [i_0] [i_9]) : var_8))))), ((13626987461855326955 + (((var_17 + (arr_12 [9]))))))));
                    }
                    var_33 = ((var_0 ? var_3 : ((-(var_9 + var_0)))));
                }
            }
        }

        /* vectorizable */
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            arr_44 [i_0] = ((var_12 + (arr_35 [i_0 + 1])));
            var_34 = (((((var_13 ^ (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (arr_35 [i_0]) : (arr_13 [2] [i_0] [i_0] [i_0] [18] [i_10])));
        }
        /* LoopNest 2 */
        for (int i_11 = 2; i_11 < 18;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                {
                    var_35 = var_12;
                    arr_50 [i_0] [i_0] [i_0] [i_0] = (-(arr_41 [i_0] [i_11 + 4] [i_0]));
                    arr_51 [i_0] [i_11] [i_11] [i_11] = (((201 / ((((arr_37 [i_0] [i_11] [i_0] [16] [i_12] [i_11]) - 71))))));
                }
            }
        }
    }
    for (int i_13 = 0; i_13 < 20;i_13 += 1)
    {

        for (int i_14 = 0; i_14 < 20;i_14 += 1)
        {
            arr_57 [i_14] = ((var_13 || ((((arr_20 [i_13] [i_14] [i_13] [i_13] [i_13]) + (arr_29 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] [i_14]))))));
            arr_58 [i_13] [i_14] [i_14] = max(((((arr_46 [10] [i_14]) ? var_12 : (arr_17 [i_13] [i_13] [15] [i_13] [12])))), var_8);
        }
        arr_59 [i_13] [i_13] = var_6;

        for (int i_15 = 1; i_15 < 18;i_15 += 1)
        {
            arr_62 [i_15] = (arr_38 [i_15 + 2] [i_15 + 1] [i_15 - 1] [i_15 + 2] [i_15 - 1]);
            var_36 ^= arr_45 [i_15 + 1] [i_15 + 1];
        }
    }
    var_37 = var_4;
    #pragma endscop
}
