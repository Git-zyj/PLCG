/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148697
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(((((var_7 ? var_2 : var_0)) & ((min(12798, var_5))))), ((var_0 ? (~var_5) : var_5))));
    var_12 = ((((~((var_4 ? var_1 : var_3)))) & var_9));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    arr_9 [i_1] [i_1] [i_2] [i_1] = ((!((((arr_7 [i_1] [14] [i_1] [i_2]) - (5 - 4354578328652311737))))));
                    arr_10 [0] [i_1] [i_2] = ((-(!-12799)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_13 = (max(((((((arr_13 [i_0]) - (arr_6 [i_0] [i_1] [i_2])))) ? -12803 : (((!(arr_11 [i_0 + 1] [i_1] [i_2] [i_4 - 2])))))), ((((max(-12790, (arr_1 [i_0])))) ? (arr_1 [i_0]) : (min((arr_8 [i_0 - 1] [i_0] [i_0] [i_1]), (arr_1 [i_0 - 1])))))));
                                var_14 = (arr_5 [i_0 - 1] [i_1] [i_2]);
                                arr_15 [i_0] [i_0] [i_2] [i_1] [i_4] [i_0] [i_4] = (((max((arr_1 [i_0]), 12792))));
                                arr_16 [i_0] [i_4] [i_3] |= ((((!(arr_1 [i_4 + 1])))) ^ (~var_1));
                            }
                        }
                    }
                    var_15 = ((!((((arr_3 [i_2] [i_1] [i_0]) | ((-8777175874114488651 & (arr_0 [i_0] [i_0 - 1]))))))));
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 14;i_6 += 1)
                        {
                            {
                                arr_22 [i_0 + 1] [i_1] [i_0 + 1] [i_5] [i_5] [1] = var_9;
                                var_16 = ((-((((((arr_18 [i_6] [0]) ? 1865608492 : (arr_3 [i_2] [i_6] [i_2])))) ? (((arr_3 [12] [i_1] [i_0]) ? (arr_7 [i_1] [i_1] [i_5 - 3] [i_1]) : (arr_18 [i_5] [i_6 + 1]))) : (((arr_13 [i_0 + 1]) + var_9))))));
                            }
                        }
                    }
                }
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {

                    for (int i_8 = 1; i_8 < 12;i_8 += 1)
                    {
                        var_17 = -86;
                        var_18 = (min((min(-1846682326, ((~(arr_6 [i_8 - 1] [i_7] [i_1]))))), ((((~(arr_21 [8] [i_1] [8]))) | (arr_21 [i_0 + 1] [i_1] [i_7])))));
                    }
                    var_19 = (max((((arr_20 [i_0] [i_0 + 1] [i_0 + 1] [i_0] [i_0] [i_0 - 1] [i_0 + 1]) ^ (arr_24 [i_7] [3] [i_1] [i_1]))), (max((arr_24 [i_0] [i_1] [i_1] [i_1]), (arr_24 [i_0] [i_1] [i_1] [i_1])))));
                }
                var_20 = var_4;
                arr_29 [i_1] [i_1] [i_1] = ((((min(((var_10 ? 12798 : -204469343)), 1))) ? (((((arr_4 [i_0]) <= var_9)))) : ((-(arr_0 [i_0 + 1] [i_0 + 1])))));
                var_21 = (-(arr_8 [10] [i_1] [i_0] [i_1]));
            }
        }
    }
    #pragma endscop
}
