/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125879
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 23;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 23;i_3 += 1)
                {
                    {
                        var_20 = (((-(arr_7 [i_0]))));

                        for (int i_4 = 4; i_4 < 23;i_4 += 1)
                        {
                            var_21 = var_17;
                            var_22 = (((arr_7 [i_0]) || ((((arr_13 [i_2 - 2] [i_2] [i_2] [i_2] [i_2]) | (arr_13 [i_2 + 2] [i_2] [i_2] [i_2] [i_2]))))));
                            arr_15 [i_0] [i_1] [i_2] = (((((-(arr_1 [i_1] [i_2])))) ? (((((((var_7 == (arr_5 [i_4] [i_1] [i_2]))))) < var_15))) : (((arr_11 [i_0]) ? (arr_13 [i_4] [i_4 - 2] [i_4] [i_4] [i_0 - 1]) : (arr_11 [i_0])))));
                            var_23 = (!var_5);
                            arr_16 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] = (((((((40 ? 4279799991 : 3948972852140866912))) >= (min(var_0, (arr_5 [i_0] [i_1] [i_2]))))) ? (arr_5 [i_2] [i_4] [i_2]) : (arr_5 [i_0] [i_0] [i_0])));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            var_24 = (((410536275417328467 ^ 1025462866449228423) >> (((arr_5 [i_0] [i_0 + 1] [i_0]) - 149))));
                            var_25 = (min(var_25, var_17));
                            var_26 = var_6;
                            var_27 = (((arr_2 [i_0 - 1]) < (arr_9 [i_0 - 3] [i_0] [i_2 - 2] [i_2])));
                            arr_19 [i_0] [i_1] [i_2] [i_0] [i_5] = var_6;
                        }
                        for (int i_6 = 1; i_6 < 22;i_6 += 1) /* same iter space */
                        {
                            var_28 = (arr_21 [i_0] [i_0]);
                            var_29 = ((+(min((arr_18 [i_3] [i_3] [i_3 - 1] [i_3] [i_6]), (arr_13 [i_0] [i_1] [i_3 - 2] [i_3] [i_6])))));
                            var_30 = (24452 | 41073);
                            arr_23 [i_0] [i_0] [i_2] [i_0] [i_6] = (((((-(((arr_1 [i_6] [i_1]) | var_14))))) ? (((-(arr_5 [i_2 + 1] [i_2 + 1] [i_2])))) : var_8));
                        }
                        for (int i_7 = 1; i_7 < 22;i_7 += 1) /* same iter space */
                        {
                            arr_28 [i_7] [i_3] [i_0] [i_0] [i_0] [i_0] = ((((((255 || 153) ^ (arr_21 [i_0] [i_0])))) > ((((((arr_5 [i_0] [i_1] [i_7]) & 1))) * (arr_10 [i_0 - 2] [i_7 + 1] [i_0])))));
                            arr_29 [i_0] = var_16;
                            var_31 ^= (arr_24 [i_7] [i_1] [i_2] [i_3] [i_7] [i_2]);
                        }
                        var_32 = (-(arr_24 [i_0] [i_1] [i_2] [i_3] [i_1] [i_2]));
                    }
                }
            }
        }
        arr_30 [i_0] [i_0] = (((var_6 ? (arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : 747388376)));
    }
    for (int i_8 = 3; i_8 < 23;i_8 += 1) /* same iter space */
    {
        arr_34 [i_8] = ((max(-747388380, var_17)));
        arr_35 [i_8] = (~var_2);
        arr_36 [i_8] = (((~(arr_11 [0]))));
    }
    for (int i_9 = 0; i_9 < 16;i_9 += 1)
    {
        var_33 = (((arr_2 [i_9]) & ((((arr_10 [i_9] [i_9] [i_9]) <= -var_8)))));
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 16;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 13;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 16;i_12 += 1)
                {
                    {
                        var_34 -= ((-(max((arr_32 [i_11 + 1] [i_11 + 1]), 155))));
                        arr_46 [i_12] [i_12] [i_11] [i_10] [i_10] [i_9] = ((((((arr_6 [i_9] [i_11]) + (arr_32 [i_12] [i_10])))) ? (((((arr_38 [i_9]) ? var_18 : (arr_42 [i_9] [i_11]))))) : (((arr_10 [i_9] [i_11 - 1] [i_9]) - (arr_10 [i_9] [i_11 + 1] [i_10])))));
                        var_35 = ((!((!(var_18 > var_4)))));
                        arr_47 [i_9] [i_10] [i_11] [i_12] = (((arr_1 [i_9] [i_12]) % var_2));
                        var_36 = (8 + 7103070861225302414);
                    }
                }
            }
        }
        var_37 ^= ((((var_17 & (arr_9 [i_9] [i_9] [i_9] [i_9]))) != (((~((var_11 ^ (arr_8 [i_9] [i_9] [i_9]))))))));
        var_38 = 69414250;
    }
    var_39 = ((((-var_8 & (!var_1))) == var_8));
    var_40 = (min(9674999832504271483, 8196265699299783921));
    #pragma endscop
}
