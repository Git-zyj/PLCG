/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188016
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_0] [i_1] [i_1] [i_1] [4] = (((((((min((arr_10 [i_0] [i_0] [i_1] [i_0] [i_0]), (arr_10 [i_1] [i_0] [i_1] [i_3] [i_3])))) || -2251799811588096))) > ((((arr_6 [i_1]) && var_4)))));
                            var_13 = (max(var_13, (arr_3 [7])));
                        }
                    }
                }
                arr_12 [i_1] = ((((-var_8 >= (1 != var_10)))));
            }
        }
    }

    /* vectorizable */
    for (int i_4 = 1; i_4 < 16;i_4 += 1) /* same iter space */
    {
        var_14 += (18444492273897963520 && 1793409190);
        arr_15 [i_4] = (!-4468);
    }
    for (int i_5 = 1; i_5 < 16;i_5 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                {

                    for (int i_8 = 0; i_8 < 18;i_8 += 1) /* same iter space */
                    {

                        for (int i_9 = 0; i_9 < 18;i_9 += 1)
                        {
                            arr_28 [i_5] [i_5] = ((!((!(~var_4)))));
                            var_15 = (max(var_15, (((((max(-var_12, (max(-22, var_10))))) + (min(253304279, (max(var_4, var_11)))))))));
                            var_16 = (min(var_16, 5319229576895726188));
                        }

                        for (int i_10 = 0; i_10 < 18;i_10 += 1)
                        {
                            arr_31 [i_5] [12] [i_7] [12] [i_10] |= var_4;
                            arr_32 [i_5] [i_6] [3] [i_8] [i_6] = (!var_2);
                            arr_33 [12] [12] [i_5] [i_5] [i_5] [i_5] = (max((!-var_3), (max((10514286421604292364 <= 18444492273897963520), 2305843009213628416))));
                            arr_34 [1] [i_6] [i_5] [i_6] [i_6] = 18444492273897963520;
                            arr_35 [i_5] [i_6] [i_5] [4] [i_8] [i_10] = (-(arr_26 [i_5] [i_6] [i_7] [i_8] [i_10]));
                        }
                        for (int i_11 = 4; i_11 < 16;i_11 += 1)
                        {
                            var_17 ^= 253304279;
                            var_18 -= (max(((min(0, -4150696118567348820))), (-2251799811588096 + 7932457652105259251)));
                            arr_40 [i_5] [10] [i_5] [i_11] [i_11] [i_11] = 0;
                        }
                        for (int i_12 = 0; i_12 < 18;i_12 += 1)
                        {
                            var_19 = (max(var_19, 109));
                            var_20 = ((((((min(var_10, (arr_22 [i_5] [i_7] [i_5] [i_12]))) ^ (1 / -1)))) || ((max((arr_21 [i_5] [i_6] [1] [11]), var_4)))));
                            arr_44 [i_5] [i_6] [i_8] [i_6] [i_12] = (((max((min(7766523900627210988, 253304279)), (max(2251799811588096, 18446744073709551615)))) < ((((var_5 + 9223372036854775807) << (!2147483648))))));
                            var_21 = (max((~-129447255192391532), (max((129447255192391547 + var_1), (~255)))));
                        }
                    }
                    /* vectorizable */
                    for (int i_13 = 0; i_13 < 18;i_13 += 1) /* same iter space */
                    {
                        arr_47 [i_5 - 1] [i_5 - 1] [i_5] [i_5] = 2;
                        arr_48 [i_5] = var_7;
                        var_22 -= var_5;
                    }
                    arr_49 [i_5] = (min((max(((0 % (arr_13 [i_7]))), (!0))), 65472));
                    /* LoopNest 2 */
                    for (int i_14 = 2; i_14 < 17;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 18;i_15 += 1)
                        {
                            {
                                arr_54 [i_5] [i_6] [i_7] [i_14] [i_15] = 2147483647;
                                arr_55 [i_5] [i_5] = ((-(arr_21 [i_5] [10] [i_14 - 2] [i_15])));
                                var_23 = (!-9223372019674906624);
                            }
                        }
                    }
                }
            }
        }
        var_24 = min(((!(arr_46 [8] [i_5] [i_5] [i_5 - 1]))), 1);
        arr_56 [i_5] = (var_12 + -129447255192391532);
    }
    #pragma endscop
}
