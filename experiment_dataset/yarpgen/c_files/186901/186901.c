/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186901
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_14 / ((min(var_3, var_11)))));
    var_21 = var_18;
    var_22 = var_4;

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (arr_1 [i_0]);
        arr_4 [8] = (((1 - ((-26 ? var_12 : (arr_1 [i_0]))))));
        arr_5 [i_0] = min((~var_17), (max(var_5, 1152921504606846976)));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    {
                        arr_19 [i_1] [i_3] [i_3] [i_4] = ((+((min((arr_15 [i_1] [4] [i_3] [i_3]), 6967)))));
                        arr_20 [i_3] |= 39509;

                        for (int i_5 = 2; i_5 < 9;i_5 += 1)
                        {
                            arr_23 [i_1] [6] [i_2] [i_3] [i_2] [i_5 - 1] = (min(((((1 ? var_8 : var_15)) >> (~18446744073709551615))), var_16));
                            arr_24 [i_3] = ((var_10 ? ((((((arr_12 [i_1] [i_2] [i_3]) ? var_19 : var_17))) * 0)) : 1));
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                        {
                            arr_27 [i_3] |= (!((min((arr_12 [i_3] [i_3] [i_3]), (~var_12)))));
                            arr_28 [i_2] [i_2] [i_3] [i_3] = ((+((((((max((arr_21 [i_6] [i_2] [i_3] [i_2] [8]), var_6)))) == (max(var_17, var_1)))))));
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                        {
                            arr_33 [i_3] [i_3] [i_3] [i_1] [i_7] &= 4880458918598137112;
                            arr_34 [i_1] [i_1] [i_1] [i_2] [i_1] = ((var_18 ? 0 : (max(3026614856, -var_1))));
                            arr_35 [6] [i_2] [i_2] [i_4] = 4;
                        }
                        arr_36 [i_1] [i_1] [i_3] [i_2] = var_1;
                        arr_37 [i_3] [i_2] [i_3] [i_4] = ((((min(var_19, (!var_12)))) ? (((var_17 ? (arr_18 [i_1] [i_2] [9] [i_4]) : (arr_18 [i_1] [1] [i_3] [i_4])))) : var_5));
                    }
                }
            }
        }
        arr_38 [i_1] = ((((min(45550, var_1))) ? (min(((max(var_16, var_12))), ((~(arr_29 [i_1]))))) : (((((var_9 > (arr_29 [i_1]))) ? var_11 : 4128)))));
        /* LoopNest 3 */
        for (int i_8 = 1; i_8 < 7;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 7;i_9 += 1)
            {
                for (int i_10 = 4; i_10 < 8;i_10 += 1)
                {
                    {
                        arr_48 [i_10] [i_10 - 4] [i_1] [2] [i_8] [i_1] = (arr_17 [i_8] [i_8] [i_8] [i_8 + 2]);
                        arr_49 [4] [1] [i_9 + 1] [6] [i_8] [8] = var_16;
                    }
                }
            }
        }
        arr_50 [i_1] &= (((((var_11 ^ var_10) << (var_18 - 13962))) * ((((min((arr_11 [i_1] [i_1] [i_1]), 62438)) == (var_4 && var_2))))));
    }
    for (int i_11 = 0; i_11 < 10;i_11 += 1) /* same iter space */
    {
        arr_54 [9] = (max(72057594037927935, 1));
        /* LoopNest 3 */
        for (int i_12 = 1; i_12 < 8;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 7;i_13 += 1)
            {
                for (int i_14 = 1; i_14 < 1;i_14 += 1)
                {
                    {
                        arr_65 [i_13] [3] [i_13] [0] [i_13 + 1] = ((var_12 <= (((var_1 % -2124609576) | var_19))));
                        arr_66 [i_13] [i_12] = (min((((((var_5 ? (arr_44 [i_11] [i_13] [i_13] [i_14]) : (arr_51 [i_14]))) >> (((arr_6 [i_12 + 2]) + 13980))))), (((var_10 ? var_10 : var_3)))));
                        arr_67 [i_11] [i_13] [0] [0] [i_11] [7] = (max(((((~var_0) > (arr_14 [i_13])))), ((min(var_3, var_11)))));
                        arr_68 [i_11] [i_13] [1] [i_14] = ((((max(((min((arr_58 [i_11] [i_11] [i_11]), var_19))), (max((arr_0 [i_14] [i_12]), 4419428482542236328))))) ? (max(var_4, ((min((arr_12 [i_13] [i_12] [i_13]), var_18))))) : (65535 - 48460)));
                        arr_69 [i_14] [i_11] [i_13 - 1] [i_11] [i_11] = ((((var_7 << (var_5 - 1265442594)))));
                    }
                }
            }
        }
        arr_70 [i_11] [i_11] = -106;
        arr_71 [i_11] [7] = (min(((max((arr_39 [i_11] [i_11] [i_11]), var_3))), ((var_9 ? 65534 : 4885009060519660689))));
    }
    #pragma endscop
}
