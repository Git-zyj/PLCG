/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129030
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        var_20 = var_2;

                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            var_21 = (((((19458 ? 15 : -28057))) && 46457));
                            arr_12 [i_1] = (arr_3 [i_0] [i_0]);
                            arr_13 [i_0] [0] [i_3] [i_3] &= (min((arr_11 [i_0] [i_1] [3] [8]), (arr_11 [i_0] [i_0] [i_0] [i_0])));
                            var_22 = max((arr_5 [i_1] [i_4]), (min((arr_1 [i_3] [i_0]), (arr_1 [i_4] [i_0]))));
                        }
                    }
                    var_23 ^= (max(11835040971285457455, 0));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        for (int i_6 = 4; i_6 < 24;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 24;i_8 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_9 = 0; i_9 < 25;i_9 += 1)
                            {
                                arr_29 [15] [0] [i_7] [i_5] [12] = ((!(((var_16 ? (arr_14 [i_5] [i_5]) : (arr_24 [9] [i_5] [i_5] [i_5] [i_5]))))));
                                var_24 = var_7;
                                var_25 ^= (((arr_14 [i_6 - 3] [i_6 + 1]) ? (arr_14 [i_6 - 3] [i_6 + 1]) : (arr_14 [i_6 - 3] [i_6 + 1])));
                                var_26 ^= (((arr_27 [1] [i_6] [i_6] [i_8] [i_9]) && (arr_20 [i_5])));
                                arr_30 [i_9] [i_5] [i_7] [i_5] [i_5] = ((var_17 ? (arr_19 [i_6 - 1] [i_8 + 1]) : (arr_18 [i_8 - 1] [i_6 - 1] [i_7])));
                            }
                            for (int i_10 = 2; i_10 < 24;i_10 += 1)
                            {
                                var_27 = (min((((((min((arr_17 [i_5] [i_7] [i_7]), var_1))) ? (max(8522876475236565101, -6586331746267163366)) : 8522876475236565101))), var_0));
                                var_28 ^= ((!((min(((max(0, (arr_26 [i_5] [i_6] [i_7] [i_8 - 2] [i_10] [i_5])))), (((arr_18 [6] [i_6] [i_7]) ? (arr_27 [i_5] [i_6] [i_7] [i_8 + 1] [i_10]) : (arr_24 [i_7] [i_8] [i_7] [i_7] [i_10]))))))));
                                var_29 &= 19097;
                            }
                            for (int i_11 = 0; i_11 < 25;i_11 += 1)
                            {
                                arr_35 [i_8] [i_6] [i_7] [i_8] [i_11] |= ((((var_13 != (max(var_3, var_14)))) ? (max(19079, (((arr_20 [i_5]) ? 13186627125780192979 : 19)))) : (arr_21 [i_5] [i_6] [i_7] [i_8])));
                                arr_36 [i_5] [i_5] [i_7] = var_17;
                                arr_37 [i_11] [i_5] [i_7] [i_5] [i_5] = (max(1, 7));
                                var_30 |= ((((var_6 <= (2969849737 & 4639524118665341972))) ? (min(8293750139639695752, ((min(-5329491848632347289, 4294967295))))) : (min(((min(var_18, 1325117559))), (min((arr_26 [15] [i_5] [i_6] [i_6] [i_8] [i_11]), var_0))))));
                                arr_38 [i_5] [i_6] [i_7] [i_7] [i_11] [i_8] [i_11] |= (((max((((arr_25 [i_5] [i_6] [i_6] [i_7] [i_7] [i_11]) - var_11)), (arr_24 [i_5] [i_11] [i_7] [i_5] [i_11]))) == var_12));
                            }
                            for (int i_12 = 2; i_12 < 24;i_12 += 1)
                            {
                                var_31 = 0;
                                var_32 ^= var_12;
                                var_33 = ((!(arr_20 [i_5])));
                            }
                            var_34 += (((((0 ? 12 : 3))) ? ((min(var_3, (arr_40 [20] [i_8] [i_8] [i_8] [i_8 - 1] [i_8 - 1])))) : ((((min((arr_25 [i_5] [i_6] [i_7] [i_7] [i_7] [i_8 - 1]), 35))) ? (arr_25 [i_8 - 2] [i_8] [i_7] [i_6 - 3] [i_5] [6]) : (((min((arr_34 [i_5] [i_6] [i_6] [i_8] [i_8] [i_8]), (arr_40 [i_5] [i_6] [i_7] [i_8] [i_8 - 1] [i_8])))))))));
                        }
                    }
                }
                var_35 = (arr_31 [i_5] [i_5] [i_5] [12] [i_5] [i_6 - 2]);
                var_36 = (min(var_13, (((arr_31 [i_6 + 1] [i_6] [i_5] [i_6] [i_6] [i_5]) ? ((((!(arr_26 [2] [i_6] [i_6] [i_6] [2] [9]))))) : (min(2969849737, var_0))))));
            }
        }
    }
    var_37 += var_18;
    var_38 = var_4;
    #pragma endscop
}
