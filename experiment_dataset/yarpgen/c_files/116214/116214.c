/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116214
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] [i_0] = ((var_9 ? ((((((65534 << (var_8 - 1559814808)))) * -var_6))) : (18446744073709551615 * -12045)));
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_13 = (min(((-(arr_2 [i_0 + 2]))), ((max((arr_4 [i_1 + 2] [i_2 - 4]), var_0)))));
                            var_14 = (min(var_14, ((2147483647 ? var_5 : (min((arr_2 [i_0 - 1]), ((min(-1931116797, var_4)))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 22;i_5 += 1)
                    {
                        {
                            var_15 = (((((arr_15 [i_0 + 1]) << (8499 - 8486))) << (((((~496) + 514)) - 10))));
                            arr_16 [i_5] [i_5] [i_4] [i_5] = (min(1, ((((-(arr_8 [i_0] [i_1 - 1] [i_4]))) * var_1))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 1;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 11;i_10 += 1)
                        {
                            {
                                arr_34 [i_10] [i_10] [i_8] [i_10] [i_6] |= (((!var_9) * (1 * 3500691058063208417)));
                                var_16 = ((!-120) ? (((max((max(0, 1)), (arr_21 [i_6]))))) : (min(((max((arr_0 [i_10]), var_8))), ((-1218421308 ? (arr_18 [i_6]) : 1517523615)))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 11;i_12 += 1)
                    {
                        {
                            arr_43 [i_12] [i_7] [i_6] [i_7] [i_6] = 15;
                            var_17 *= (max((~6332), ((50 << (((arr_36 [i_7] [i_11] [i_12]) - 26279))))));
                            var_18 = (min(var_18, (((((min(var_6, 5) << (3 << 1))))))));
                            arr_44 [i_6] [i_11] [i_7] [i_12] = (((((((1 ? (arr_37 [i_6] [i_6] [i_11] [i_12]) : var_5))) * (var_4 * 15247858663912056475))) << (-var_8 + 1559814867)));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_13 = 1; i_13 < 10;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 11;i_15 += 1)
                        {
                            {
                                var_19 ^= (((!22197) ? ((min(-123, ((max(30903, (arr_20 [i_6]))))))) : ((268313786 << (892368186 - 892368157)))));
                                var_20 &= var_10;
                                arr_53 [i_7] [i_7] [i_7] = (min((((~((min((arr_52 [i_6] [i_7] [i_7]), var_4)))))), (arr_25 [i_6])));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_16 = 1; i_16 < 7;i_16 += 1)
                {
                    for (int i_17 = 3; i_17 < 9;i_17 += 1)
                    {
                        {
                            arr_60 [i_7] [i_7] [i_7] = (arr_52 [i_7] [i_16] [i_7]);
                            arr_61 [i_16] [i_7] [i_7] [i_16] [i_6] [4] |= ((((((-(min(65535, 62886)))) + 2147483647)) << (86 - 86)));
                            arr_62 [i_7] [i_16] [i_16] [i_6] [i_7] = ((((max(9765252249098112282, var_7))) ? ((~(5765868747237278704 / 1040))) : (((-(min((arr_50 [i_6] [i_7] [i_6] [i_16] [i_16] [i_17] [i_17]), var_8)))))));
                        }
                    }
                }
                var_21 &= (65535 << 1);
            }
        }
    }
    #pragma endscop
}
