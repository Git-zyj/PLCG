/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112516
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_17 = var_4;
        var_18 = (max(12320950742898683029, ((min(var_11, (((var_9 >= (arr_3 [i_0])))))))));
        var_19 = (((((((min(89, var_0))) >= (max((arr_0 [i_0] [i_0]), var_2))))) & var_0));
    }
    var_20 = -var_1;
    var_21 = (max(var_15, (min(-4527, 18))));

    for (int i_1 = 2; i_1 < 19;i_1 += 1)
    {
        var_22 |= -461348648;
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 19;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            {
                                var_23 = (min(var_23, ((max((((((var_8 ? (arr_13 [6]) : (arr_1 [i_3] [19])))) ? (((-(arr_6 [i_1])))) : var_13)), (arr_2 [i_1]))))));
                                var_24 |= ((((arr_11 [i_3 - 2] [i_1 - 1] [i_2 - 1] [i_2]) ? -12860 : 89)));
                            }
                        }
                    }
                    arr_17 [i_1] [i_2] = (arr_2 [6]);
                }
            }
        }
        var_25 ^= ((~(min((((((arr_0 [i_1] [i_1]) + 2147483647)) << (((arr_13 [i_1]) - 28980)))), ((min(var_14, var_6)))))));
    }
    for (int i_6 = 4; i_6 < 22;i_6 += 1)
    {
        arr_21 [i_6] = 0;
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 23;i_9 += 1)
                {
                    {
                        var_26 += -var_10;

                        for (int i_10 = 1; i_10 < 21;i_10 += 1)
                        {
                            var_27 *= ((!((max(((max((arr_27 [i_6] [i_9] [6] [i_6] [i_6]), 46))), (((((-127 - 1) + 2147483647)) >> (5533928540177355169 - 5533928540177355141))))))));
                            arr_30 [i_6] [i_7] [i_7] [i_6] [i_7] [i_10] [i_6] = ((200 >> (-28664 + 28674)));
                            arr_31 [i_7] [i_7] = (min(((var_9 * (arr_1 [i_10 + 1] [i_7]))), ((((arr_26 [i_10 - 1] [21] [i_10 - 1] [15] [i_10] [i_10]) < (arr_22 [i_10 - 1]))))));
                        }
                        var_28 = ((255 << (28 - 7)));
                    }
                }
            }
        }
        var_29 = (max((~var_4), ((~((var_4 ? (arr_25 [i_6]) : (arr_19 [8] [13])))))));
    }
    for (int i_11 = 0; i_11 < 18;i_11 += 1)
    {

        for (int i_12 = 0; i_12 < 18;i_12 += 1)
        {
            var_30 &= (max(((var_16 << (((arr_1 [9] [i_12]) - 155)))), ((min(((var_12 ? (arr_1 [i_11] [i_11]) : 0)), 69)))));
            var_31 = ((((((arr_6 [i_11]) == (arr_6 [i_12])))) / (~-7197)));
        }
        for (int i_13 = 0; i_13 < 18;i_13 += 1) /* same iter space */
        {
            var_32 = (max((arr_24 [i_11] [i_11] [i_11]), 15));
            var_33 = (arr_5 [13] [13]);
        }
        for (int i_14 = 0; i_14 < 18;i_14 += 1) /* same iter space */
        {
            arr_44 [i_11] = (arr_22 [i_14]);
            var_34 = (max(var_34, (((!(arr_14 [i_11] [i_14] [3] [i_14] [15]))))));
        }
        arr_45 [i_11] = 1784952949;
        var_35 = (arr_26 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]);
        var_36 = (((~20) & 0));
    }
    for (int i_15 = 0; i_15 < 24;i_15 += 1)
    {
        /* LoopNest 2 */
        for (int i_16 = 1; i_16 < 22;i_16 += 1)
        {
            for (int i_17 = 2; i_17 < 23;i_17 += 1)
            {
                {
                    var_37 = (min((((124 <= ((482336490414366780 ? 21564 : (arr_47 [i_15])))))), var_2));
                    var_38 = (max(((max(var_9, (((-645581762 <= (arr_48 [8] [i_16] [i_15]))))))), var_5));
                }
            }
        }

        /* vectorizable */
        for (int i_18 = 2; i_18 < 21;i_18 += 1)
        {
            var_39 &= (((arr_49 [i_18] [18]) > (arr_49 [i_18] [2])));
            var_40 = (var_11 >= var_9);
            arr_56 [i_15] = var_11;
            var_41 = (max(var_41, (arr_47 [i_18])));
        }
        var_42 = 7;
    }
    #pragma endscop
}
