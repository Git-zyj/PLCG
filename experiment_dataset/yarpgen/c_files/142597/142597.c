/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142597
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, (((((32767 - 65535) || (((511 ? var_3 : var_1))))) ? (var_17 || var_0) : (((-2826228809293589146 + 9223372036854775807) >> (65535 - 65534)))))));
    var_20 = (min(var_20, (max((max((max(0, var_14)), (max(var_1, var_0)))), ((((var_5 ? -393490498 : 9202731510744277755))))))));
    var_21 = var_11;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_14 [i_2] = ((max(((var_3 ? var_11 : var_17), ((max((arr_8 [i_2] [i_2] [i_2] [i_2]), (arr_0 [i_0] [i_1]))))))));
                                var_22 = (min(var_22, ((((((((min(393490497, (-9223372036854775807 - 1))) + (((2 ? (arr_9 [i_4] [i_4] [i_4]) : (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])))))) + 9223372036854775807)) >> (var_13 - 1643113687706299538))))));
                                var_23 = (max(((((((9223372036854775807 ? var_14 : var_14))) && ((min((arr_1 [i_0] [i_0]), var_1)))))), (((((-2023813249 ? var_8 : (arr_13 [i_0] [i_0] [i_2] [i_3 - 2] [i_4])))) ? ((((arr_8 [i_0] [i_1] [i_2] [i_1]) << 7))) : var_7))));
                                arr_15 [i_0] [i_1] [i_2] [i_2] [i_4] = ((((max((-5152909083704101734 / var_17), (min(var_6, 9223372036854775807))))) ? -105 : (min(-1, (arr_4 [i_3 - 2])))));
                            }
                        }
                    }
                    var_24 -= 9223372036854775807;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                arr_23 [i_2] = 7;
                                arr_24 [i_0] [i_1] [i_2] [i_1] [i_2] = var_11;
                                var_25 = (min(var_25, (((var_18 % (((arr_16 [i_0] [i_1] [i_2] [i_6]) ? (86 || 39232) : 7)))))));
                                arr_25 [i_0] [i_1] [i_2] [i_2] [i_6] = ((min(-3564305931831506111, 9223372036854775807)));
                            }
                        }
                    }
                    var_26 |= (((((arr_10 [i_0] [i_1] [6]) | ((var_8 ? (arr_21 [i_0] [i_1] [i_1] [i_0] [i_0]) : (arr_8 [i_0] [i_1] [i_2] [i_1])))))));

                    /* vectorizable */
                    for (int i_7 = 1; i_7 < 23;i_7 += 1)
                    {
                        arr_28 [i_0] [i_2] [i_0] [i_0] = (41 >> (var_9 + 101));
                        var_27 = ((((((arr_9 [i_1] [i_1] [i_1]) ^ (arr_9 [i_0] [i_1] [i_2])))) ? var_18 : (arr_27 [i_0] [i_2] [i_7])));
                    }
                    for (int i_8 = 3; i_8 < 22;i_8 += 1)
                    {
                        arr_32 [i_2] = (((((((min(var_12, 0))) ? (max((-9223372036854775807 - 1), 255)) : -44))) ? (max((((var_2 ? 238 : (arr_19 [i_0] [i_1])))), ((var_1 ? var_5 : var_1)))) : ((((max((arr_13 [i_0] [i_1] [i_1] [i_8] [i_8 - 1]), var_18))) ? (arr_31 [i_0] [i_1] [i_2] [i_8] [i_0] [i_8 + 1]) : (((min((arr_11 [i_0] [i_1] [i_1] [i_0] [i_0]), 28499))))))));
                        arr_33 [i_2] [i_1] [i_2] [i_8] [i_8 - 2] [i_0] = ((max(-44, -8912959384287347853)));
                    }
                }
            }
        }
    }
    #pragma endscop
}
