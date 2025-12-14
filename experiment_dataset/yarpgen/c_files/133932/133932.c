/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133932
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = min(var_6, var_5);

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] [1] = (min((~24), (min(var_8, var_4))));
        var_11 = (max(var_11, (((((max(-var_2, var_7))) == ((var_8 ? (~var_3) : ((var_8 ? (arr_0 [i_0]) : var_6)))))))));
        arr_3 [6] [6] = ((((((((var_5 ? var_8 : var_4))) ? ((min(var_5, var_7))) : (((var_3 == (arr_1 [i_0] [i_0]))))))) ? (min(var_4, var_3)) : (((var_3 | var_6) & (arr_0 [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_2] = ((~((var_2 ? ((var_1 ? 62 : var_4)) : var_8))));
                    arr_9 [i_0] [i_0] [i_0] [i_0] = (((min(var_1, ((((arr_4 [i_0] [i_0] [i_0]) ? var_8 : var_6))))) == 1));
                    var_12 -= 130;
                    var_13 = var_9;
                }
            }
        }
    }
    for (int i_3 = 3; i_3 < 23;i_3 += 1)
    {
        arr_12 [i_3] &= ((var_8 ? var_9 : ((((min((arr_10 [i_3]), var_0))) ? var_1 : ((var_4 ? var_9 : var_6))))));
        var_14 = (min(var_14, (((((max(((var_5 ? (arr_11 [i_3]) : var_6)), (0 * 1)))) ? var_3 : (max(((var_8 ? var_6 : var_1)), var_7)))))));

        for (int i_4 = 4; i_4 < 22;i_4 += 1)
        {
            arr_15 [i_4] [i_3] [i_3] = (((arr_11 [i_4 - 1]) ? ((max((arr_11 [i_3 - 1]), var_8))) : (max(12, ((1 ? var_0 : var_4))))));
            var_15 = (min(var_15, (((((((~var_0) ? ((((!(arr_10 [i_3 - 1]))))) : var_4))) ? ((var_1 ? (!1) : ((min(var_8, var_5))))) : ((((max(var_1, var_9)) == (((1 ? var_6 : var_5)))))))))));
        }
    }
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 3; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 16;i_8 += 1)
                {
                    {
                        var_16 = (min(1, ((8456 ? 69 : ((max(86, 93)))))));
                        arr_27 [i_5] [i_5] &= ((var_6 ? (~9223372036854775807) : ((247 ? 7915227222626088569 : 37))));
                        arr_28 [i_8 + 2] [i_6] [i_6] [i_5] = (max(((32 ? 5868410856554982826 : 1)), (((var_6 == (min(var_3, var_2)))))));
                    }
                }
            }
        }
        arr_29 [i_5] = 4511;
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 18;i_9 += 1)
        {
            for (int i_10 = 3; i_10 < 14;i_10 += 1)
            {
                {
                    var_17 = (min(var_17, ((min(((((min((-9223372036854775807 - 1), var_6)) == (9223372036854775807 == 7)))), ((-(max((arr_14 [i_5] [i_5]), 139987851)))))))));
                    arr_36 [i_5] [i_9] [i_5] [i_9] = var_3;
                    var_18 -= (min((((var_7 ? 2 : (arr_32 [i_9] [i_10 - 3] [i_10 + 2])))), (min((arr_26 [i_9] [i_10 + 4] [i_10 + 4] [i_10 + 1]), (arr_32 [i_10] [i_10 - 3] [i_10 - 1])))));
                }
            }
        }
        arr_37 [i_5] [i_5] = var_9;
        /* LoopNest 3 */
        for (int i_11 = 4; i_11 < 16;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 16;i_12 += 1)
            {
                for (int i_13 = 2; i_13 < 15;i_13 += 1)
                {
                    {
                        var_19 = (min((min(((min(var_4, 19))), (((arr_26 [i_11] [i_11] [i_11] [i_5]) ? var_1 : var_5)))), var_5));
                        var_20 = var_4;

                        for (int i_14 = 4; i_14 < 17;i_14 += 1)
                        {
                            arr_49 [i_14 - 3] [i_11 - 1] [13] [i_13] [i_5] [i_14] = max((((!(62 == var_0)))), (((var_7 == 1) ? -1 : (max(var_7, (arr_16 [i_5]))))));
                            var_21 = ((((var_7 ? 115 : var_8)) == (arr_35 [i_14])));
                            var_22 = var_7;
                        }
                        for (int i_15 = 0; i_15 < 18;i_15 += 1)
                        {
                            arr_52 [i_11] [i_12 + 1] [i_12 + 1] = ((!((min((((var_6 ? var_2 : var_7))), (min((arr_42 [i_5] [i_11 - 1]), var_4)))))));
                            var_23 = min(((min(-653626849, 1))), 1);
                        }
                        /* vectorizable */
                        for (int i_16 = 1; i_16 < 1;i_16 += 1)
                        {
                            arr_55 [i_13] [i_12] [i_13] [i_12] [i_16 - 1] = var_3;
                            arr_56 [i_5] = (arr_35 [i_12 + 1]);
                            var_24 ^= (arr_54 [12] [i_11 - 2] [i_11 - 2] [i_11 - 2] [i_16 - 1]);
                            arr_57 [i_5] [i_5] [i_12 - 1] [i_13 - 1] [i_16] = (((arr_44 [i_5] [i_11 + 1] [i_11 + 1] [i_13 + 1]) ? (!var_7) : var_4));
                            var_25 = ((((var_3 ? 8731120011240981249 : (arr_48 [i_5] [i_5] [i_5] [i_5] [i_5]))) == (((var_4 ? var_4 : var_5)))));
                        }
                        var_26 = (max(var_26, ((((((((((arr_22 [i_5]) ? 1818072403 : var_8))) ? var_6 : (((max((arr_54 [i_11] [i_5] [i_11] [i_13] [i_13]), var_7))))))) ? (((1 - 18446744073709551615) ? (var_0 + var_1) : ((((arr_14 [i_11 - 2] [i_11 - 2]) + var_2))))) : (min((arr_39 [i_11 - 2] [i_12 - 1]), 7458)))))));
                        var_27 += var_7;
                    }
                }
            }
        }
    }
    #pragma endscop
}
