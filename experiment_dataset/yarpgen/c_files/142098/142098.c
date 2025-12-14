/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142098
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((max(var_14, -27499)) << (var_12 - 7407761268059389998)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_16 = (max(((max(27524, -27495))), var_12));
                var_17 = (arr_2 [i_0]);

                /* vectorizable */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    var_18 *= (((arr_6 [i_2] [i_2] [i_1] [i_0]) << (((var_10 + var_7) - 1367716375))));
                    var_19 = var_9;
                    var_20 |= (arr_2 [i_1]);
                }
                /* vectorizable */
                for (int i_3 = 2; i_3 < 23;i_3 += 1)
                {
                    var_21 &= (((arr_0 [i_1]) ? (arr_8 [i_1] [i_1] [i_3 - 2]) : 8796093022207));

                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        var_22 = (1987437185841489897 + (arr_6 [i_0] [i_3 - 1] [i_1] [i_4]));
                        arr_12 [10] [18] [10] [i_3] [i_0] [18] = var_10;
                        arr_13 [i_1] [i_3 - 1] [i_0] = (arr_2 [i_0]);
                        var_23 = (max(var_23, (arr_2 [i_1])));
                        arr_14 [i_0] [i_3] [i_0] = (((arr_1 [i_0] [i_3 - 1]) | (arr_4 [i_3 - 1] [i_0] [i_4])));
                    }
                    var_24 = (i_0 % 2 == zero) ? ((((~-27499) >> (((arr_3 [i_0] [i_0] [i_0]) - 153))))) : ((((~-27499) >> (((((arr_3 [i_0] [i_0] [i_0]) - 153)) - 80)))));
                    arr_15 [7] [i_1] [i_3 - 2] [i_0] = var_8;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_25 -= (arr_9 [i_5] [i_5] [i_1] [i_5]);
                                arr_21 [i_0] [i_1] [i_0] [i_5] [i_1] = var_6;
                                var_26 = (~1570912029844744395);
                                var_27 += ((((var_3 ? var_7 : 586074001)) == 7149));
                                var_28 = (max(var_28, -27499));
                            }
                        }
                    }
                }
                for (int i_7 = 0; i_7 < 25;i_7 += 1) /* same iter space */
                {
                    var_29 -= var_11;
                    var_30 = (((((((arr_20 [i_0] [i_0] [i_0] [i_1] [i_0] [i_7]) ? var_8 : var_2))) ? var_5 : (var_8 * var_4))) * (((-1167089460 / 58377) ? (arr_17 [i_0] [i_0]) : 58362)));
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 25;i_8 += 1) /* same iter space */
                {
                    var_31 = var_1;
                    var_32 ^= var_6;
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 24;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 25;i_10 += 1)
                        {
                            {
                                var_33 *= (!-122);
                                var_34 = (arr_23 [i_1] [i_8] [i_9] [i_10]);
                                var_35 = (min(var_35, (4136697416 | 22154)));
                                var_36 -= var_4;
                            }
                        }
                    }
                }
                var_37 = (min(var_37, ((((arr_24 [i_1] [i_0] [i_0] [i_0]) == ((((min(var_5, -1167089448))))))))));
            }
        }
    }
    #pragma endscop
}
