/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1462
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    var_11 = (max(var_11, (((var_4 ? (arr_0 [i_0]) : ((min(var_7, (arr_5 [i_2] [i_1] [i_0 - 3] [i_0])))))))));
                    arr_7 [i_0] [8] [i_2 + 2] = ((~(max((arr_5 [i_2] [i_2 + 3] [1] [i_2]), (-152598531 * 2464362940)))));
                }
                for (int i_3 = 1; i_3 < 16;i_3 += 1)
                {
                    arr_11 [i_0] [3] [i_3] = var_1;
                    var_12 = (max(var_12, (((-(~-152598531))))));
                }
                var_13 = ((((((arr_5 [i_0 + 3] [i_1] [i_0 + 3] [i_1]) ? var_5 : (arr_5 [i_1] [i_1] [i_0 - 3] [10])))) - ((((min(631833259, (arr_4 [i_0] [i_1] [17])))) + (arr_3 [i_0])))));
                var_14 |= ((0 / (min(-152598531, 17))));
                var_15 &= 152598531;

                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    var_16 = arr_8 [i_0] [i_0];
                    arr_15 [i_0] [i_0] [i_4] [i_1] = (min((((arr_1 [3] [i_0 + 1]) ? (arr_1 [i_0] [i_0 - 2]) : (arr_1 [i_0] [i_0 - 2]))), ((935450077 ? (arr_1 [i_0 + 2] [i_0 - 3]) : (arr_1 [i_0] [i_0 + 2])))));

                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            var_17 = (!var_6);
                            arr_22 [i_1] [i_1] [i_0] [i_5] [i_0] [i_0] [1] = var_5;
                            var_18 = ((!var_2) / var_8);
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            arr_26 [i_0 + 2] [i_0 + 2] [i_4] [i_0] [i_0] [i_5] [i_7] = 152598542;
                            var_19 = 18446744073709551615;
                            var_20 = (!1);
                        }
                        var_21 = (((0 ? -631833259 : 1)));
                        var_22 |= (max(7, (max(var_4, (arr_10 [i_0 + 1] [i_0 + 2])))));
                        var_23 = ((~((((((arr_23 [i_0 + 3] [i_0 + 3] [i_0 + 3] [i_0 + 3] [i_0 - 1]) ? 576460752286646272 : 2844009767)) <= 4294967295)))));
                        arr_27 [i_0] [4] [6] [6] = ((93 ? 1 : 1));
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 17;i_9 += 1)
                        {
                            {
                                var_24 = var_7;
                                var_25 = (min(var_25, ((((65535 ? 1 : 2147483647))))));
                                var_26 = (((((arr_3 [i_0]) ? (arr_3 [i_0]) : var_2)) << ((((0 ? -631833259 : 4611686018427387903)) - 4611686018427387870))));
                            }
                        }
                    }
                    var_27 = (~(max((arr_18 [i_0 - 2] [i_4]), (arr_4 [i_0 - 2] [i_0 - 2] [i_4]))));
                }
            }
        }
    }
    #pragma endscop
}
