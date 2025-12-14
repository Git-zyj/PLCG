/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13917
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((!((min((~var_7), -var_10)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((~(max((~235), (max(var_6, var_11))))));
                arr_5 [i_1] = (max((!-61440), (min(((min(50669, (-127 - 1)))), -12571))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            {
                arr_11 [i_2] [i_3] = ((-(((-(arr_6 [i_2] [11]))))));

                for (int i_4 = 2; i_4 < 19;i_4 += 1)
                {
                    var_16 = (((max(82, 9223372036854775807))));
                    arr_15 [i_3] [i_3] = ((-((+((min((arr_12 [22] [i_3] [i_3] [2]), -115)))))));

                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        arr_18 [i_3] [i_2] [i_4 - 1] [i_3] [i_3] = (~var_12);

                        for (int i_6 = 1; i_6 < 20;i_6 += 1)
                        {
                            arr_21 [i_6] [i_5] [i_3] [i_2] [i_3] [i_2] [6] = (-(min((max(247, (arr_13 [i_3]))), (max(var_12, 14234818087581180278)))));
                            var_17 |= (min(((~(~121))), (((!((min(121, 19643))))))));
                            arr_22 [8] [i_3] [i_3] [i_3] [i_2] = (min((max((~2), ((max(var_9, (arr_12 [0] [i_3] [i_4] [i_3])))))), ((~(~-1103751952)))));
                        }
                        /* vectorizable */
                        for (int i_7 = 1; i_7 < 20;i_7 += 1)
                        {
                            arr_27 [i_3] [i_3] [i_4] [i_3] [i_2] [i_3] = ((~(~var_9)));
                            arr_28 [i_3] = ((~(~38)));
                            var_18 += ((~(!317890699481262257)));
                        }
                        arr_29 [i_5] [i_3] [i_5] [i_5] [i_5] [13] = ((-(max(((max(var_0, -38))), (~var_8)))));

                        for (int i_8 = 2; i_8 < 20;i_8 += 1)
                        {
                            var_19 = (max(((((max(127, 62124))))), (min((~3414868117531160600), (((~(arr_12 [i_2] [i_3] [i_5] [i_8]))))))));
                            var_20 = ((-(((!(!5212193484436618925))))));
                        }
                        for (int i_9 = 0; i_9 < 23;i_9 += 1)
                        {
                            var_21 = ((!((min((!var_8), (max(42876, var_2)))))));
                            arr_36 [i_2] [i_3] [i_4 + 4] [4] [i_9] = (min((max(((max(var_1, var_2))), (max((-127 - 1), var_7)))), (((!(-32767 - 1))))));
                            arr_37 [i_2] [i_3] [4] [i_3] [i_2] [4] [i_3] = ((-(!var_9)));
                        }
                    }
                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        var_22 = (min((max((arr_19 [i_3]), ((max(3424, var_13))))), (((!((min((-127 - 1), -84))))))));

                        for (int i_11 = 1; i_11 < 21;i_11 += 1)
                        {
                            var_23 = ((min(248, 247)));
                            var_24 = (min(var_24, (~2)));
                        }
                    }
                    arr_43 [i_3] = (min((min((max(var_4, 0)), ((min((arr_6 [i_3] [i_4]), (arr_16 [4] [2] [i_3] [i_4 - 1] [12] [i_4])))))), (!var_3)));
                }
                for (int i_12 = 0; i_12 < 23;i_12 += 1)
                {
                    arr_46 [i_3] [i_3] [i_12] [0] = (max((max(50295, 1260623008760557575)), (((!(arr_20 [i_2] [i_3] [i_3] [i_3] [13] [14]))))));
                    var_25 += (~(min(-var_13, 51)));
                    var_26 += (max(((!((max(4096, 52))))), (!-75)));
                }
                /* vectorizable */
                for (int i_13 = 2; i_13 < 20;i_13 += 1) /* same iter space */
                {
                    var_27 = ((-((-(arr_48 [i_3] [i_3] [i_13])))));
                    var_28 = -var_11;
                }
                for (int i_14 = 2; i_14 < 20;i_14 += 1) /* same iter space */
                {
                    var_29 -= (min(((max(((min(61321, var_14))), (max(var_5, (arr_25 [21] [i_3] [i_3] [i_3] [i_3] [i_3] [i_2])))))), ((~(~18076100760627614688)))));
                    var_30 = ((-(((!((min(54, 6))))))));

                    for (int i_15 = 2; i_15 < 21;i_15 += 1)
                    {
                        var_31 = (min(var_31, ((min(1101922504, (max((max(0, -1087606571346942721)), (max(2147479552, 18446744073709551607)))))))));
                        var_32 = ((~((max((!var_10), (min(var_9, 28721)))))));
                    }
                    for (int i_16 = 4; i_16 < 21;i_16 += 1)
                    {
                        var_33 -= ((!(((-(!98))))));
                        arr_59 [i_2] [i_3] [i_2] = ((!((!(!370643313081936937)))));
                    }
                    /* vectorizable */
                    for (int i_17 = 0; i_17 < 1;i_17 += 1)
                    {
                        arr_62 [i_3] [1] [i_17] = var_12;
                        var_34 &= ((-(arr_52 [i_2] [i_3] [13] [i_17])));
                        var_35 ^= ((~(arr_60 [i_14])));
                        var_36 = ((!((!(arr_58 [i_2] [i_3] [i_3] [i_2])))));
                        arr_63 [i_2] [i_3] = ((-(!41)));
                    }
                    for (int i_18 = 0; i_18 < 23;i_18 += 1)
                    {
                        var_37 ^= (-((-(max(var_5, (arr_66 [i_14] [i_2] [i_2] [i_14 + 1] [i_18]))))));
                        var_38 ^= (~-24989);
                    }
                }
            }
        }
    }
    #pragma endscop
}
