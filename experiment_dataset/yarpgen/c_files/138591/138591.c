/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138591
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((!(((-(((arr_1 [i_0] [i_1]) ? var_1 : (arr_1 [i_1] [i_0]))))))));
                var_16 *= ((1085743717 % (((((((~(arr_0 [i_0] [i_0])))) <= (arr_3 [i_0 - 2])))))));

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    var_17 = (arr_3 [i_1]);
                    arr_9 [i_0] [i_2] [i_2] = ((~(((((arr_0 [i_0] [i_1]) + 2147483647)) << (((min(var_9, (arr_3 [i_1]))) - 1305711734))))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                arr_19 [i_0 + 2] [i_4] [i_3] [i_4] [i_0 + 2] = (((arr_15 [i_0 + 1] [i_0 + 1] [i_3] [i_3]) ? (arr_8 [i_1] [i_3] [i_1]) : var_4));
                                var_18 -= ((((arr_3 [i_0]) % (arr_14 [i_0] [i_1] [i_1]))));
                                var_19 -= ((~(((arr_17 [i_1] [i_3] [2] [i_3] [i_1] [i_1]) ? 68719472640 : (arr_10 [i_0] [i_0] [i_0] [i_0])))));
                            }
                        }
                    }
                    arr_20 [i_0] [i_1] [0] [i_3] = (((arr_15 [i_0] [i_1] [i_3] [i_1]) >= (arr_5 [i_1] [i_1])));
                    arr_21 [i_0] [i_3] [i_3] [0] = ((1521171690294909264 ? (((0 || (arr_15 [i_0] [i_0] [i_0] [i_0])))) : (arr_5 [i_1] [i_1])));
                }
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    var_20 = (min(var_20, (((((arr_17 [i_6] [i_6] [i_0 - 2] [i_0] [i_0] [i_0 - 1]) ? (arr_17 [i_1] [i_0] [i_0 + 1] [i_0] [i_0] [i_0 - 2]) : (arr_23 [i_0] [i_0 + 2] [i_0 - 2])))))));
                    var_21 -= (~-8312613992383927657);

                    for (int i_7 = 1; i_7 < 10;i_7 += 1)
                    {
                        arr_28 [i_0] [i_0] |= (arr_5 [i_1] [i_1]);
                        arr_29 [i_0 + 1] [i_1] [i_6] [i_7] = ((-683826757 ? (arr_5 [i_1] [i_1]) : (!-8352471801737202319)));
                    }
                    for (int i_8 = 2; i_8 < 10;i_8 += 1)
                    {
                        var_22 -= ((((min((arr_17 [i_6] [i_8 - 1] [i_8 + 2] [i_0 - 2] [i_0 - 1] [i_6]), (var_5 + var_4)))) ? ((((max((arr_11 [i_0] [i_1] [i_0]), var_0)) % ((((arr_26 [i_8]) >> (var_5 + 51))))))) : ((((min(119710668190260329, -1073741824))) ? (arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (~var_8)))));
                        var_23 = ((~((var_4 ? ((((arr_7 [i_8] [i_1]) ? (arr_6 [i_0 + 1] [i_0]) : var_2))) : ((var_1 - (arr_12 [i_0] [i_1] [i_6])))))));
                        var_24 = ((!((min((~var_0), (!var_1))))));
                    }
                    var_25 = ((+((~(((arr_11 [i_6] [i_0] [i_0]) ? (arr_8 [i_0 + 2] [8] [i_6]) : (arr_16 [i_6] [i_6] [i_6] [i_0])))))));
                    arr_33 [i_0] [i_1] = (max(((~(arr_13 [i_0 + 1] [10] [i_1] [i_0] [i_0] [i_1]))), (((arr_13 [i_0 - 1] [i_1] [i_1] [i_1] [i_6] [i_6]) | (arr_0 [i_0 + 1] [i_0])))));
                }
            }
        }
    }
    var_26 = ((var_9 | ((min(var_8, var_10)))));
    #pragma endscop
}
