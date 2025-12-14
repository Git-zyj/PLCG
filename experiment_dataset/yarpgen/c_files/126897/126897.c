/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126897
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, var_4));
    var_13 = (max(var_13, (max(var_5, var_9))));
    var_14 = var_9;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((((!(arr_2 [i_0]))) ? ((~((var_1 ? 0 : (arr_0 [i_0]))))) : -1));
        arr_4 [i_0] = (((((255 ? (((!(arr_2 [i_0])))) : (arr_1 [i_0] [i_0])))) && ((((arr_0 [i_0]) ? (arr_0 [i_0]) : var_4)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    var_15 = ((((-1456369861 ? var_6 : ((7 ? 9223090561878065152 : 1))))) ? ((((((arr_6 [i_0]) | var_1))) ? var_6 : var_10)) : (max(var_9, var_7)));
                    var_16 = ((!(arr_1 [i_0] [i_0])));
                    var_17 -= ((((((arr_6 [i_1]) ? (arr_7 [i_2 - 1] [i_1] [i_1] [i_2 + 3]) : (arr_1 [i_2 + 3] [i_2 + 3])))) ? (arr_0 [i_1]) : (((-(((arr_6 [i_1]) + var_3)))))));
                    arr_9 [i_0] = ((-249 < (((((var_6 ? 1 : var_5))) ? var_4 : (arr_6 [i_0])))));
                }
            }
        }
    }
    for (int i_3 = 3; i_3 < 9;i_3 += 1)
    {
        arr_13 [i_3] [i_3] = ((((!(arr_11 [i_3 + 2]))) ? (arr_12 [i_3]) : ((((arr_10 [i_3 + 3]) || (arr_11 [i_3 - 1]))))));
        arr_14 [i_3] = var_10;
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                {
                    var_18 -= (min(((((arr_15 [i_3] [i_3 - 1] [i_5]) + (arr_17 [i_3])))), var_11));
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                arr_26 [i_3 - 1] [i_3] [i_5] [i_6 - 1] [i_7] = (max(var_11, (((arr_23 [i_3 + 2] [i_3]) ? (arr_23 [i_3 + 2] [i_3]) : (arr_23 [i_3 + 2] [i_3])))));
                                arr_27 [i_3] [i_3] [i_5] [i_6] = ((((max((arr_18 [i_3] [i_3] [i_6 - 2] [i_6]), var_9))) ? (((max(var_1, (arr_15 [i_3 + 3] [i_3] [i_6 + 1]))))) : ((-((var_6 ? (arr_18 [i_3] [i_3] [i_5] [i_3]) : var_11))))));
                                arr_28 [i_3] [1] [i_5] [1] [1] [1] [i_6] = ((((max((arr_10 [i_6 + 2]), (max(var_11, var_1))))) ? var_11 : var_11));
                                arr_29 [i_3] [i_3] [i_5] [i_6 - 1] [i_3] [i_7] [i_7] = ((((1 ? (arr_22 [i_3] [i_6] [i_6] [i_6 + 1] [i_6 + 2]) : 0))) ? ((var_4 ? var_5 : (arr_11 [i_6 - 3]))) : ((max((arr_17 [i_7]), (arr_16 [i_3] [i_3 - 3])))));
                            }
                        }
                    }
                    arr_30 [i_3] [i_3] = (((~((~(arr_25 [1] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]))))));
                    arr_31 [i_3] [i_3] [i_3] [6] = max((!0), (max((arr_11 [i_3 + 3]), (arr_11 [i_3]))));
                    arr_32 [i_3] [i_4] [i_3] [11] = (min(var_0, (((!(arr_17 [i_3 - 3]))))));
                }
            }
        }
        arr_33 [i_3] = (((max(((var_6 ? (arr_19 [i_3 - 2] [i_3 - 2]) : 524224)), (min((arr_18 [i_3] [i_3] [4] [i_3]), var_1)))) >> (24468893543555691 - 24468893543555630)));
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        var_19 = (max(var_4, (arr_34 [i_8])));
        var_20 = var_9;

        for (int i_9 = 0; i_9 < 21;i_9 += 1)
        {
            var_21 -= -255;
            arr_39 [i_8] = (((max(14166404533352833918, 6007189396665500003))) ? 178403035 : 1290662373);
        }
        for (int i_10 = 1; i_10 < 20;i_10 += 1)
        {
            arr_43 [i_8] = (max(((~(min(var_10, var_3)))), ((0 ? 228 : 4085566989475601377))));
            var_22 = (((arr_42 [i_8]) <= 1));
            var_23 = ((!((((((var_5 % (arr_42 [i_8])))) ? var_7 : 1)))));
        }
        var_24 -= (((((arr_40 [i_8]) | var_4))) ? (~var_9) : (((524224 ? (arr_38 [i_8]) : (arr_37 [i_8] [i_8] [16])))));
    }
    #pragma endscop
}
