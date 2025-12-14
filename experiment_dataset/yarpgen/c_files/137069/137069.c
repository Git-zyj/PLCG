/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137069
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_13 = (min(var_13, (((((((((var_2 == (arr_4 [i_0] [i_1] [i_1])))) >= (var_9 * var_3)))) > (((var_3 != (arr_2 [i_0])))))))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_14 = (max(var_14, (min((min(-57, 64533)), ((max(var_9, (arr_7 [i_2] [i_2 - 2] [i_1]))))))));
                            var_15 = (max((1 % var_9), (max(0, -22))));
                        }
                    }
                }
                arr_13 [i_1] [i_0] [i_0] = (min((min(1, 4294967276)), (min(1, var_12))));
                var_16 = (min((368630116 >> 1), (max((max(var_7, 5)), var_5))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_6 = 2; i_6 < 11;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 9;i_8 += 1)
                        {
                            {
                                var_17 = (min((((arr_21 [i_6 - 2]) * (arr_21 [i_6 - 2]))), (var_9 && 1)));
                                arr_29 [i_7] [i_5] [i_6 + 2] [i_7] [i_8] = (min(((min(1, -57))), (max(((min(var_2, (arr_17 [i_6 + 1])))), (((arr_19 [i_4]) ^ var_5))))));
                                var_18 = (max(var_18, ((((min(var_5, 120)) << (((min(var_10, (arr_15 [i_6 + 1] [i_8 - 1]))) - 16779)))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 13;i_9 += 1)
                {
                    for (int i_10 = 3; i_10 < 10;i_10 += 1)
                    {
                        {
                            arr_36 [i_9] [i_10] [i_9] = (min((min((min(966846888, 14003951121507629750)), ((var_8 + (arr_5 [i_4] [i_4] [i_10]))))), ((max(1, (arr_24 [i_10 + 2] [i_10 + 2] [i_10]))))));

                            for (int i_11 = 4; i_11 < 10;i_11 += 1)
                            {
                                var_19 = (max(((((arr_24 [i_11 + 3] [i_11 + 1] [i_10 - 1]) - 4148630122))), (min((arr_22 [i_10 + 2]), 4442792952201921874))));
                                var_20 *= (((min((arr_15 [i_10 + 3] [i_11 + 3]), (arr_9 [i_10 + 1] [i_11] [i_11 - 3] [i_11] [i_11 + 3]))) & ((max((max((arr_2 [i_9]), var_5)), ((((arr_4 [i_9] [i_10 + 3] [i_9]) != (arr_35 [i_4] [i_4] [i_4] [i_4])))))))));
                                var_21 = (min(var_21, (min(((var_12 << (((arr_34 [i_11 + 3] [12] [i_10 - 2] [i_10 - 3]) - 4038608266661737927)))), ((max(var_4, -57)))))));
                                var_22 = (max((((((min(var_3, var_2)))) - (max(57, (arr_34 [i_9] [i_9] [i_9] [i_10 - 1]))))), ((min(((65535 && (arr_26 [i_4] [i_4] [i_4] [i_4]))), (((arr_33 [i_4] [i_4] [i_5] [i_9] [i_10] [i_9]) == (arr_39 [i_4] [i_5] [i_9] [1] [i_11]))))))));
                            }
                            var_23 = (min((min((arr_9 [i_10 - 1] [i_10 + 3] [i_10 + 2] [i_10 + 3] [i_10]), var_9)), (((var_2 > (arr_39 [i_10] [i_10 - 1] [i_10 - 2] [i_10 - 2] [i_10 - 3]))))));

                            for (int i_12 = 0; i_12 < 13;i_12 += 1)
                            {
                                var_24 ^= (min(((((min(-2121236086, (arr_0 [i_5])))) / (min(2147483647, var_12)))), (max((68 > 255), (max(var_0, (arr_22 [i_10])))))));
                                var_25 = (4172860876 % 4644845182548547094);
                            }
                            for (int i_13 = 0; i_13 < 13;i_13 += 1)
                            {
                                var_26 = (min(((6800435966411747043 >> (4644845182548547094 - 4644845182548547050))), ((min(var_9, -4298291033088864495)))));
                                var_27 = ((((max(14003951121507629752, 6931162853883859330))) && ((max(1, var_6)))));
                                arr_45 [i_10] [i_5] [i_9] [i_10] [6] [i_13] = (min((max(var_8, (arr_20 [i_10 - 3] [2]))), (min(((min((arr_5 [i_4] [i_4] [i_10]), 125))), 7531623411100501253))));
                            }
                        }
                    }
                }
                arr_46 [i_4] = (max((min((13 - var_10), 14003951121507629756)), (((((var_10 ^ (arr_7 [i_4] [i_4] [i_4])))) | 3))));
            }
        }
    }
    #pragma endscop
}
