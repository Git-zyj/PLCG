/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163240
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= (((+-102) ? ((var_15 ? 1 : var_3)) : var_13));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_21 = (min(var_21, ((min((min((((-(arr_0 [i_0] [i_1 + 2])))), -var_5)), ((((arr_2 [2] [i_1 + 2]) - ((var_15 ? var_13 : (arr_2 [i_0 - 2] [i_2])))))))))));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_10 [i_0] [3] [i_2] [i_3] |= (min((((arr_1 [i_0 - 1]) ^ (arr_1 [i_0 - 1]))), ((min((arr_1 [i_3]), (arr_1 [i_0 - 2]))))));

                        for (int i_4 = 2; i_4 < 15;i_4 += 1)
                        {
                            arr_13 [3] [i_2] [i_2] [3] [9] = ((var_4 ? ((1 ? (1816205193 * -19) : var_7)) : (((~((var_8 ? (arr_2 [i_3] [i_2]) : (arr_0 [i_2] [i_0 - 1]))))))));
                            var_22 = (((~3) + (((((var_0 ? 64 : (arr_11 [8] [i_2] [i_1] [i_0])))) ? var_11 : (((arr_9 [i_0] [i_4 - 1] [0] [i_3]) ^ (arr_6 [2] [i_1] [i_1 + 3] [14])))))));
                        }
                        var_23 = (!((min((arr_4 [i_2] [i_0 - 2]), var_9))));
                        var_24 = (arr_0 [i_0] [i_0 - 2]);
                    }
                    for (int i_5 = 3; i_5 < 17;i_5 += 1) /* same iter space */
                    {
                        arr_16 [i_0] [i_1] [i_2] [i_5] [7] = (arr_12 [i_0] [i_1 - 2] [1] [i_5] [i_1 - 2] [i_1] [i_5]);
                        arr_17 [i_5] [i_5] [14] [i_1] [i_0 - 1] = ((((min(((3832460334 >> (268435456 - 268435432))), (var_15 - 32)))) ? (min((arr_0 [9] [i_5]), ((var_18 ? (arr_1 [i_0]) : 462506965)))) : ((((((64 << (((arr_11 [i_5] [i_2] [i_1 - 1] [i_0 + 1]) - 80))))) ? (arr_4 [i_0] [i_0 - 2]) : 64)))));
                        var_25 &= ((!((max(((min((arr_9 [i_5] [i_0] [i_1] [i_0]), -64))), ((var_4 ? var_13 : var_19)))))));
                    }
                    /* vectorizable */
                    for (int i_6 = 3; i_6 < 17;i_6 += 1) /* same iter space */
                    {

                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            var_26 = ((((((arr_5 [2]) ? (arr_11 [i_0] [i_0] [i_0] [i_0 - 1]) : var_7))) ? 1 : 899403256));
                            var_27 -= (((((~(arr_7 [i_0] [i_0 - 2] [12] [1])))) && ((((arr_6 [i_0] [i_0] [i_0] [i_0]) ? -65 : (arr_15 [i_6]))))));
                        }
                        for (int i_8 = 1; i_8 < 15;i_8 += 1)
                        {
                            arr_26 [i_0] [i_8] [i_2] [i_6] [12] = (arr_6 [i_8] [i_8 + 3] [i_1 - 2] [i_0 - 2]);
                            arr_27 [i_8] = arr_21 [9] [i_6 - 2] [i_2] [i_1 + 3] [i_0];
                            arr_28 [4] [i_1 - 1] [i_1] [i_1 + 1] [i_8] = var_14;
                        }
                        var_28 = (((-var_1 + 2147483647) >> ((((0 ? 1141817896 : -1683806967)) + 1683806970))));
                        var_29 = (min(var_29, (((((var_8 ? var_14 : var_10))) ? (arr_18 [i_0 + 1] [i_1 - 2] [i_6 - 3]) : (arr_19 [i_0 - 1])))));
                    }
                    for (int i_9 = 3; i_9 < 17;i_9 += 1) /* same iter space */
                    {
                        arr_31 [i_0] [i_1] [i_2] [i_9] [1] = (!-118);
                        var_30 = (min(66584576, (((var_7 ? -var_12 : (var_3 < var_4))))));
                        arr_32 [15] = (arr_2 [i_0] [i_1]);
                        var_31 = (min(var_31, ((!(arr_29 [i_9 - 3] [i_9 - 3] [i_9 + 1])))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
