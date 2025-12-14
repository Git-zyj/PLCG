/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131978
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_19 = (max((!var_1), (!-63)));
        arr_2 [11] = (min(((107 || (!185))), ((!(!41191530)))));
    }
    var_20 = var_4;

    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        arr_6 [i_1] = (244 != 3935989461);
        var_21 = (((arr_1 [1]) ? (((((var_15 ? (arr_3 [i_1]) : 1))))) : 1565251404));
        var_22 *= (arr_1 [1]);
    }
    for (int i_2 = 1; i_2 < 11;i_2 += 1)
    {
        var_23 = (((!((((arr_3 [i_2]) ? 0 : 71))))));
        var_24 -= (1865072151 + 2897574190);
        var_25 = (((((-(arr_8 [i_2])))) ? (max((arr_1 [9]), (((!(arr_5 [i_2 + 2] [i_2])))))) : ((((max(var_5, 71))) ? (arr_5 [i_2] [i_2]) : ((82 ? -2037306525503165684 : (arr_4 [1])))))));
    }
    for (int i_3 = 3; i_3 < 12;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        var_26 &= var_10;
                        var_27 ^= (arr_10 [i_3]);
                    }
                    arr_20 [i_3] [2] [2] &= ((arr_0 [i_3 - 2]) ? (((arr_16 [4]) ? (arr_15 [i_3 - 2] [i_4] [i_5]) : var_11)) : -90);
                }
            }
        }
        var_28 -= (min(-89, (max(5439806065526643925, (((2897574187 ? 1719728116 : 1719728116)))))));
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 9;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                {
                    var_29 += (arr_9 [i_3 - 1] [i_7]);
                    var_30 += (arr_21 [i_3 - 1]);
                    var_31 = (max(76, 1));

                    for (int i_9 = 2; i_9 < 11;i_9 += 1)
                    {
                        arr_29 [i_3] [0] [i_8] [i_9] [i_8] [10] = ((((!(((arr_26 [i_3] [i_7 + 3] [i_8] [i_9]) <= (arr_26 [i_3] [i_7] [i_8] [i_7]))))) ? (((min(var_11, 9)))) : (((max(var_18, (arr_4 [i_3])))))));
                        arr_30 [i_3] = ((var_16 - ((((((arr_4 [i_3]) || 83)) || ((!(arr_3 [i_3]))))))));
                        var_32 -= 89;
                        arr_31 [i_8] [i_8] [1] [i_7] &= -var_8;
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_10 = 3; i_10 < 16;i_10 += 1)
    {
        for (int i_11 = 2; i_11 < 14;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 17;i_12 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_13 = 4; i_13 < 16;i_13 += 1)
                    {
                        for (int i_14 = 3; i_14 < 13;i_14 += 1)
                        {
                            {
                                var_33 = ((((2897574199 ? -1818101958696084385 : 15449719874579606587))) ? 1 : (!-2332802785561736051));
                                var_34 = (min(var_34, (((((!(((4580525695733908269 ? 1197053932 : 1565251416)))))) + -1197053910))));
                                var_35 = (arr_39 [i_10 - 2] [i_10 - 2]);
                                var_36 *= ((((arr_40 [i_10 - 1] [1] [12] [10] [10] [4] [i_14 - 3]) ? var_17 : (arr_1 [i_12]))));
                            }
                        }
                    }
                    arr_43 [i_10 - 3] [i_10 - 3] [i_12] = var_14;
                    var_37 *= 1;
                }
            }
        }
    }
    #pragma endscop
}
