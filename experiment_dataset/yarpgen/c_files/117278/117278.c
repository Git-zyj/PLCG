/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117278
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_10;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = ((0 ^ ((var_1 ^ (arr_1 [i_0] [i_0])))));
        arr_3 [i_0] = (max(var_8, var_5));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        var_12 -= 5343003471343095186;

                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            var_13 = var_2;
                            arr_17 [i_0] [17] [i_2] [i_2] [i_0] [i_4] = (((max(0, (var_3 + 21)))) ? (max((arr_14 [i_0] [i_1] [i_0] [i_2 - 4] [i_2 + 1] [i_2 + 3] [16]), var_8)) : ((((var_3 >= (arr_0 [i_3]))))));
                            var_14 = (min(var_14, -var_5));
                        }
                        for (int i_5 = 2; i_5 < 17;i_5 += 1)
                        {
                            arr_20 [i_0] [i_0] [i_2] [i_3] [i_3] [i_3] [i_5 - 1] = (((arr_12 [i_0] [i_0] [i_0]) & ((var_4 ? 26712 : 4))));
                            var_15 = (max(var_0, (-5343003471343095187 ^ var_2)));
                            arr_21 [i_0] [i_0] [i_2 - 2] [4] [i_5] = (((min(((var_5 >> (var_4 + 2190554455164022441))), var_8)) < (arr_6 [i_1] [i_3])));
                            var_16 ^= (!-9);
                            arr_22 [i_0] [i_0] [i_0] [i_2] [i_5] &= ((1 ? (((((3939254870834279165 == var_7) < (!var_5))))) : ((var_1 ? 26713 : var_10))));
                        }
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            var_17 = (min(var_17, ((((max(var_6, var_2)) / var_4)))));
                            arr_25 [i_6] [i_3] [i_0] [i_1] [i_0] = ((((((((arr_9 [i_6] [i_0] [i_0]) ? var_6 : (arr_12 [i_0] [i_0] [i_0])))) / var_1)) - (((var_4 - (arr_15 [i_2] [i_2 - 1] [i_2] [i_2 + 3] [2] [i_2 - 1]))))));
                            var_18 = min((((-5343003471343095175 ? var_7 : 9728))), (min((arr_23 [i_2] [i_6]), ((var_8 ? var_6 : var_5)))));
                        }
                        arr_26 [i_3] [i_2] [i_0] [i_0] [i_0] [i_0] = ((12 / (var_1 || var_1)));
                        var_19 = ((((((var_8 ? var_5 : var_0))) ? (1610612736 | var_2) : -var_0)));
                        var_20 &= ((((min(var_9, var_10)) << (var_9 - 968345505))));
                    }
                }
            }
        }
        var_21 = (arr_13 [i_0] [i_0] [11] [i_0] [i_0]);
    }
    for (int i_7 = 4; i_7 < 8;i_7 += 1)
    {
        var_22 = ((~(((var_4 + 9223372036854775807) >> (-var_7 - 86)))));
        arr_31 [i_7] = (((var_9 < var_7) ? (((((((1 ? var_8 : (arr_23 [i_7] [i_7]))) + 2147483647)) >> (var_7 + 135)))) : ((((max(var_5, -25377))) ? (min(32070, var_4)) : (((max(var_2, var_10))))))));
    }
    for (int i_8 = 1; i_8 < 21;i_8 += 1)
    {
        arr_34 [i_8 + 1] = (max((min((arr_33 [i_8 + 2]), (max((arr_32 [13]), var_0)))), ((~(arr_33 [i_8 - 1])))));
        arr_35 [i_8] = (!var_8);
    }
    #pragma endscop
}
