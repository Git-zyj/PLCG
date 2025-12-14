/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_15;
    var_21 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_22 *= (((((arr_0 [i_1]) << (38269 || var_8))) >> (27267 - 128)));

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    arr_8 [i_0] [i_0] [i_1] [i_0] = 42396;
                    var_23 = (max(var_23, (((+((((var_12 < var_5) < ((-(arr_7 [i_0] [i_2] [i_2] [i_2])))))))))));
                }
                var_24 = (min(var_24, ((((((~(((arr_2 [i_1]) | var_14))))) ? (min((((var_18 ? var_6 : (arr_3 [i_0])))), var_9)) : ((((~var_8) ^ ((2 ? var_15 : (arr_5 [i_1])))))))))));
            }
        }
    }
    var_25 = ((((max((253 / -1), var_4))) ? (var_1 / var_17) : 3285941390936788844));

    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                {
                    var_26 = (min(var_26, var_5));
                    var_27 = ((((((var_19 + 9223372036854775807) >> ((((var_2 ? var_11 : var_19)) - 127))))) ? (arr_11 [i_4] [i_4] [i_4]) : ((-(arr_11 [i_3] [i_4] [i_5])))));

                    for (int i_6 = 1; i_6 < 18;i_6 += 1)
                    {
                        var_28 *= (((-var_10 ? (((((arr_9 [i_3] [i_4]) <= (arr_9 [i_3] [i_5]))))) : ((var_14 ? var_19 : var_5)))));
                        var_29 = var_0;
                        arr_18 [i_5] [i_5] [i_4] [i_5] = (((var_16 > (((arr_12 [i_3] [i_5] [i_6]) ? var_18 : var_12)))) ? (var_8 | var_14) : ((min(-115, (arr_10 [i_4] [i_5])))));
                        var_30 = (min((arr_16 [i_6 + 2] [i_6 + 2] [i_6 + 1] [i_6 + 1]), (((arr_16 [i_6 + 3] [i_6 + 3] [i_6 + 3] [i_6 - 1]) ? (arr_16 [i_6 + 3] [i_6] [i_6 - 1] [i_6 - 1]) : (arr_16 [i_6 - 1] [i_6 - 1] [i_6 + 3] [i_6 - 1])))));
                    }
                    for (int i_7 = 3; i_7 < 19;i_7 += 1)
                    {
                        var_31 = ((((((arr_19 [i_3] [i_4] [i_7 - 1] [i_5] [i_5]) ? var_1 : (arr_13 [i_7 - 2])))) ? (((((((arr_21 [i_7 - 2] [i_5] [i_4] [i_3]) ? 2 : (arr_19 [i_3] [i_3] [i_4] [i_5] [i_7]))) == var_0)))) : (((var_15 / (arr_16 [i_3] [i_4] [i_5] [i_7]))))));
                        arr_22 [i_5] = ((((((((248 ? 240 : 42406))) ? 18446744073709551615 : (((25 ? 68 : 5)))))) ? (((min(22, (arr_15 [i_4] [i_5] [i_7 + 1]))) / ((((arr_17 [i_3]) ? var_19 : var_6))))) : (((var_14 * var_1) ? (min((arr_13 [i_3]), var_9)) : var_6))));
                        arr_23 [i_3] [i_4] [i_3] [i_3] &= (arr_16 [i_3] [i_4] [i_5] [i_7 - 1]);
                        var_32 = (15096594271379259000 ^ 13957577010305272852);
                    }
                }
            }
        }
        var_33 = (((arr_15 [i_3] [i_3] [i_3]) >= (((!(arr_9 [i_3] [i_3]))))));
        var_34 += ((var_11 & (((arr_17 [i_3]) ? 41905 : 3))));
        var_35 = (max(var_35, ((((max((arr_10 [i_3] [i_3]), (arr_20 [i_3] [i_3] [i_3] [i_3] [i_3]))))))));
    }
    #pragma endscop
}
