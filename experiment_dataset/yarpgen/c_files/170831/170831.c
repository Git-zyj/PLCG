/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170831
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, 0));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_21 = (arr_1 [i_2]);
                    arr_8 [i_0] [i_1] [i_2] [i_2] = (min((arr_4 [i_1]), 8228532638063488367));
                    var_22 = (min(var_22, 8228532638063488367));

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        arr_12 [i_0] = (~-8192);
                        var_23 = arr_10 [i_3] [i_1] [i_2];
                        arr_13 [i_0] [i_0] [i_0] [i_0] = ((((((arr_11 [i_3] [i_3] [i_3]) ? (arr_11 [i_0] [i_1] [i_3]) : (arr_11 [i_0] [i_0] [i_0])))) == 10218211435646063256));
                        var_24 = (arr_0 [i_0]);
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        arr_16 [i_0] [i_0] [i_2] [i_4] [i_4] = 10218211435646063256;
                        arr_17 [i_0] [i_0] [13] [3] = (max(((((!1) > (~1)))), (max(((min((arr_3 [i_0]), -476110867))), 0))));

                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            arr_20 [i_0] [i_0] [i_4] [i_2] [i_2] [i_0] [i_0] = var_7;
                            var_25 -= var_17;
                            arr_21 [i_2] [i_0] = (arr_5 [i_0]);
                            arr_22 [i_4] [i_0] [i_4] [i_4] [1] [i_0] [i_4] = var_0;
                        }
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            arr_26 [i_0] [i_4] [i_2] [i_1] [i_0] = var_14;
                            arr_27 [i_0] [i_0] [i_1] [i_0] [i_0] = (min((arr_19 [i_6] [i_2] [i_1] [2]), ((5 ? (arr_11 [i_0] [i_1] [i_4]) : var_14))));
                        }
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            arr_32 [i_0] = (min((((arr_9 [i_0] [i_1] [i_1] [i_1]) ^ (arr_9 [i_0] [i_1] [i_2] [i_4]))), ((max((arr_9 [i_0] [1] [i_1] [i_0]), (arr_9 [i_0] [i_1] [i_1] [i_0]))))));
                            var_26 = (arr_28 [i_7]);
                            arr_33 [i_0] [i_4] [i_0] [i_0] [i_1] [i_0] = var_5;
                            arr_34 [i_0] [i_1] [i_2] [i_2] [i_4] [i_0] = min(((-((min((arr_6 [i_1] [i_4] [i_7]), (arr_28 [i_7])))))), var_7);
                        }
                        var_27 = (max((((arr_4 [i_1]) ^ (arr_0 [i_0]))), 204));
                    }
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        arr_38 [i_0] [i_0] [i_2] [i_8] [i_2] = (min(((min((min((arr_30 [i_8] [i_0] [1] [i_0] [i_0]), var_19)), var_17))), (max((100663296 ^ var_10), ((((arr_2 [i_0] [11]) > var_5)))))));
                        arr_39 [i_0] [5] [i_0] [i_2] [i_0] [i_8] = (arr_28 [i_1]);
                        arr_40 [i_0] [i_0] [3] [3] = (((240 <= 0) ? (max((arr_18 [i_8] [i_2] [i_1] [13] [i_0]), (arr_18 [i_0] [i_1] [i_2] [i_2] [i_8]))) : (arr_25 [i_2] [i_2] [i_1] [i_0])));

                        for (int i_9 = 0; i_9 < 15;i_9 += 1)
                        {
                            var_28 = (max(var_28, ((((((arr_4 [i_0]) ? 18446744073709551615 : (arr_23 [i_0] [12] [12] [i_2] [i_8] [i_9]))) << ((((arr_6 [i_0] [i_9] [i_0]) <= (arr_4 [i_1])))))))));
                            arr_43 [i_0] [i_0] [i_0] [i_8] [i_9] [i_9] [i_2] = (max((arr_9 [i_0] [i_2] [i_1] [i_0]), (((arr_1 [i_9]) ? var_3 : (arr_35 [i_0])))));
                            arr_44 [i_0] [i_1] [12] [i_1] [i_1] = (~(((((-1069476390 ^ 255) + 2147483647)) << (((arr_6 [i_0] [4] [i_2]) - 1)))));
                            arr_45 [i_0] [i_1] [i_0] [i_8] [i_0] = (max((min((arr_7 [i_0] [i_8] [i_9]), (arr_29 [i_0]))), 14495378541114959052));
                        }
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            var_29 = ((-(max((arr_25 [i_8] [i_2] [i_8] [i_8]), (arr_25 [i_10] [i_8] [i_2] [i_1])))));
                            arr_48 [i_0] = (min((237 == var_17), (min((arr_47 [i_0] [i_1] [i_2] [i_8] [i_10]), (arr_47 [i_10] [i_1] [i_2] [i_1] [i_0])))));
                            var_30 = (min(var_30, (arr_30 [i_10] [i_2] [i_2] [i_2] [i_0])));
                        }
                    }
                }
            }
        }
    }
    var_31 = var_5;
    var_32 = (max((max(((min(var_2, var_19))), ((-57 ? var_0 : var_3)))), var_17));
    #pragma endscop
}
