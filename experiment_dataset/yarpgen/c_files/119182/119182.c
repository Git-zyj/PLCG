/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119182
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_15 = (max(var_6, (249 | var_12)));

                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {
                    var_16 = -62;
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((~((((var_14 <= (arr_4 [i_0])))))));
                }
                for (int i_3 = 1; i_3 < 8;i_3 += 1)
                {
                    var_17 = (((((((-17234 ? var_8 : var_11))) <= (var_13 - -7147451292204673334))) ? var_1 : (((-123 > (var_8 == 28))))));
                    var_18 = (max(((~(arr_3 [i_1 - 1] [i_0]))), var_14));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            {
                                var_19 = (~(!62));
                                arr_16 [i_5] [i_0] [i_3] [i_0] [i_0] = ((48110 ? -9778 : 40444));
                                arr_17 [i_0] [i_3] [i_4] [i_0] = ((((((arr_3 [i_1] [i_0]) ? 4026531840 : 10))) ? var_12 : var_13));
                                arr_18 [i_0] [i_0] [i_0] [i_0] [i_5] = ((-((246 ? var_4 : -1567583748))));
                            }
                        }
                    }
                    var_20 = (max((((arr_0 [i_0]) ? 17233 : (max(10, var_13)))), 4));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            {
                                arr_25 [i_1] [i_3] [i_6] [i_0] = var_5;
                                var_21 = (((((max(var_4, (arr_24 [i_6] [i_6] [i_6] [i_6] [i_6]))))) > (((!(((var_8 ? var_0 : (arr_12 [i_6] [i_3] [i_0])))))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        {
                            var_22 = (min(var_22, (((((max(54179, (1 >> var_1)))) ? (((((((-(arr_12 [i_9] [i_1] [i_0])))) && ((((arr_0 [i_8]) ? (arr_20 [i_0] [i_0] [i_0] [i_0]) : var_7))))))) : var_12)))));
                            arr_32 [i_0] = (((-5460724571487026920 - ((1 ? 25064 : -92104882445115608)))));

                            for (int i_10 = 1; i_10 < 9;i_10 += 1)
                            {
                                arr_35 [i_0] [i_1] [i_1] [i_8] [i_9] [i_9] [i_10] = ((~((((min((arr_28 [i_0] [i_0] [i_0]), 31))) ? ((min(var_10, (arr_19 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1 - 1])))) : -var_14))));
                                arr_36 [i_0] [i_1] [i_8] [i_9] [i_0] [i_10] = (arr_15 [i_9] [i_9] [i_0] [i_9] [i_9]);
                                var_23 = ((-((~((-(arr_27 [i_0] [i_8] [i_10])))))));
                                var_24 = (max(((min(var_12, 61733))), (((30 % ((149 ? -47 : 235)))))));
                                var_25 = (((((((((-(arr_3 [i_0] [i_0])))) ^ (~var_9))) + 9223372036854775807)) << (10 - 10)));
                            }
                            arr_37 [i_0] [i_1] [i_0] [i_9] [i_1] = (max(1, (-32767 - 1)));
                        }
                    }
                }
            }
        }
    }
    var_26 = (~var_5);
    var_27 = (min(var_0, var_14));
    var_28 = min(248, 100);
    #pragma endscop
}
