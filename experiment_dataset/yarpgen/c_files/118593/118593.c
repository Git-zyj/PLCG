/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118593
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (!((((((var_2 ? var_0 : var_10))) ? (-18335 - 1) : var_10))));
    var_21 |= var_7;
    var_22 = (-1 ? -31664 : 2047);

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            var_23 = ((((((arr_5 [i_0] [i_1 - 1]) ? (arr_5 [i_0] [i_1 + 1]) : (arr_5 [i_0] [i_1 - 2])))) ? ((min(var_12, -31664))) : (arr_5 [i_0] [i_1 + 2])));
            var_24 = ((((((-1 ? 2674394762 : (arr_5 [i_0] [i_1 + 1]))) >= 402624182))) | (arr_5 [i_1 + 1] [i_1]));
        }
        for (int i_2 = 1; i_2 < 15;i_2 += 1)
        {
            var_25 |= (max((arr_6 [i_2 + 2] [i_2 + 2] [i_2 + 1]), ((-((2674394762 ? (arr_1 [11]) : var_18))))));
            arr_9 [i_0] [8] [i_2] = (((((arr_0 [i_2 + 2]) >> (((max((arr_8 [i_0] [i_2 - 1]), var_3)) - 6949915023627478343))))) ? ((-(~var_10))) : ((max(-1701681799569740384, -93))));

            /* vectorizable */
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                var_26 = (var_15 / var_15);
                var_27 = ((-107 ? 16 : 288230376151711743));
            }
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                var_28 = (~var_3);
                arr_16 [i_0] [i_2 + 1] [i_4] = -1701681799569740396;
                arr_17 [i_2] [i_2] = (min(-18335, ((((arr_14 [i_2 + 1] [i_2]) <= (arr_14 [i_2 + 1] [i_2 - 1]))))));
                var_29 = (((-(arr_14 [i_0] [i_2]))));
            }
            arr_18 [i_0] = (arr_14 [i_0] [i_0]);

            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                /* LoopNest 2 */
                for (int i_6 = 3; i_6 < 16;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        {
                            arr_26 [i_0] [i_2 + 2] [i_5] [i_6] [i_7] = ((~((((max(var_12, (arr_12 [i_0] [i_6] [i_0] [i_0])))) ^ var_18))));
                            var_30 = ((~((((var_11 && (arr_12 [i_7] [i_6] [i_5] [i_0]))) ? var_12 : 16252468724517173630))));
                            arr_27 [i_6] [i_5] [i_6] = (((-(arr_8 [i_2 + 2] [i_2 - 1]))));
                            arr_28 [i_0] [i_2] [i_5] [11] [i_6 - 2] [i_6] [i_7] = ((((((arr_2 [i_0]) % (arr_3 [i_5])))) ? (-2045458704 | 288230376151711749) : var_5));
                        }
                    }
                }
                var_31 = ((!((max(-var_6, (!var_8))))));
                arr_29 [i_0] [i_0] [6] = (arr_19 [i_0] [i_2 + 2] [i_5]);
            }
        }
        /* vectorizable */
        for (int i_8 = 1; i_8 < 14;i_8 += 1)
        {
            arr_32 [i_0] = (((((arr_22 [i_8 - 1] [i_8 + 2]) + 2147483647)) << (((((arr_22 [i_8 + 1] [i_8 - 1]) + 95)) - 19))));
            var_32 = (arr_13 [i_0] [i_0] [i_0]);
        }
        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            var_33 = (min((((arr_15 [i_0] [i_9]) ? (max((arr_20 [7] [i_0] [i_9] [i_9]), 10680)) : (((402624208 ? var_19 : (arr_34 [i_9] [i_0])))))), (((arr_11 [i_0] [i_0] [i_9]) ^ (((arr_14 [i_0] [i_9]) ? (arr_0 [i_9]) : (arr_1 [8])))))));
            arr_35 [i_9] [i_9] [i_9] = ((~(~222)));
            var_34 = (max((max((arr_34 [i_0] [i_9]), (arr_34 [i_9] [i_0]))), (((((-(arr_13 [i_0] [i_9] [i_9])))) ? (max(21, (arr_19 [i_0] [i_9] [i_9]))) : var_11))));
        }
        var_35 |= (arr_24 [i_0]);
        var_36 = (min(var_36, (arr_23 [i_0] [4] [4])));
        var_37 = (-16 & -150139503);
    }
    #pragma endscop
}
