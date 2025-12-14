/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119049
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_16 = (min((var_1 != var_3), var_12));
        var_17 -= -2312105442;
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            arr_8 [i_2] [i_2] [7] = (((arr_7 [i_1] [i_2]) ? var_3 : (min((arr_6 [i_1] [i_1]), 77))));

            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                arr_11 [i_1] [i_1] = ((((((arr_7 [0] [i_2]) || (arr_2 [i_1]))) && (arr_5 [i_2]))));
                var_18 = (((max((arr_7 [i_1] [i_2]), var_3)) != (arr_2 [i_1])));
                arr_12 [i_3] [i_2] [i_1] = (!1987240202193688262);
                arr_13 [i_2] [i_2] [14] = (min(-var_9, (~var_4)));
                arr_14 [i_1] [i_1] [i_1] [i_1] = ((12127 <= ((max(1, 12127)))));
            }
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            arr_18 [15] [i_1] = (~-24175);
            arr_19 [i_1] [i_1] = ((var_10 ? (((arr_5 [i_1]) ? var_8 : (arr_6 [i_4] [i_1]))) : (arr_6 [i_4] [i_1])));
            arr_20 [i_1] [12] [i_1] = (arr_2 [i_4]);
            var_19 = (arr_2 [i_4]);
            arr_21 [8] [i_1] [6] = (arr_3 [i_4] [i_1]);
        }
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                {

                    for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
                    {

                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            arr_31 [i_6] [i_5] [i_5 - 1] [i_5 + 1] [i_5 + 1] [i_5 + 1] = ((-1 ? (((((min((arr_27 [i_1] [i_5] [i_8]), 768))) ? (var_8 || -114) : ((~(arr_6 [i_1] [i_1])))))) : (((arr_15 [i_5 - 1]) | (arr_15 [i_5 + 1])))));
                            var_20 += (((((arr_3 [i_5 - 1] [i_5 + 1]) ? -769 : (arr_3 [i_5 - 1] [i_5 + 1])))) && (arr_6 [i_5 - 1] [i_5 + 1]));
                            arr_32 [i_1] [i_5 + 1] [0] [i_7] [i_7] |= (((arr_7 [i_5 + 1] [i_5 + 1]) ? -5734266884624320414 : (((min(57364, 1))))));
                            var_21 = var_6;
                        }
                        for (int i_9 = 1; i_9 < 15;i_9 += 1)
                        {
                            var_22 += ((((-(arr_7 [i_5 + 1] [i_5 + 1]))) - ((max((arr_7 [i_5 - 1] [i_5 + 1]), (arr_7 [i_5 + 1] [i_5 - 1]))))));
                            var_23 *= (arr_2 [i_6]);
                        }
                        arr_36 [i_6] [i_6] = max(((min((min((arr_23 [i_1] [i_5] [i_6]), var_14)), (arr_4 [i_5 - 1] [i_5 - 1] [i_5 - 1])))), (max((arr_26 [i_6]), (arr_5 [i_5 + 1]))));
                        arr_37 [i_1] [i_5] [i_5] [i_6] [i_5] [i_1] = ((-var_4 ? (min((min(10211785645618560010, var_7)), (((var_6 ? (arr_26 [i_6]) : (arr_26 [i_6])))))) : ((max((arr_29 [i_1] [i_5] [1] [1]), (~1))))));
                    }
                    for (int i_10 = 0; i_10 < 16;i_10 += 1) /* same iter space */
                    {
                        arr_40 [i_1] [i_5 + 1] [i_6] [i_6] [i_6] = (arr_24 [i_5 + 1]);
                        var_24 = (max(var_24, -106));
                        var_25 = (max(var_25, ((max(((((arr_16 [i_5 + 1] [i_1]) || var_1))), (arr_33 [1] [i_5 + 1] [i_10] [i_10] [i_5 + 1] [i_5 - 1]))))));
                        arr_41 [i_6] [i_10] [i_10] [i_10] = var_4;
                    }
                    var_26 = (min(var_26, 41005));
                    var_27 = (arr_33 [i_1] [i_1] [i_1] [i_6] [i_6] [i_6]);
                }
            }
        }
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 20;i_11 += 1)
    {
        arr_44 [i_11] [i_11] = 1414142137375450602;
        arr_45 [10] [i_11] = (2147483647 - var_6);
    }
    var_28 = 3345149464;
    var_29 = (((((max(var_3, var_1))) ? (var_3 + 778) : (9223372036854775807 && var_14))));
    #pragma endscop
}
