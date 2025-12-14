/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132832
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 24;i_2 += 1)
            {
                {
                    var_14 = ((57 ? (arr_7 [i_1 + 1]) : ((((((arr_1 [i_0]) ? -52 : (arr_0 [i_0 - 2] [i_1 - 1])))) ? (min(-8, (arr_4 [i_0] [i_2 + 1]))) : ((((arr_7 [i_0]) && var_11)))))));
                    arr_8 [i_2] = (max(4294967295, 1825529929));
                    arr_9 [i_2] = ((((((var_7 | (arr_5 [i_0 - 2]))) + 2147483647)) << (((max((arr_3 [i_1 - 1]), (arr_3 [i_1 - 3]))) - 788444592))));

                    for (int i_3 = 3; i_3 < 22;i_3 += 1)
                    {
                        arr_13 [i_2] = (max(var_2, var_10));
                        var_15 = min((min(8188, 1825529928)), (min((!1), 1148037004)));
                    }
                    for (int i_4 = 3; i_4 < 24;i_4 += 1)
                    {
                        arr_17 [i_0] [i_2] [i_0] [19] [i_2 + 1] = ((-(71 / var_12)));
                        arr_18 [i_0] [i_1] [i_4] [14] [i_4] &= (((max(var_0, var_10))) ? (((127 || (arr_0 [i_0 - 2] [i_1])))) : (1872123720 > 94));
                        arr_19 [i_0] [i_0] [i_2] [i_0] = var_3;
                    }
                }
            }
        }
    }
    var_16 = var_10;

    for (int i_5 = 2; i_5 < 9;i_5 += 1)
    {
        var_17 = (((((((var_10 ? 4294967295 : var_1))) ? var_4 : 8603521598246151199)) * ((((arr_14 [i_5 - 2] [i_5 - 2] [i_5 - 2] [i_5 + 1]) ? (arr_16 [i_5 - 1] [i_5 + 1] [i_5 + 1] [2]) : 1710321140)))));
        /* LoopNest 3 */
        for (int i_6 = 2; i_6 < 8;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 9;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 9;i_8 += 1)
                {
                    {
                        var_18 = (((arr_3 [i_5]) ? var_2 : ((max((!368499693), 163)))));
                        arr_29 [i_8] [i_6 + 2] [i_7 - 1] [i_8 - 1] = ((-(max((((arr_20 [i_5]) + -269134996470249490)), (((var_10 ? 16 : 93)))))));

                        for (int i_9 = 1; i_9 < 8;i_9 += 1)
                        {
                            var_19 &= ((-1 ? -var_5 : -var_3));
                            var_20 = ((((max(var_10, (arr_11 [i_8 - 1])))) ? var_11 : (min(2097151, (arr_27 [i_6 - 1] [i_8 - 1] [i_8 - 1] [i_5 - 2])))));
                        }
                        for (int i_10 = 1; i_10 < 9;i_10 += 1)
                        {
                            var_21 = (max(var_21, ((max(((((((arr_0 [i_10] [i_6]) << (-1 + 2)))) ? ((max(1, (arr_25 [i_5] [4] [i_7] [i_7])))) : ((-35 ? var_0 : 28)))), (arr_32 [i_10 - 1] [i_10] [i_8 + 1] [i_8 + 1] [i_7 + 1]))))));
                            arr_34 [i_8] [i_8] [i_8] [0] [0] = 0;
                            var_22 ^= arr_30 [i_5] [i_7] [i_7 - 1] [i_8];
                        }
                        for (int i_11 = 3; i_11 < 8;i_11 += 1) /* same iter space */
                        {
                            var_23 = (251 >> ((((-(arr_14 [i_7 + 1] [3] [i_6] [4]))) - 95010145)));
                            var_24 = ((min((arr_27 [i_6 + 2] [i_5 + 1] [i_7 - 1] [6]), -2005292058)));
                        }
                        for (int i_12 = 3; i_12 < 8;i_12 += 1) /* same iter space */
                        {
                            var_25 = (min((max((arr_1 [i_5 - 2]), var_10)), (((~(min(4294967291, var_8)))))));
                            arr_41 [i_8] [i_5] [i_5] [1] [i_5] [i_12] = var_11;
                            var_26 = (min((((arr_24 [i_5]) ? (((arr_38 [i_5] [i_5 - 1] [i_5 - 1] [i_5] [i_5 - 1]) ^ var_10)) : var_6)), (((((arr_40 [i_5] [i_6 + 1]) ? 3259300931 : var_0)) + var_7))));
                        }
                        var_27 = var_6;
                    }
                }
            }
        }
        var_28 = (min(var_28, (arr_11 [i_5 - 2])));
    }
    var_29 *= ((~((min(var_7, var_8)))));
    var_30 = var_7;
    #pragma endscop
}
