/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128262
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_16 = var_8;
        var_17 = (((max((max((arr_1 [i_0]), 60713)), (max(var_5, (arr_1 [i_0]))))) == ((max(var_0, 2277033660)))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {

        for (int i_2 = 2; i_2 < 19;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 4; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    {
                        arr_11 [i_1] [i_1] [i_1] [i_4] = ((((((max((arr_2 [i_1] [i_4]), var_4)) << (((max(var_15, var_4)) - 13178980135083826217))))) && ((max((arr_9 [i_1] [i_1] [13] [i_4] [i_3 - 4]), ((0 % (arr_8 [i_1]))))))));
                        var_18 = (((-(arr_7 [i_3 - 3] [i_3] [i_2 + 1]))));
                        var_19 = (arr_2 [i_1] [i_2 - 1]);
                    }
                }
            }
            var_20 += (max(((140 ? (((arr_5 [i_1] [i_1]) + var_6)) : (((!(arr_10 [i_2] [i_2] [4] [i_1] [i_1])))))), (((max(57606, var_8))))));
            arr_12 [i_1] = (min(((-1675603579 ? 19 : 0)), (arr_5 [i_1] [i_2])));
        }
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            var_21 = (max((var_2 == 140), (max((max(var_6, var_5)), ((max(var_12, 0)))))));

            for (int i_6 = 3; i_6 < 16;i_6 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 4; i_8 < 18;i_8 += 1)
                    {
                        {
                            arr_25 [i_1] [i_1] [i_6] [i_1] [i_8] = (max(((((max(var_14, 2147483647)) == (arr_23 [i_6 - 2] [i_1])))), (max(((var_7 ? (arr_3 [i_1] [i_1]) : (arr_17 [i_8] [i_7] [i_1]))), ((5882103158403666143 ? var_1 : -127))))));
                            arr_26 [i_8] [i_1] [9] [9] [9] [i_1] [9] = (max((max((((1 ? -60 : -30712))), var_9)), (((104 << ((((max(172, -127))) - 163)))))));
                        }
                    }
                }
                arr_27 [i_1] [i_1] [4] = (((arr_15 [i_6] [i_6 + 1] [i_6]) ? (((arr_15 [i_5] [i_6 + 1] [i_6 - 2]) ? var_3 : (arr_15 [i_5] [i_6 + 1] [i_6]))) : (max((arr_15 [i_6 - 2] [i_6 + 1] [i_6 + 1]), 1422744413071373329))));
                var_22 = (max((max(var_8, (arr_22 [i_6] [i_6 - 3] [i_6 - 2] [i_6] [i_6 - 2]))), ((max(var_10, 30731)))));
            }
            /* vectorizable */
            for (int i_9 = 3; i_9 < 16;i_9 += 1) /* same iter space */
            {
                var_23 -= ((var_0 == (arr_10 [i_9 - 2] [12] [i_5] [i_9] [i_9 + 2])));

                for (int i_10 = 0; i_10 < 20;i_10 += 1)
                {
                    var_24 = ((-(arr_19 [i_9] [i_9 - 3] [i_9 + 3] [i_9 - 1] [i_9 + 3] [i_9])));
                    var_25 = (((arr_22 [i_9 - 1] [i_9] [i_9] [i_9] [i_9]) >> (((arr_22 [i_9] [12] [i_5] [i_9] [i_5]) - 12588695597496452742))));
                    var_26 *= (-127 - 1);
                    var_27 = (((arr_7 [i_9 - 3] [i_1] [i_9 - 3]) ? (arr_7 [i_9 + 3] [i_1] [i_9 - 3]) : (arr_7 [i_9 - 3] [i_1] [i_9 + 1])));
                    var_28 = ((31050 ? (arr_32 [i_9] [i_9] [i_9 - 2] [i_9 + 3]) : (arr_32 [16] [i_9] [i_9 + 3] [i_9 - 2])));
                }
            }
        }
        var_29 = (max(var_29, ((max((min(-1536843584946893801, 6)), ((min((arr_3 [18] [18]), ((1310033159 ? (arr_3 [i_1] [2]) : (arr_13 [i_1] [i_1] [i_1])))))))))));
        arr_33 [i_1] = (max(2707, (((((max((arr_17 [i_1] [i_1] [1]), var_14)))) >= var_10))));
        /* LoopNest 2 */
        for (int i_11 = 1; i_11 < 18;i_11 += 1)
        {
            for (int i_12 = 2; i_12 < 17;i_12 += 1)
            {
                {
                    var_30 = (max(var_30, (((((-8057 ? (~2139025197) : (arr_29 [i_12]))) + var_14)))));
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 20;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 20;i_14 += 1)
                        {
                            {
                                var_31 = (240 + 84);
                                arr_46 [i_1] [i_12] [i_13] [i_1] = (((min(var_14, ((31 ? -105 : (arr_18 [3] [3] [i_14]))))) / 2067722046));
                            }
                        }
                    }
                }
            }
        }
        var_32 *= (max(((~(arr_4 [i_1] [i_1] [10]))), (((arr_4 [8] [i_1] [8]) ? (arr_4 [4] [i_1] [1]) : (arr_4 [i_1] [i_1] [14])))));
    }
    /* vectorizable */
    for (int i_15 = 0; i_15 < 1;i_15 += 1)
    {
        var_33 = var_8;
        var_34 = (arr_40 [i_15] [i_15] [i_15] [1]);
    }
    var_35 = (max((max(var_10, (min(-1279372208900632267, var_7)))), ((min(var_7, 124)))));
    #pragma endscop
}
