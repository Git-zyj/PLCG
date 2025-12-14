/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12823
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_0] [i_0] [17] [i_4] = ((-((var_10 - ((var_16 ? var_2 : (arr_0 [i_0])))))));
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_4 [i_2] [i_2] [i_1]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_18 = (min(var_18, ((((((min(var_13, var_9)) | 51))) ? (((~-1535609214) ? -28804 : ((-16 ? 516966260098210491 : -2036847900)))) : (((~-2036847900) | (var_10 ^ var_8)))))));
                                var_19 &= (((min(var_5, (var_2 <= var_13)))) ? (var_12 >= 24143) : ((~(var_9 + var_5))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 4; i_7 < 17;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 18;i_8 += 1)
                        {
                            {
                                var_20 = (min(var_20, ((max((arr_14 [i_0] [i_7] [i_2] [i_7] [i_8]), ((~(((arr_12 [i_0] [i_2] [i_2] [i_2] [i_8]) - -6142120412074759898)))))))));
                                var_21 = (((min(var_8, 1535609214)) > (max(var_17, (((arr_13 [i_0] [i_8]) ? var_11 : var_8))))));
                                var_22 ^= -9223372036854775796;
                            }
                        }
                    }
                    arr_28 [i_0] [i_0] [i_2] [i_0] = (~var_6);
                    var_23 = ((((((((arr_2 [i_0]) ? var_8 : (arr_8 [i_0] [i_0]))) == (var_2 != var_17)))) < (~var_14)));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 11;i_9 += 1)
    {
        for (int i_10 = 2; i_10 < 7;i_10 += 1)
        {
            {
                var_24 += ((((((var_3 ? (arr_25 [i_9] [12] [i_9] [i_10] [10] [0]) : var_4)) > 127)) || (-152010920939080761 + 0)));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 11;i_11 += 1)
                {
                    for (int i_12 = 3; i_12 < 10;i_12 += 1)
                    {
                        {
                            arr_37 [i_9] [i_10] [i_12] [i_12 + 1] [6] = var_1;
                            var_25 = (min(var_13, (((((-9223372036854775807 - 1) ? 632873542 : 9223372036854775807)) ^ (((var_15 ? var_4 : (arr_2 [i_12]))))))));
                            var_26 = var_15;
                        }
                    }
                }
            }
        }
    }
    var_27 = (min(((var_7 ? (min(var_2, var_5)) : ((var_1 ? var_1 : var_1)))), var_2));
    var_28 = -var_1;
    #pragma endscop
}
