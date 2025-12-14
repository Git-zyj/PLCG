/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186165
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_12 = ((((!(arr_8 [i_0 + 1] [i_0 + 1] [i_3] [i_0 + 4]))) ? (arr_1 [i_0 + 4]) : (((201326592 ? 98551050 : var_6)))));
                                var_13 ^= -1;
                                var_14 = ((((((var_3 ? (arr_6 [i_0 - 1]) : (arr_1 [i_4]))) != ((((arr_8 [i_1] [i_2] [i_3] [i_3]) ? var_6 : var_8))))) ? (((~(arr_1 [i_0])))) : ((var_2 ? (((32 ? 223 : 3582865705))) : var_3))));
                                var_15 = (~712101591);
                            }
                        }
                    }
                }
                var_16 = var_10;

                for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                {
                    var_17 = ((((((var_4 ? var_0 : (arr_4 [i_0 - 1] [i_0]))) ? (~712101596) : (arr_15 [i_0])))));
                    var_18 = ((max((arr_3 [i_0] [12]), (((arr_16 [16] [i_1]) / var_8)))));
                    var_19 = (min(var_19, (((((((var_3 ^ (arr_14 [i_0] [i_0] [i_0] [i_0])))) ? (712101591 == 22) : (((arr_15 [i_0]) ? 0 : (arr_7 [i_0] [i_1] [i_1] [i_5])))))))));
                    arr_17 [i_0] [i_0] [i_0] [i_0] = var_6;
                }
                for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                {
                    var_20 = (max(3582865705, 21));
                    var_21 ^= (((((~(arr_15 [i_0 + 3])))) % (min((~712101592), (arr_9 [i_0 + 2] [i_1] [1] [i_1] [i_1])))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 17;i_8 += 1)
                        {
                            {
                                var_22 = (max(var_22, (((((((arr_23 [i_0 - 1] [i_1] [10] [i_0 - 1] [i_8]) ? (((arr_0 [9]) ? (arr_7 [i_7] [i_7] [i_1] [i_0 + 3]) : (arr_5 [8] [i_1] [4] [11]))) : var_6))) ? ((var_6 ? (arr_5 [i_7] [i_6] [i_1] [i_0]) : (!var_5))) : (268435455 * 4294967282))))));
                                var_23 = ((((((arr_18 [i_0] [i_0] [i_6]) ? -4745300124552523180 : (arr_9 [i_0] [i_1] [i_6] [i_1] [i_7])))) * (((arr_22 [i_0] [12] [13]) ? (arr_25 [14] [i_0] [14] [i_0] [i_0] [i_0 + 3] [i_0 + 4]) : (arr_26 [i_0] [i_0] [i_0] [i_0] [i_0])))));
                            }
                        }
                    }
                }
                for (int i_9 = 2; i_9 < 19;i_9 += 1)
                {
                    arr_29 [i_0] [i_0] [i_9] = (((arr_18 [i_9 + 1] [i_9 + 1] [i_9]) != (((arr_8 [i_9] [i_9 - 1] [i_1] [i_9 + 1]) ? (arr_18 [i_9] [i_9 - 1] [i_9]) : var_10))));
                    /* LoopNest 2 */
                    for (int i_10 = 3; i_10 < 19;i_10 += 1)
                    {
                        for (int i_11 = 3; i_11 < 17;i_11 += 1)
                        {
                            {
                                var_24 = (min(var_24, var_1));
                                var_25 = ((((((arr_25 [i_11 - 2] [i_11] [i_11] [i_11 - 2] [i_11 - 2] [i_11] [i_11]) ? (arr_25 [i_11 - 2] [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]) : (arr_25 [i_11 - 2] [i_11] [i_11] [i_11 + 3] [16] [i_11] [i_11 - 2])))) / (~var_3)));
                                var_26 -= (((((1873542767 ? 1 : 21))) ? ((-(arr_2 [i_9] [i_11 + 1]))) : var_10));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_12 = 0; i_12 < 1;i_12 += 1)
    {
        var_27 = arr_34 [i_12];
        arr_36 [i_12] [i_12] = var_5;
    }
    var_28 = (min(var_10, (min(((var_3 ? var_11 : 255)), var_6))));
    var_29 -= ((var_6 ? ((((((var_4 ? var_3 : var_9))) ? ((var_8 ? var_10 : var_2)) : (min(1, 452970501))))) : ((var_7 ? var_3 : var_1))));
    #pragma endscop
}
