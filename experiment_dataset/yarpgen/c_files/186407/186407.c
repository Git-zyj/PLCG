/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186407
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        var_18 -= (((min(((-46 ? var_8 : (arr_9 [i_0] [i_1 + 1] [8] [i_3]))), (var_0 | var_5))) & 1));
                        var_19 = ((+(((~255) ? (arr_4 [i_0]) : ((~(arr_8 [i_0] [i_3] [i_3])))))));
                    }
                    for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
                    {
                        arr_15 [i_2] [i_0] = (max(var_16, (((arr_14 [i_0] [i_0] [7] [i_0] [7] [i_4]) / (((arr_14 [14] [i_1 - 1] [i_1] [i_1 - 1] [14] [14]) / -123))))));

                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            arr_18 [i_0] [i_1] [i_1] [i_1] [i_5] = -20607;
                            var_20 = (((3344020742 / (max((arr_14 [i_5] [i_5] [i_4] [i_4] [i_5] [i_4]), var_13)))));
                            var_21 |= (max((max(var_4, (((65527 ? 25 : 0))))), ((max((30 >= var_4), var_1)))));
                            arr_19 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_4] [i_5] |= (max(6, ((0 ? (min(var_13, (arr_12 [i_0] [i_1 - 2] [i_1 - 2] [i_5]))) : var_3))));
                        }
                        var_22 *= ((var_16 >> ((((-var_4 ? (~var_9) : var_12)) + 52397))));
                        var_23 = ((((max((~var_9), (!255)))) - var_3));
                        arr_20 [i_0 + 3] = ((-1361364915 ? ((1 << ((((var_7 - (arr_8 [i_2] [i_2] [i_2]))) + 15144)))) : -84));
                    }
                    for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
                    {

                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            arr_27 [i_6] [i_6] [i_1] [i_2] [i_6] [i_7] [i_7] = (((var_9 * (arr_11 [i_1 + 1]))));
                            var_24 = (min(1, var_8));
                            var_25 *= (((((max(var_12, var_1)))) - (!var_10)));
                        }
                        for (int i_8 = 3; i_8 < 13;i_8 += 1)
                        {
                            var_26 = 6;
                            arr_31 [i_0] [i_1] [i_2] [4] [i_6] [i_6] = (((84 - (min(128, var_6)))));
                        }
                        for (int i_9 = 2; i_9 < 14;i_9 += 1)
                        {
                            arr_34 [i_6] [i_1] [i_1] [i_1] [i_1] [i_1] = -var_8;
                            var_27 += var_2;
                        }
                        arr_35 [i_0 + 2] [i_1] [i_2] [i_6] = (max(((~(min(4610560118520545280, 1)))), (arr_32 [i_0] [i_0] [i_2] [i_0] [i_6])));
                    }
                    for (int i_10 = 0; i_10 < 16;i_10 += 1) /* same iter space */
                    {
                        var_28 &= var_3;
                        var_29 = ((~(min((arr_12 [i_0 + 1] [i_1] [i_2] [i_10]), (arr_26 [i_0 + 2])))));
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 0;i_11 += 1)
                    {
                        for (int i_12 = 1; i_12 < 15;i_12 += 1)
                        {
                            {
                                var_30 = ((((((!var_6) & (arr_13 [i_0] [i_1] [i_1] [i_1] [i_11 + 1] [i_1])))) >= var_6));
                                arr_44 [i_0] [i_1] [i_0] [i_0] [i_12] = ((max(var_4, (~var_11))));
                                var_31 = (max(var_31, 1));
                            }
                        }
                    }
                    var_32 = (min(var_32, ((((var_6 ? (arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [2]) : 1))))));
                }
            }
        }
    }
    var_33 = -5565994392484661007;
    var_34 -= (max((max(((14388756874487667496 ? var_0 : -219135282)), var_16)), var_0));
    #pragma endscop
}
