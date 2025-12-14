/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163247
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] [13] = ((-1 == ((~(arr_0 [i_0])))));
        var_20 |= (arr_0 [11]);
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_21 -= ((-1097567689 ? (((min(127, 116)))) : (arr_0 [i_1])));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            var_22 = ((((((arr_7 [i_1] [i_2] [i_2]) ^ (arr_1 [i_1] [i_2])))) && (((1 & (arr_6 [i_2]))))));
            arr_9 [1] [i_1] [i_1] = var_3;

            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                var_23 = (min(var_23, (((var_5 ? (arr_1 [i_1] [i_3]) : -29)))));

                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    var_24 *= ((!(arr_6 [i_1])));
                    var_25 = (arr_1 [i_1] [i_3]);
                }
                var_26 = (((((140 ? 1 : 1))) ? (arr_0 [i_2]) : (arr_10 [i_1] [i_2] [i_3])));
                var_27 *= (((arr_3 [i_1]) - (arr_13 [i_1] [i_1] [i_1])));
                var_28 &= (((((127 ? (arr_0 [i_1]) : 127))) ? (arr_4 [i_2]) : 116));
            }
        }
    }
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        var_29 = 9564847818994546211;
        var_30 = (((arr_4 [i_5]) ? ((1612322839223120064 % (((var_15 ? -109 : var_19))))) : ((((arr_7 [i_5] [i_5] [i_5]) ? (arr_13 [i_5] [i_5] [i_5]) : (arr_8 [15]))))));
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        {
                            var_31 = (min(var_31, ((((arr_23 [i_6] [i_7] [i_6]) ^ (min(7548425068468540325, (arr_17 [i_7]))))))));
                            arr_29 [i_6] [i_6] [i_8] [i_9] [i_7] = (((((var_12 % (arr_16 [i_6] [i_6]))) % (arr_24 [i_9] [i_6] [i_7] [i_6]))));
                            var_32 -= -29;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_10 = 0; i_10 < 22;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 22;i_11 += 1)
                    {
                        for (int i_12 = 3; i_12 < 19;i_12 += 1)
                        {
                            {
                                var_33 = (~-117);
                                var_34 = (min(var_34, (((var_5 && (arr_21 [i_12]))))));
                                var_35 = (((arr_35 [i_6] [i_6] [i_10] [8] [i_10] [i_10]) && (arr_35 [i_6] [i_6] [i_11] [i_12 + 1] [i_12 - 1] [i_12])));
                                arr_39 [i_6] [i_7] = (max((!var_16), (arr_19 [i_6] [i_7] [i_6])));
                            }
                        }
                    }
                }
                arr_40 [i_7] |= ((3777250402 ? (arr_28 [i_6] [i_6] [i_6] [i_7]) : (((arr_33 [i_6] [i_6] [i_6] [i_7]) + ((1543487420 ? 4294967295 : 4095248023))))));
                /* LoopNest 3 */
                for (int i_13 = 0; i_13 < 22;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 22;i_14 += 1)
                    {
                        for (int i_15 = 3; i_15 < 19;i_15 += 1)
                        {
                            {
                                var_36 = ((var_6 ? (max(29, (arr_41 [i_7] [i_15 - 2]))) : (((max(1, (arr_38 [i_15 - 1] [i_15] [i_15] [i_15 + 2] [i_15 - 3] [i_15])))))));
                                var_37 = (min(var_37, ((((arr_19 [i_15 - 1] [i_15] [i_15 - 3]) <= (((var_11 ? ((min(1, 22))) : (!var_15)))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
