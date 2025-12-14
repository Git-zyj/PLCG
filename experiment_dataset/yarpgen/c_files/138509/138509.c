/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138509
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_11 ? var_5 : var_13));
    var_19 = var_16;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_20 = (min(var_20, (arr_0 [i_0])));
        arr_2 [i_0] = (((max(14927252938879789809, 19265))) ? ((+((13 ? (arr_0 [i_0]) : 56)))) : (((var_15 & (((19266 || (arr_0 [i_0]))))))));
        arr_3 [i_0] = ((var_8 ? 19266 : ((-19242 ? 27232 : -19267))));
        arr_4 [i_0] = (min(((var_8 ? (arr_0 [i_0]) : var_15)), (min((arr_0 [i_0]), (arr_0 [i_0])))));
        var_21 = ((((arr_0 [i_0]) ? ((((arr_0 [i_0]) & var_11))) : var_7)));
    }
    /* LoopNest 2 */
    for (int i_1 = 2; i_1 < 20;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 18;i_2 += 1)
        {
            {
                var_22 = (min((~-63), ((~(arr_0 [i_1 + 1])))));
                arr_9 [i_2] [i_1] = (min((arr_0 [i_2 - 2]), ((min(-19271, 2408)))));
                /* LoopNest 2 */
                for (int i_3 = 2; i_3 < 20;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        {
                            arr_18 [16] [i_3] |= (max((((var_15 && (arr_0 [i_1 + 1])))), (arr_15 [8] [i_2 - 1] [8] [8] [i_1] [i_1])));

                            for (int i_5 = 0; i_5 < 21;i_5 += 1)
                            {
                                var_23 |= (((arr_14 [6] [i_3 - 1]) + (arr_14 [i_1] [i_3 - 1])));
                                arr_22 [i_2] = ((+((((min((arr_10 [i_2] [15] [i_2] [i_2]), 1509721024705339109))) ? var_3 : (arr_17 [i_1] [i_1] [i_3] [i_4] [i_2])))));
                                var_24 = (max(((min((var_0 == var_1), (arr_7 [i_2])))), ((var_10 ? (((~(arr_5 [i_1])))) : var_6))));
                            }
                            for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
                            {
                                arr_27 [i_2] [i_3] [i_6] = ((-(var_14 + var_7)));
                                arr_28 [i_1] [i_2] [i_2] [i_1] [i_6] [i_1] [i_1] = (arr_25 [i_1] [i_2] [6] [i_4] [i_6]);
                            }
                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
                            {
                                var_25 = 1743385501;
                                arr_32 [i_2] = ((+(((arr_31 [i_1] [i_4] [i_3] [i_4] [i_7]) - var_14))));
                                var_26 = var_6;
                            }
                            var_27 = (max(var_27, ((((arr_25 [i_1] [i_1] [i_2 + 3] [i_3] [i_4]) ? ((var_2 ? (((arr_0 [i_3]) & var_5)) : (((var_17 ? var_8 : 1739669182))))) : (arr_20 [i_1] [i_1] [i_1 + 1] [i_1 + 1] [15] [i_1 - 2] [i_1 + 1]))))));
                            arr_33 [i_2] [i_3 + 1] [14] [i_2] [i_2] [i_2] = var_4;
                            var_28 = ((((arr_12 [i_2 + 2]) ? (arr_14 [i_3 - 2] [i_2]) : (arr_12 [i_2 + 2]))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
