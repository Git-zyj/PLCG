/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105004
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        var_18 = arr_5 [i_0] [i_1];
                        var_19 = (((((-32767 - 1) + 2147483647)) >> (((-1 < (arr_3 [i_0]))))));

                        /* vectorizable */
                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            var_20 = ((8 ? (-1 < 0) : -1474774279));
                            arr_15 [i_0] [i_1] [i_1] [i_1] [i_3] [i_4] = (arr_1 [i_3]);
                            arr_16 [i_1] [i_1] [i_2] [i_3] [i_4] = ((arr_11 [i_0] [i_0] [i_0] [i_0]) ? (arr_9 [i_4 - 1] [i_3] [i_2] [i_0] [i_0]) : var_11);
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            var_21 = ((-(var_9 == var_8)));
                            var_22 |= (((((-(arr_12 [i_3] [i_3] [i_3] [i_3])))) ? 0 : (arr_10 [i_3] [i_2] [i_3] [i_3])));
                            var_23 |= (arr_6 [i_0] [i_3] [i_3]);
                        }
                        var_24 = (max(var_24, 20));
                    }

                    for (int i_6 = 1; i_6 < 22;i_6 += 1)
                    {
                        var_25 = (((((var_11 + 9223372036854775807) >> (((arr_11 [i_2] [i_2] [i_6 - 1] [i_6]) - 5223865289566524314)))) == (((((arr_12 [i_1] [i_1] [i_6 + 1] [i_1]) != (arr_12 [i_0] [i_1] [i_6 + 1] [i_6])))))));
                        var_26 = var_17;
                        var_27 = (min(var_27, ((min(((((min((arr_5 [i_0] [i_0]), var_5))) ? (((arr_1 [i_0]) - var_15)) : (var_5 - var_3))), ((((arr_18 [i_6] [i_0] [i_6 - 1]) ? (arr_18 [i_6] [i_0] [i_6 + 1]) : var_6))))))));

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            arr_25 [i_2] [i_0] [i_1] [i_6] [i_6] [i_1] [i_0] = ((32767 ? (arr_13 [i_0] [i_0] [i_0] [i_0] [i_7]) : 19));
                            var_28 = ((arr_3 [i_6 - 1]) ? (arr_6 [i_6 - 1] [i_1] [i_7]) : (arr_9 [i_0] [i_2] [i_6 - 1] [i_6] [i_7]));
                            var_29 *= (0 != var_7);
                        }
                        for (int i_8 = 1; i_8 < 1;i_8 += 1)
                        {
                            var_30 = (max(var_30, (((4194303 >> (-28 + 91))))));
                            var_31 = (min(((((arr_1 [i_6 + 2]) ? var_12 : (arr_1 [i_6 + 2])))), (((arr_3 [i_8 - 1]) ? (((min((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]), 1)))) : (arr_22 [i_1] [i_2] [i_2] [i_2])))));
                            arr_29 [i_0] [i_6] [i_1] [i_1] [i_8] = (arr_4 [i_2] [i_8]);
                        }
                        /* vectorizable */
                        for (int i_9 = 1; i_9 < 23;i_9 += 1)
                        {
                            var_32 = ((arr_30 [i_2]) ? (arr_6 [i_9] [i_1] [i_1]) : var_15);
                            var_33 = (~32767);
                            var_34 = (arr_2 [i_6 + 2] [i_9 - 1]);
                        }
                        for (int i_10 = 1; i_10 < 23;i_10 += 1)
                        {
                            var_35 *= ((var_3 != (((1333425971 ? (arr_22 [i_0] [i_2] [i_0] [i_10 - 1]) : (arr_20 [i_0] [i_10] [i_0] [i_6] [i_10]))))));
                            var_36 |= 0;
                            var_37 = ((-((-(min((arr_4 [i_6] [i_6]), (arr_26 [i_2] [i_2] [i_2] [i_2] [i_2] [i_1] [i_1])))))));
                            var_38 = (min(var_38, var_17));
                        }
                    }
                }
            }
        }
    }
    var_39 = (max(var_39, (((((((var_3 == 12727) >> ((((var_12 ? var_13 : var_7)) - 2834345598))))) ? var_15 : var_2)))));
    #pragma endscop
}
