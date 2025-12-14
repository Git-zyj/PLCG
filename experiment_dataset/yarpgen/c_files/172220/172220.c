/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172220
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [i_1] = min((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))), ((min(var_1, 5))));
                var_14 = (min(127, -6464879846176581972));

                for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
                {
                    arr_8 [i_0] [i_0] [i_2] = (((((arr_0 [i_0]) ? var_1 : (arr_7 [i_1] [i_1] [1] [i_1])))) == (((arr_1 [5] [6]) ? (124 == 1044834187) : var_11)));
                    var_15 = var_4;
                    arr_9 [i_0] [i_0] = (var_12 | (((max((var_12 <= var_12), (var_2 == var_12))))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
                {
                    var_16 = ((((var_12 ? var_1 : var_4)) >= ((var_12 ? var_8 : var_6))));
                    arr_14 [16] [16] &= -1790769768;
                }

                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    arr_18 [i_0] [i_0] = max((((((min(var_3, (arr_12 [i_0] [i_0] [i_0] [i_0])))) ? ((((arr_0 [i_0]) == var_6))) : var_2))), ((var_2 | ((var_8 ? (arr_5 [i_4] [i_1] [i_4] [i_1]) : (arr_11 [6] [6]))))));
                    var_17 &= ((min((arr_3 [i_0]), var_12)) <= (((min((arr_3 [i_4]), (arr_3 [i_0]))))));
                    var_18 |= ((-(((arr_0 [1]) + (arr_0 [4])))));
                    arr_19 [i_0] = (max(((max(12, -24))), (min(var_3, (arr_3 [i_1])))));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        var_19 = ((-((-(arr_3 [i_5])))));

                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            arr_30 [i_0] [i_0] [i_0] [i_0] = (arr_13 [i_0]);
                            var_20 += 26;
                            var_21 = (max(var_21, (((((((arr_13 [1]) ? (arr_16 [i_6]) : var_6))) >= (arr_26 [i_7] [i_1] [i_6] [i_6] [i_1]))))));
                        }
                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            arr_34 [20] [i_1] [12] [i_0] [i_1] [i_1] = (arr_21 [i_0] [i_0]);
                            var_22 = (min(var_22, (((var_2 == (138 | 0))))));
                            var_23 = (min(var_23, (arr_16 [i_6])));
                            arr_35 [18] [i_8] [i_0] [6] [i_0] [i_1] [i_0] = ((1 ? 9281 : 69));
                            arr_36 [i_0] [10] [i_5] [i_5] [i_5] = ((var_2 ? (arr_22 [i_0] [i_0] [i_5] [i_0]) : var_6));
                        }
                        for (int i_9 = 0; i_9 < 22;i_9 += 1)
                        {
                            var_24 = (min(var_24, var_3));
                            var_25 = var_5;
                            var_26 = ((12639215922612751592 | (arr_16 [i_0])));
                            arr_39 [i_0] [i_0] [i_1] [i_1] [i_5] [i_6] [16] = ((var_6 <= (arr_1 [i_0] [i_0])));
                            arr_40 [i_6] [i_1] [1] [i_6] [i_9] &= (((arr_17 [i_9]) ? (arr_33 [i_9] [17] [17] [i_5] [i_1] [i_0] [i_0]) : var_2));
                        }
                        var_27 = var_11;
                        var_28 -= (((arr_11 [i_0] [i_6]) == (arr_11 [i_1] [i_5])));
                    }
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {

                        for (int i_11 = 0; i_11 < 22;i_11 += 1)
                        {
                            var_29 = ((-var_1 ? 5 : ((var_2 ? var_3 : var_5))));
                            arr_45 [i_11] [i_0] [i_0] [i_0] = var_4;
                        }
                        for (int i_12 = 1; i_12 < 18;i_12 += 1)
                        {
                            var_30 = (((((arr_17 [i_0]) || var_12)) || (arr_47 [i_10] [i_12] [20] [1] [i_12 + 3] [i_12 + 3] [i_12])));
                            var_31 ^= (var_0 == var_5);
                            arr_49 [20] [i_0] [i_5] [i_0] [i_0] = arr_17 [i_0];
                            var_32 = (((arr_47 [3] [i_12 + 3] [3] [i_12] [i_12 + 2] [i_12] [i_12]) | (arr_47 [i_12 - 1] [i_12] [i_12] [i_12 + 2] [i_12 + 4] [i_12] [i_10])));
                            var_33 = (((arr_32 [i_0] [i_0] [i_0] [i_0] [i_0]) ? var_4 : (arr_1 [i_0] [i_1])));
                        }
                        var_34 -= ((var_9 ? (arr_43 [i_0] [i_0] [i_0] [13] [i_0] [i_0] [19]) : var_4));
                    }
                    var_35 = ((55 ? 1627525604 : 123));
                    var_36 = (((((3948527673 ? 1627525604 : 255))) ? (arr_38 [i_0]) : (var_2 >= var_12)));
                }
            }
        }
    }
    #pragma endscop
}
