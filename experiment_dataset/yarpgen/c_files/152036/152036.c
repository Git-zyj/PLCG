/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152036
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((((var_3 == (min(var_11, var_6)))))) & (~var_4)));

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        var_16 = (((((!(arr_1 [i_0] [i_0])))) >= (((arr_0 [i_0 + 3]) | (arr_1 [i_0] [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        arr_10 [i_1] [i_2] [i_0] = (arr_5 [i_1] [i_2 - 1] [0]);
                        var_17 -= (max(20, var_10));
                        var_18 = (max(var_18, (((((arr_8 [10] [i_1] [i_1] [i_1] [i_1]) ? (arr_8 [12] [i_2] [12] [i_3 + 2] [i_3]) : (arr_8 [16] [i_2 - 1] [i_2] [i_2] [i_2])))))));
                        arr_11 [i_0 - 2] [i_0] [i_1] [i_3] = ((-(((!(arr_9 [i_1 - 3] [i_3 + 1]))))));
                        arr_12 [5] [i_1] [i_2 - 1] [i_0] [i_1] [i_1] = (((-32767 - 1) ^ -1088124857));
                    }
                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 15;i_4 += 1) /* same iter space */
                    {
                        var_19 = (min(var_19, var_3));

                        for (int i_5 = 3; i_5 < 15;i_5 += 1) /* same iter space */
                        {
                            var_20 &= var_14;
                            arr_18 [i_0] [i_0] [i_1 + 1] [i_0] [i_0] [i_0] = ((~(~var_7)));
                            var_21 = (((2147483647 ? (arr_5 [i_4] [i_1 - 1] [i_0]) : var_8)));
                        }
                        for (int i_6 = 3; i_6 < 15;i_6 += 1) /* same iter space */
                        {
                            var_22 = (min(var_22, (104 % var_9)));
                            var_23 = (max(var_23, (arr_2 [i_1])));
                            arr_21 [i_0] [i_1] [i_1] [i_2] [i_0] [i_6] = ((var_0 ? (((arr_17 [i_6] [14] [4] [i_4] [i_0] [i_2] [i_2]) ? (arr_2 [i_4]) : 427132994)) : (arr_17 [i_4] [i_4] [i_4 - 1] [i_4 - 1] [i_0] [i_4] [i_4 + 2])));
                            var_24 |= ((8188 + (arr_7 [10])));
                        }
                        var_25 = ((-2087423059 ? (arr_3 [i_0]) : 0));

                        for (int i_7 = 3; i_7 < 14;i_7 += 1)
                        {
                            var_26 = (~var_5);
                            arr_26 [i_0] [i_0] [11] [i_2] [7] [10] = (((arr_19 [i_0 - 3] [i_1 - 2] [i_2 + 1] [i_4 + 2] [i_4 - 1] [i_4 + 1] [i_7 - 2]) == var_7));
                        }
                    }
                    for (int i_8 = 1; i_8 < 15;i_8 += 1) /* same iter space */
                    {
                        var_27 -= 16605220314538672551;
                        var_28 = (arr_25 [i_0] [i_0] [i_0]);
                        var_29 = (arr_23 [i_0] [i_0 + 2] [4] [i_0] [i_2 - 1] [i_8] [7]);
                        arr_29 [i_0] [i_0] [i_1 - 3] [i_0] = (((((arr_28 [i_0] [i_0] [i_8 - 1] [i_8]) == (!0))) ? -903139159 : (min(((min(var_13, (arr_1 [i_0] [i_0])))), (~13581)))));
                    }
                    for (int i_9 = 2; i_9 < 13;i_9 += 1)
                    {
                        var_30 -= (((((arr_15 [i_2] [i_2 - 1] [i_2]) ^ (!-31084))) - ((((-2554037653719010291 ? var_10 : 1170012345))))));
                        var_31 = (arr_8 [i_0] [i_2 + 1] [i_1] [i_0] [i_0]);
                    }
                    var_32 = arr_4 [i_0 + 3] [i_0 + 1];
                }
            }
        }
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 0;i_10 += 1)
        {
            for (int i_11 = 3; i_11 < 16;i_11 += 1)
            {
                {
                    arr_40 [10] [i_0] = ((((min(var_1, (arr_9 [9] [i_0])))) ? (((((arr_27 [12] [1] [12] [i_11 + 1] [i_10 + 1]) && (arr_28 [i_0] [0] [16] [0]))) ? ((((arr_5 [5] [12] [i_11]) + (arr_22 [i_10] [i_10] [i_0] [i_10])))) : var_9)) : (((((arr_7 [i_0]) > (~var_12)))))));
                    arr_41 [i_0] [i_10] = ((((((min((arr_15 [i_0 - 1] [i_10 + 1] [i_11 - 1]), var_7))) || (((arr_39 [i_10] [i_10] [i_0]) && -69)))) ? (((!(!var_12)))) : (((((min(53997, -1663960684))) || (arr_1 [i_0] [i_10]))))));
                    var_33 = (524280 - 94);
                    var_34 = var_5;
                    var_35 = (32736 ? ((((max(56, var_9))) ? ((((arr_24 [i_10] [i_10] [i_0] [i_0] [4]) || var_13))) : (!var_12))) : var_5);
                }
            }
        }
    }
    for (int i_12 = 4; i_12 < 11;i_12 += 1)
    {
        var_36 ^= -771096390;
        var_37 = max(((min(-5256, 1440957236010451812))), ((((((arr_34 [i_12] [i_12] [i_12]) & (arr_9 [i_12] [i_12 + 2])))) ? ((0 ? (arr_39 [i_12] [i_12] [i_12 + 1]) : 5867283143818576027)) : (arr_36 [i_12] [i_12] [i_12] [i_12]))));
        var_38 = (((!-43) | (min(((-(arr_16 [i_12] [6] [6] [i_12]))), (((arr_22 [i_12] [1] [i_12] [14]) ? (arr_42 [i_12] [1]) : 215512322))))));
    }
    #pragma endscop
}
