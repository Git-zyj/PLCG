/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138552
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1 - 2] = ((~(((-(arr_0 [i_0] [i_0]))))));
                var_14 -= ((((min((arr_2 [0]), (((1 << (110 - 99))))))) ? ((((arr_0 [i_0] [i_0 - 2]) ? var_8 : (arr_1 [i_1])))) : ((((!(arr_0 [i_1 + 2] [i_0 - 1])))))));

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0 - 1] [i_1] [i_2] [i_3 - 1] [i_0] = (((((arr_9 [i_0]) * (arr_9 [i_0]))) & var_3));
                                var_15 = (max(var_15, var_6));
                                arr_16 [i_0] = (((((9 ? 121 : 1))) ? (arr_14 [i_2] [i_1] [i_2] [i_1]) : (((var_8 ? var_6 : (arr_1 [i_0]))))));
                                var_16 = (max(var_16, (arr_11 [i_4 + 2])));
                            }
                        }
                    }
                    arr_17 [i_0 + 2] [i_2] |= (arr_12 [i_0] [i_1 + 1] [i_2] [i_1] [i_0 - 1] [i_1 - 1] [5]);
                    var_17 |= (((max((arr_1 [i_1 - 3]), var_6)) != var_6));
                }
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    var_18 = (((arr_3 [i_0 + 1] [i_0]) / ((3016626018 ? 1462880566280159705 : 65527))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 11;i_7 += 1)
                        {
                            {
                                var_19 -= ((1 ? (!var_6) : (arr_20 [i_7 - 2] [i_5] [i_5] [10])));
                                arr_26 [i_0] [i_6] [i_0 + 2] [i_5] [i_1] [i_0 + 2] [i_0] = (arr_9 [i_0]);
                                arr_27 [i_0] = ((+(((arr_19 [i_0 + 1] [6] [i_0] [i_0 + 2]) * ((var_9 ? var_2 : (arr_3 [i_1 - 3] [i_0])))))));
                            }
                        }
                    }
                }
                for (int i_8 = 2; i_8 < 9;i_8 += 1) /* same iter space */
                {
                    var_20 = ((!(!var_9)));
                    arr_31 [i_0] [2] [i_0] &= ((!(arr_9 [12])));
                }
                for (int i_9 = 2; i_9 < 9;i_9 += 1) /* same iter space */
                {
                    arr_34 [i_0] [1] [i_9] [i_0] = (((65527 ? -4849027815169740982 : (arr_2 [i_0]))));
                    arr_35 [i_9 + 3] [i_9 + 3] [0] [0] |= (((min((min((arr_29 [i_0] [8]), (arr_21 [1] [10]))), (((var_12 ? (arr_9 [10]) : (arr_9 [10])))))) != (arr_12 [i_0] [12] [i_1] [8] [i_9 + 4] [i_9] [12])));
                }
                var_21 = (arr_8 [i_1 + 3] [i_1 - 3]);
            }
        }
    }

    for (int i_10 = 0; i_10 < 15;i_10 += 1)
    {
        arr_40 [i_10] [0] = (arr_39 [i_10]);
        arr_41 [i_10] = (!var_9);
    }
    #pragma endscop
}
