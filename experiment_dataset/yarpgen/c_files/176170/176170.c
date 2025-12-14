/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176170
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 16;i_2 += 1)
                {
                    var_12 -= (arr_1 [i_1 - 1] [i_1 + 2]);
                    var_13 -= max((max(var_8, var_1)), ((((arr_1 [i_1 - 2] [i_2 + 1]) && (arr_1 [i_1 + 2] [i_2 - 2])))));
                    var_14 = min(var_6, (var_9 - 0));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_15 |= (-2109913375 - -605408944);
                                var_16 = (((arr_9 [i_1 - 1] [i_3 + 1] [i_4] [i_4] [i_4]) ? ((0 ? (min(var_0, var_4)) : var_0)) : -124642380));
                                var_17 -= (((min((max((arr_8 [i_0] [i_0] [0] [i_2] [i_3 - 1] [i_4]), (arr_11 [8]))), (4692745176971334811 <= var_0))) < (!0)));
                                var_18 = ((((!var_4) / ((17203930984348259982 ? var_8 : 3028269060392022488)))));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_5 = 4; i_5 < 16;i_5 += 1)
                {
                    arr_14 [i_1] = ((((((arr_13 [i_1] [i_1] [i_1]) - var_9))) ? ((var_7 ? (arr_3 [i_1]) : var_5)) : (((arr_7 [i_0] [i_1] [i_1]) - (arr_9 [i_0] [i_0] [i_1] [i_0] [i_5 - 2])))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            {
                                var_19 = (arr_1 [i_1 + 2] [i_1]);
                                var_20 = (var_0 << var_9);
                                var_21 = 0;
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    var_22 = (min(var_22, var_1));
                    arr_22 [i_0] [i_1] [i_8] = var_0;
                    arr_23 [i_1] [i_1] [i_8] = (!var_7);
                    var_23 -= (!(arr_1 [i_0] [i_0]));
                    arr_24 [i_1] [i_1] [i_1] [i_1] = ((((13753998896738216805 ? 4294967295 : 0))) >= (arr_8 [i_0] [i_1 - 1] [i_1] [i_8] [i_8] [i_1 - 2]));
                }
                var_24 = ((-(min(13552283569433477029, ((max(536838144, 1)))))));
                var_25 *= (min(10562830395931494839, 1));
            }
        }
    }

    for (int i_9 = 2; i_9 < 19;i_9 += 1)
    {
        var_26 = (min(var_26, ((min((~var_4), ((((arr_25 [i_9] [i_9 - 1]) >= 1))))))));
        var_27 -= var_11;
    }
    for (int i_10 = 1; i_10 < 22;i_10 += 1)
    {
        var_28 &= (((arr_27 [i_10 + 1] [i_10]) * (arr_28 [i_10] [i_10])));

        for (int i_11 = 0; i_11 < 24;i_11 += 1)
        {
            arr_32 [i_10 + 2] [i_10] = ((((min(((((arr_30 [i_10] [i_11] [i_10]) * var_11))), ((7883913677778056798 ? var_6 : var_2))))) || (var_4 == 1)));
            var_29 = (max(22785, 4894460504276074567));
            arr_33 [i_10] [i_10] = (!13552283569433477027);
        }
        var_30 ^= var_11;
    }
    var_31 = (min((var_1 % -22779), var_10));
    #pragma endscop
}
