/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121497
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (var_10 % var_10);
    var_15 = var_5;

    for (int i_0 = 1; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_16 = (min(var_16, (~var_3)));
        arr_2 [i_0] = 58317;

        /* vectorizable */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            arr_7 [i_0 - 1] [i_1] [i_1] = (((arr_4 [i_0] [i_0] [i_1 + 1]) <= var_1));
            var_17 -= (58317 || 112);
        }
    }
    for (int i_2 = 1; i_2 < 14;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            var_18 = (max(var_18, 119));
            var_19 -= ((14185 | (100 & 65535)));
            arr_14 [i_2] [i_2] [1] = (112 >= 58317);
            arr_15 [i_2] = ((112 ? 251 : 15676706158502776269));
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            arr_19 [i_2] [i_4] = (166 / 33648);
            var_20 = (min(var_20, (((((min(170, (!var_9)))) ? (((-1408240282 ? ((min(var_6, 28))) : (var_7 < var_11)))) : (max(((min(137, 65517))), (min(var_10, 118)))))))));

            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                var_21 = ((136 < (!14185)));
                var_22 &= (((((min(var_3, 1856479158)) << (var_2 - 68))) <= var_10));
            }
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                arr_26 [i_2] [i_4] [i_4] [i_4] = (max((min((((arr_11 [i_2]) << (1087736331031649964 - 1087736331031649954))), (~var_0))), var_8));

                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    arr_31 [i_2] [15] [i_4] [4] = (((((((((arr_6 [i_2]) | 65533))) ? (arr_16 [i_4]) : var_12))) ? (~-268435456) : 2438488138));
                    var_23 += ((((-(1672 < 136))) & (((var_5 != (arr_10 [i_2] [i_2]))))));
                    arr_32 [i_2] [i_4] = var_13;
                }
            }
            arr_33 [i_4] = ((!(((var_6 ? (min(5907922330508514024, 35803)) : (((min(var_6, var_1)))))))));
        }
        for (int i_8 = 4; i_8 < 12;i_8 += 1)
        {
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 16;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 16;i_10 += 1)
                {
                    {
                        arr_41 [15] [i_8 - 3] = (max((min(((min(var_8, var_3))), ((var_4 ? (arr_4 [0] [i_8] [i_8 - 1]) : var_4)))), ((144 ? 127 : 960670659))));
                        arr_42 [i_9] = ((~2438488148) ? (max((1995651030 ^ 1995651030), (min(1856479148, 127)))) : (!116));

                        for (int i_11 = 0; i_11 < 16;i_11 += 1)
                        {
                            arr_45 [i_2] [i_8] [i_8] [9] [4] = (~var_6);
                            var_24 ^= ((~((57687 | (arr_0 [i_2 - 1])))));
                            var_25 = (max(var_25, ((((~var_1) % ((((min(var_2, (arr_12 [i_2] [i_8])))) ? ((57687 ? 114 : 16350567279597360619)) : (((max((arr_21 [i_2] [i_9] [i_11]), -102)))))))))));
                            var_26 ^= ((!((!(((var_13 ? var_2 : (arr_21 [i_11] [i_11] [i_11]))))))));
                        }
                    }
                }
            }
            var_27 = (((((-1495582519 ? 341224352 : 603048762))) >> (var_9 - 153)));
        }
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 16;i_12 += 1)
        {
            for (int i_13 = 3; i_13 < 14;i_13 += 1)
            {
                {
                    var_28 *= (((((~var_3) ? ((((arr_13 [i_2] [i_13]) << (var_6 - 23174)))) : (arr_51 [10] [i_12] [10]))) * (((((((arr_13 [i_2] [i_2]) ? (arr_49 [i_2] [i_12] [i_13]) : var_4))) ? (2096176794112190997 >= 0) : ((((arr_3 [i_2]) > (arr_40 [i_13] [i_12] [i_2] [i_2])))))))));
                    var_29 = var_3;
                }
            }
        }
        arr_52 [i_2] = (max(((min(((((arr_51 [4] [i_2 + 2] [i_2]) <= var_0))), (arr_6 [i_2])))), (((var_13 ? var_6 : (arr_49 [i_2] [i_2] [10]))))));
    }
    #pragma endscop
}
