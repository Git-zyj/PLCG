/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108629
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((~((var_7 ? var_9 : var_3)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_0] = (!((max((arr_2 [i_0 - 1]), (arr_2 [i_0 - 1])))));

                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    arr_9 [8] [i_0] [i_0] [8] = (((((((arr_2 [0]) ? (arr_1 [i_1]) : var_5))) ? (arr_5 [i_0 + 1] [i_2] [i_2 - 1]) : (~-11938))));
                    arr_10 [3] [i_0] [i_0 - 1] = (((((min(122, (189 > -2584634075151166962))))) < var_5));
                }

                for (int i_3 = 3; i_3 < 18;i_3 += 1)
                {
                    arr_14 [i_0] [i_0] = (min((arr_11 [i_3 + 1] [i_1] [9] [17]), ((min(1516099092, 96)))));
                    var_11 = ((((((arr_11 [i_0 + 1] [5] [i_0 + 1] [i_3 - 2]) ? 107 : (arr_11 [i_0 + 1] [i_1] [i_1] [i_3 - 3])))) < (min((((235 ? var_4 : (arr_4 [i_0 - 1])))), var_0))));
                    arr_15 [i_0] [18] = (arr_4 [i_0]);
                }
                for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
                {
                    var_12 = ((-((-var_3 ? ((min(var_7, 159))) : (!-26070)))));
                    var_13 ^= ((~((var_4 ? var_1 : (arr_0 [i_1])))));
                    var_14 = ((((min(234, 101)))) ? (((107 ? 107 : (arr_4 [i_0 - 1])))) : -4679584088805207330);
                }
                for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                {
                    var_15 = (((((arr_8 [5] [5] [i_1] [i_0 + 1]) ^ (arr_8 [i_0 - 1] [i_0 - 1] [i_5] [i_0 + 1]))) ^ (((arr_8 [i_0] [i_1] [i_5] [i_0 + 1]) | var_2))));
                    arr_20 [i_0] [i_1] [i_0] = (arr_3 [i_0] [i_1] [i_0]);
                    var_16 = ((28407 > (max(((-(arr_1 [i_5]))), ((-101 ? 0 : 16))))));
                }
                for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
                {
                    arr_23 [i_0] [1] [i_1] [i_0] = ((((min((arr_17 [i_0] [i_0 - 1]), var_9))) ? ((0 % (arr_21 [i_0]))) : var_2));

                    /* vectorizable */
                    for (int i_7 = 4; i_7 < 17;i_7 += 1)
                    {
                        arr_26 [i_0] [i_7 + 3] [i_6] [0] = var_1;
                        arr_27 [3] [3] [i_1] [i_0] [3] [i_1] = (~0);
                        arr_28 [i_7] [i_6] [i_0] [i_0] [i_1] [i_0 - 1] = 107;

                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            var_17 = (min(var_17, (((-13779 ? (arr_12 [i_0] [i_6] [i_7 + 3] [i_6]) : var_3)))));
                            var_18 = ((-(arr_19 [i_0] [i_1])));
                            var_19 |= 1;
                            var_20 = ((((var_1 ? 206 : (arr_7 [i_1] [i_6] [i_8]))) | 13614));
                            arr_31 [i_0] [i_1] [i_1] [i_0] [i_1] [i_0] [i_0] = (137775718 * 1);
                        }
                    }
                }
                var_21 = (min(var_21, ((((+((var_9 ? (arr_30 [i_1] [i_1] [i_0] [i_1] [i_0]) : (arr_2 [i_1])))))))));
                arr_32 [i_0] [i_0] [i_1] = ((26345 ? (arr_13 [i_0] [i_1] [i_0 + 1] [13]) : ((max((arr_3 [i_0] [i_0] [i_1]), 14164)))));
            }
        }
    }
    #pragma endscop
}
