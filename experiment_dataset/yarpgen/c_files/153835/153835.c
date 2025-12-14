/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153835
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_6;
    var_11 = (min((!var_1), (max(1, 1))));
    var_12 = 1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {

                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            var_13 -= (max((min(13429, (arr_9 [i_0 + 1] [i_0 + 1]))), ((((arr_6 [i_0 + 1] [i_4 + 1] [i_4]) <= 1)))));
                            var_14 &= ((((max((-32767 - 1), 255))) != (((var_4 <= (65535 <= var_9))))));
                            var_15 = (min(var_15, ((max(var_1, (arr_3 [0] [i_3]))))));
                        }
                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            var_16 = (max(var_16, (((1 || (arr_1 [11]))))));
                            arr_15 [i_1] [i_1] [i_2] [i_2] [i_5] = (min((max((min((arr_0 [1] [1]), var_1)), (((1 != (arr_14 [i_0] [i_1] [i_1])))))), -65510));
                            var_17 ^= (((max(((min(var_6, 5554))), (arr_11 [12])))) ? (((((143 ? 1 : (arr_8 [i_5] [i_2] [i_1] [1])))) ? (65514 <= var_2) : var_4)) : ((((var_4 <= (arr_4 [i_0 + 1] [i_0 + 1] [i_1]))))));
                            var_18 = ((1 & ((var_1 ? (arr_12 [i_0 + 1] [1] [i_1] [1] [12] [i_2] [i_5]) : (arr_5 [i_0 + 1] [i_0 + 1] [i_1])))));
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_3] [i_1] [2] = (((arr_6 [i_0] [i_0] [i_0]) / (arr_13 [i_0] [i_0] [i_0] [i_3] [i_5])));
                        }
                        var_19 *= 0;

                        for (int i_6 = 1; i_6 < 16;i_6 += 1)
                        {
                            var_20 &= var_2;
                            var_21 = (min(var_21, (((((48 ? 65514 : 0)) & ((max(1, (arr_13 [i_0] [i_0] [i_0 + 1] [i_0 + 1] [11])))))))));
                            var_22 = ((-(arr_7 [i_0] [i_0] [i_0] [i_0 + 1])));
                            var_23 = (max(var_23, 1));
                            arr_20 [i_1] = 65535;
                        }
                        /* vectorizable */
                        for (int i_7 = 2; i_7 < 17;i_7 += 1)
                        {
                            var_24 = (min(var_24, var_2));
                            var_25 = (((arr_7 [i_0] [i_2] [i_3] [i_2]) ? (arr_0 [i_0] [i_1]) : (((65529 != (arr_1 [i_2]))))));
                            arr_24 [i_0] [i_1] [i_2] [i_3] [i_1] [i_1] = var_3;
                            var_26 = -6276;
                        }
                        var_27 = (40474 & 41781);
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 18;i_9 += 1)
                        {
                            {
                                arr_31 [i_8] [i_8] [i_0] [i_2] [i_1] [i_1] [i_8] &= ((var_5 <= (max(-var_6, (var_7 <= 63069)))));
                                var_28 = (arr_1 [i_8]);
                            }
                        }
                    }
                    var_29 = ((min(1, (!1))));
                }
            }
        }
    }
    #pragma endscop
}
