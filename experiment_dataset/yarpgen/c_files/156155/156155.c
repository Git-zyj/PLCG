/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156155
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (var_5 && var_2);

    /* vectorizable */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {

        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            var_15 = var_5;
            var_16 = (min(var_16, ((((arr_5 [i_0] [i_1]) ? (arr_3 [i_0] [2] [i_1 - 3]) : (var_6 & 105))))));
        }
        arr_6 [i_0] [i_0 + 1] = (((arr_3 [i_0 - 1] [2] [i_0 - 1]) * (arr_3 [i_0 - 1] [8] [i_0 - 1])));
        arr_7 [i_0] [i_0 - 1] = (((var_0 * var_3) && ((!(arr_3 [i_0] [8] [i_0 + 1])))));
    }
    for (int i_2 = 2; i_2 < 12;i_2 += 1)
    {
        var_17 = (arr_8 [i_2] [i_2]);
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 12;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 9;i_5 += 1)
                {
                    {

                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            arr_22 [i_2] [5] [i_2] [i_5 - 2] [i_5 + 4] [4] [i_6] = (min((((!(arr_10 [i_2] [i_4] [i_2])))), ((-(min(var_5, var_9))))));
                            arr_23 [i_2] [i_3] [i_4 - 1] [i_3] [i_2] [i_2] = ((var_8 ? ((min((arr_8 [i_2] [i_3]), ((var_12 ? var_10 : 61))))) : ((var_0 ? ((((arr_9 [i_2]) & var_0))) : (min((arr_19 [i_6] [i_5 + 4] [i_4 + 1] [i_3] [i_2 + 1]), var_7))))));
                            var_18 = var_5;
                            var_19 = -2549752971082073102;
                        }
                        var_20 = (((min((arr_20 [i_2] [i_2]), (((arr_17 [2] [1] [i_3] [1] [1] [4]) ? 1083730057 : var_0))))) % (min((min(var_10, var_0)), var_10)));
                        arr_24 [i_2] = 105;
                    }
                }
            }
        }
        arr_25 [i_2] = arr_20 [i_2] [i_2 - 1];
        /* LoopNest 3 */
        for (int i_7 = 2; i_7 < 12;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 11;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 13;i_9 += 1)
                {
                    {
                        arr_32 [i_2] [i_7] [i_9] [i_9] = (((((-(arr_19 [i_2 - 2] [i_2 - 2] [i_2 - 1] [i_2] [0])))) ? (min(-886923660, (min(var_3, (arr_29 [i_2]))))) : (arr_30 [i_7 - 1])));

                        for (int i_10 = 3; i_10 < 12;i_10 += 1)
                        {
                            var_21 = (var_6 == (140 * 3404634626));
                            var_22 = (min(var_22, (((((min(((min(var_11, var_13))), (((arr_19 [i_2] [i_7] [i_8] [i_9] [i_7]) | var_4))))) && ((((var_9 & var_2) ? (~var_13) : (arr_10 [i_9] [i_9] [i_10 + 1])))))))));
                        }
                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 13;i_11 += 1) /* same iter space */
                        {
                            arr_38 [i_11] [8] [i_2] [i_2] [i_7 + 1] [i_2] = 61;
                            var_23 = var_11;
                        }
                        for (int i_12 = 0; i_12 < 13;i_12 += 1) /* same iter space */
                        {
                            arr_42 [i_2 - 1] [i_2] [i_2 + 1] [i_2] [i_2] [i_2 + 1] [i_2] = (min(((1 ? (~2727322118) : (!var_7))), ((min((min(var_1, var_6)), (!var_9))))));
                            var_24 *= min((arr_16 [i_2 - 2] [i_7 + 1] [i_2 - 2] [i_12] [i_9] [i_12]), (((arr_20 [i_7 - 2] [i_7 - 2]) && ((min(7623, 37865))))));
                            var_25 *= ((((min(-4280, var_11))) - (arr_31 [i_2 - 2] [i_8])));
                            var_26 = var_5;
                            arr_43 [i_2] [i_2] [i_2] [i_9] [i_12] = (((((~16037256254479949466) ? var_2 : var_12)) | ((((arr_39 [i_2 - 2] [i_2 + 1] [7] [i_2] [i_2 - 1] [i_2 - 2]) | var_3)))));
                        }
                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 13;i_13 += 1) /* same iter space */
                        {
                            var_27 += (arr_39 [i_2 + 1] [1] [i_7] [i_7] [i_7 - 1] [i_2 + 1]);
                            arr_46 [i_2] [2] [i_2 - 2] [i_2] [i_2 - 2] = (((((arr_12 [i_2]) < (arr_20 [i_13] [i_7])))) + ((((arr_39 [i_2] [i_7 + 1] [i_2] [i_8] [i_9] [i_13]) > var_11))));
                            arr_47 [i_2] [i_2] [i_2] [i_2 - 2] [i_2] [i_2 + 1] = (var_5 / 6504684565213886901);
                            var_28 = (min(var_28, (arr_34 [i_13] [i_7 - 2] [i_8 - 1] [i_7 - 2] [i_2 + 1] [i_13])));
                        }
                        var_29 = (min((((((var_2 ? -31141 : var_7))) ? (arr_30 [i_2 - 2]) : ((var_11 ? var_10 : (arr_41 [i_2] [i_8]))))), var_6));
                    }
                }
            }
        }
    }
    var_30 = (max(var_30, ((51 ? ((~(23928 ^ var_5))) : ((((!((min(var_6, var_12)))))))))));
    #pragma endscop
}
