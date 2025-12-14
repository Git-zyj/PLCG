/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128260
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_14 = ((((-(((arr_2 [15] [15]) ? (arr_4 [i_0 - 1] [i_1]) : (arr_4 [i_0 + 1] [0]))))) >= (max(((min(-32007, 32767))), (((((arr_4 [i_0] [13]) + 9223372036854775807)) << (((((arr_2 [i_0] [i_1 + 1]) + 71)) - 24))))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_15 = ((-(var_11 == var_3)));
                            var_16 ^= (min((((arr_9 [i_3] [i_2] [i_2] [i_2 + 1]) - (arr_7 [i_0 - 2] [i_1 + 1] [i_1 + 1] [i_2 + 1]))), (arr_0 [i_0 - 2])));
                        }
                    }
                }
            }
        }
    }

    for (int i_4 = 2; i_4 < 12;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            var_17 = 4092;
            /* LoopNest 2 */
            for (int i_6 = 2; i_6 < 12;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    {
                        var_18 = (((arr_0 [i_4 + 1]) ? (~-32) : (((var_6 > (arr_22 [i_4 - 1] [i_6 + 1] [i_6 + 1] [i_7]))))));
                        var_19 = (min(((54 ? 49 : 3510653746)), (arr_7 [i_4] [i_4 - 2] [i_6 - 1] [i_6 - 2])));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 13;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 13;i_10 += 1)
                {
                    {
                        var_20 = var_7;
                        var_21 = (max(var_21, (((((-(arr_31 [i_4 - 1] [i_4 - 1] [i_4 - 1]))) != var_7)))));

                        for (int i_11 = 3; i_11 < 11;i_11 += 1)
                        {
                            arr_41 [i_4] [i_11] [i_9] = (((((var_11 ? (((var_10 ? (arr_40 [i_4] [i_4] [i_11] [i_9] [i_10] [i_11]) : 1))) : ((var_12 ? var_8 : (arr_20 [i_4] [i_8] [i_8])))))) ? var_13 : ((max(-87, 81)))));
                            var_22 *= (arr_14 [i_4 - 1]);
                            var_23 = var_2;
                        }
                        for (int i_12 = 2; i_12 < 10;i_12 += 1)
                        {
                            var_24 += (max((((arr_23 [i_4] [i_4 - 2] [i_12 - 2] [i_12] [i_12] [i_12 - 1]) ? (arr_23 [i_4] [i_4 + 1] [i_12 + 3] [11] [i_12 + 1] [i_12 - 2]) : (arr_23 [i_4 - 2] [i_4 - 2] [i_12 + 1] [i_4 - 2] [i_4 - 2] [i_12 - 2]))), ((((arr_21 [i_4 + 1] [i_8] [i_4 + 1]) & (arr_21 [i_4] [5] [i_4 - 2]))))));
                            arr_45 [i_4 + 1] [i_8] [i_9] [i_10] [i_12 + 2] = var_11;
                            var_25 = ((~(min(((538752778942906682 ? (arr_4 [i_4] [i_8]) : (arr_28 [i_4 - 2]))), -1127912291349081821))));
                        }
                    }
                }
            }
        }
    }
    var_26 = (max(var_26, var_3));
    var_27 = (min(var_12, var_6));
    #pragma endscop
}
