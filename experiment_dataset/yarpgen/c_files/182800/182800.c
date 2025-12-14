/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182800
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += var_3;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] = (((arr_2 [i_0] [i_0]) && ((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))))));
        var_15 = (max((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0] [i_0]))), (((!(~18446744073709551614))))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_16 = (max((3 + 2), (((((max((arr_4 [i_1]), (arr_5 [i_1])))) ? (arr_4 [i_1]) : (((!(arr_4 [i_1])))))))));
        var_17 -= var_8;
    }
    for (int i_2 = 1; i_2 < 15;i_2 += 1)
    {
        arr_8 [i_2] = (arr_4 [i_2 + 2]);

        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            var_18 = (arr_9 [i_2] [i_3]);
            var_19 = (min((max((arr_1 [i_3] [i_2 - 1]), ((min((arr_0 [i_2]), (arr_4 [2])))))), ((max((arr_5 [i_2]), (arr_0 [i_2 - 1]))))));
            var_20 = (-9223372036854775807 - 1);
        }
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {

            for (int i_5 = 1; i_5 < 15;i_5 += 1)
            {
                /* LoopNest 2 */
                for (int i_6 = 3; i_6 < 16;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        {
                            arr_23 [i_2] [i_4] [i_5] [i_4] [i_4] [9] = (((-32767 - 1) | (max(2, 0))));
                            var_21 = 1;
                            arr_24 [i_5 + 2] [10] [10] |= (((arr_5 [i_7]) ? ((((!(arr_0 [i_2 - 1]))))) : (min((min(var_3, 221)), (!0)))));
                        }
                    }
                }
                arr_25 [i_2] [i_5] [i_4] = (arr_11 [i_2] [i_2 - 1]);
            }

            for (int i_8 = 2; i_8 < 16;i_8 += 1)
            {
                var_22 = -15921289182039204423;
                arr_28 [i_2] [i_4] [i_4] = (max((arr_19 [i_4] [i_2 + 1] [i_8 - 1] [i_2 + 1]), ((((arr_21 [i_2] [i_2 + 2] [i_4] [i_2] [i_4] [i_4] [5]) && ((((arr_17 [i_8 - 1] [i_4] [i_2 - 1]) ? 2 : -17771))))))));
                arr_29 [i_4] [i_4] [i_2] = ((!((((3077369890 ? (arr_20 [i_2] [i_2] [8] [i_2] [8]) : (arr_26 [i_8] [15] [15])))))));
                var_23 &= (((((arr_9 [i_2 + 1] [i_8 + 1]) < var_0)) ? (!114) : (arr_9 [i_2 + 2] [i_8 - 2])));
            }
            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                var_24 = (max((arr_27 [5] [i_4] [1] [i_2]), ((1 + (arr_27 [i_2 - 1] [i_2] [i_4] [i_2])))));
                arr_32 [i_4] = (1837221156 | var_4);
                arr_33 [i_9] [10] [8] |= (~18446744073709551597);
            }
        }
        for (int i_10 = 0; i_10 < 17;i_10 += 1)
        {
            var_25 += (((arr_15 [0]) - ((max(var_11, var_11)))));
            var_26 *= (((((3072 ? var_3 : (arr_27 [i_2] [i_10] [i_10] [i_2 - 1])))) ? ((max((arr_6 [i_2 + 1] [i_10]), (arr_6 [i_2 + 2] [i_10])))) : (arr_20 [i_10] [9] [9] [i_10] [i_2])));
        }
        var_27 ^= 11;
        var_28 = min((max((~-562197963083879748), (max((arr_20 [1] [1] [16] [i_2] [i_2]), var_7)))), (((~(arr_4 [i_2])))));
        var_29 = (max(var_29, 6));
    }
    var_30 = var_12;
    #pragma endscop
}
