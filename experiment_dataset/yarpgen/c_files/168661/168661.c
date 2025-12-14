/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168661
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_4 ? (((((var_3 ? var_2 : 12237422778209321661))) ? 2147483646 : ((var_0 ? var_1 : var_0)))) : var_4));
    var_15 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    var_16 ^= ((((-(arr_1 [i_0]))) >= (((!(arr_1 [i_2]))))));
                    arr_6 [i_0] [i_0] [i_2] [8] = (((-var_3 ? 28 : var_7)));
                    arr_7 [i_0] [i_1] [i_2] [i_1] |= ((((((arr_4 [i_0] [i_0] [i_0] [1]) * ((((arr_3 [i_2]) ? (arr_0 [i_0] [i_1]) : -31)))))) ? 9520010959209273240 : (max((arr_4 [i_0] [i_0] [i_0] [i_1]), (var_13 / var_9)))));
                    var_17 = (max(var_17, (max((((arr_3 [i_1]) ? (arr_3 [i_0]) : (arr_0 [i_0] [i_0]))), (min((arr_3 [i_1]), (arr_3 [i_0])))))));
                }
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    arr_10 [i_1] [i_3] = (((max((arr_8 [6] [i_1] [i_1] [i_3]), (arr_8 [i_0] [i_0] [i_3] [i_1]))) / (arr_9 [i_0] [i_0])));
                    var_18 = (((arr_3 [i_1]) ? ((((arr_3 [i_1]) ? (arr_0 [i_1] [i_3]) : (arr_2 [i_0] [i_0] [i_0])))) : var_8));
                }
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    var_19 -= (max(((((((arr_11 [i_0] [i_1]) <= var_0)) ? (1105985877 ^ 849862499) : (arr_13 [i_4])))), var_0));
                    var_20 ^= ((var_4 || ((max(-var_11, var_8)))));
                    arr_15 [i_4] [i_1] [i_0] = ((+((3445104796 ? ((min((arr_13 [i_0]), (arr_2 [i_0] [i_1] [i_4])))) : ((var_6 ^ (arr_9 [i_0] [i_1])))))));
                    var_21 = var_6;
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_22 = (max(var_22, (((-((~(~var_2))))))));
                                var_23 -= arr_19 [i_0] [6] [i_4] [i_5 - 1] [i_6] [i_5];
                                var_24 -= (((var_3 == var_3) ? (min(var_10, ((max(var_3, (arr_13 [3])))))) : ((((31783 / 182) == (((arr_0 [8] [i_1]) ? 2514929049289271798 : (arr_5 [i_4]))))))));
                                var_25 -= 912406903;
                            }
                        }
                    }
                }
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    var_26 = var_8;
                    arr_23 [i_0] [i_1] [i_7] [i_7] = (arr_20 [i_0] [i_1] [1] [i_0] [i_1] [i_1] [i_1]);
                    /* LoopNest 2 */
                    for (int i_8 = 4; i_8 < 9;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            {
                                arr_29 [i_0] [i_7] [i_8] [i_9] = ((((min((arr_26 [i_0] [i_1] [i_7] [i_0]), (((var_8 ? (arr_5 [i_0]) : (arr_27 [i_0] [i_0] [i_0] [i_8] [i_1] [7]))))))) | var_8));
                                var_27 ^= (min((arr_17 [i_0] [i_0] [i_7] [i_8] [9] [i_0]), (arr_19 [i_8 + 1] [i_8 - 1] [i_8 + 1] [i_8 + 1] [i_8 - 4] [i_9])));
                                arr_30 [i_0] [3] [i_0] [i_9] |= (((!var_13) ? (arr_25 [i_8 - 1] [i_8] [1]) : (min((arr_25 [i_8 - 4] [i_8] [2]), (arr_25 [i_8 - 2] [5] [i_8 + 1])))));
                            }
                        }
                    }
                    var_28 = ((((((arr_12 [i_0] [i_0] [i_0]) + var_7))) ? (arr_5 [i_1]) : ((8926733114500278380 ? 8926733114500278376 : -38))));
                }
                arr_31 [i_1] = (arr_9 [i_1] [2]);
                var_29 = 3492135049;
            }
        }
    }
    #pragma endscop
}
