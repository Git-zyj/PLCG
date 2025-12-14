/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134303
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_10 = (!(arr_3 [i_0 - 1] [i_0]));
        var_11 = (max(var_11, (((((!872972495) ? (arr_3 [i_0] [i_0]) : (((arr_3 [i_0] [i_0]) ? var_1 : 43627))))))));
        var_12 = ((!((!(21902 || 52)))));
        var_13 = (max(var_13, ((max((max(var_1, (arr_1 [i_0 + 1]))), ((min(var_0, (~var_1)))))))));
        arr_4 [i_0 + 1] [i_0 - 2] = (min((((arr_3 [i_0 - 1] [i_0]) ? (arr_3 [i_0 + 1] [i_0]) : var_9)), (!43627)));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_7 [i_1] = (arr_5 [i_1]);
        var_14 = (+-1);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 14;i_3 += 1)
            {
                {
                    arr_13 [i_1] [i_1] [i_3 + 2] = (max((((+(((arr_10 [i_1] [i_1] [i_1]) ? var_8 : var_9))))), 2158478987611062310));
                    arr_14 [6] &= (!var_2);
                    arr_15 [i_3] [i_1] [i_1] [i_1] = (max(((1 >> (!-20089))), 21908));
                    arr_16 [i_1] [i_1] [i_1] [i_1] = (min(((min((arr_11 [i_2]), var_5))), (max(var_2, (arr_8 [i_1] [i_1] [i_1])))));
                }
            }
        }
        arr_17 [i_1] = (((((((var_8 ? (arr_9 [i_1] [i_1]) : (arr_6 [i_1]))) | (((!(arr_12 [i_1] [i_1] [i_1]))))))) * (((((var_6 ? (arr_6 [i_1]) : var_7))) ? (min((arr_6 [i_1]), var_7)) : (((var_3 ? 27649 : (arr_5 [i_1]))))))));
    }
    var_15 = var_4;

    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 18;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 17;i_7 += 1)
                {
                    {
                        var_16 *= (arr_18 [8] [8]);
                        arr_28 [i_4] = (((28900 / -28900) * (((arr_24 [i_5 - 1] [i_6] [i_7] [i_7 + 2]) / (arr_24 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_7 - 2])))));
                        var_17 = ((~((10919 - (arr_24 [i_5 + 1] [i_5 + 1] [i_7 + 1] [i_7])))));
                        var_18 = (max(var_18, var_1));
                        var_19 += ((-(min((arr_24 [i_7] [i_7 - 2] [i_7 + 1] [i_7]), (arr_24 [i_7 + 1] [i_7 - 2] [i_7 + 2] [i_7 + 2])))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 19;i_10 += 1)
                    {
                        var_20 += (((arr_31 [18]) << (((arr_32 [6]) - 9129443183699078110))));

                        for (int i_11 = 0; i_11 < 19;i_11 += 1)
                        {
                            var_21 |= -28923;
                            var_22 = ((288225978105200640 ? (arr_41 [i_4] [i_8]) : (arr_34 [i_8] [i_9] [i_11])));
                            var_23 = ((var_8 ? var_5 : (arr_22 [i_8] [i_8] [i_8])));
                            var_24 &= ((((32756 ? 28900 : var_7)) + (!var_1)));
                            var_25 *= (((arr_35 [i_9] [i_9]) ? -var_7 : var_1));
                        }
                    }
                    for (int i_12 = 4; i_12 < 18;i_12 += 1)
                    {
                        var_26 = (max((min(((var_2 ? -4410028442843071320 : var_9)), ((max(var_0, 32764))))), (min((!12), ((9223372036854775807 ? (arr_31 [i_4]) : var_3))))));
                        var_27 ^= (((((arr_39 [i_12 - 3] [i_12 - 3] [i_12 - 4] [i_12 - 1]) ? var_7 : (((var_1 ? var_4 : var_2))))) >> ((((min(var_3, -28901))) + 28920))));
                        var_28 = (min(var_28, -4043543793448787060));
                        arr_46 [i_4] [i_4] [i_8] [i_8] [i_9] [i_4] = (((((!(((3928642237 ? -4043543793448787060 : var_1)))))) | 28896));
                    }
                    var_29 = (min(var_29, var_6));
                    var_30 = (!var_4);
                    arr_47 [i_4] [i_8] = (arr_32 [i_4]);
                }
            }
        }
    }
    for (int i_13 = 0; i_13 < 17;i_13 += 1)
    {
        arr_52 [i_13] [i_13] = (min(var_9, (((((11 ? (arr_29 [i_13] [i_13]) : 1106243013))) ? var_9 : (arr_31 [i_13])))));
        var_31 = (max(var_31, ((((-4043543793448787060 ? 21881 : 1))))));
    }
    var_32 = (min(var_32, var_3));
    #pragma endscop
}
