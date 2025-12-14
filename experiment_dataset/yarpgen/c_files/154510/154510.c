/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154510
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_10 &= (~25165824);
                                var_11 &= (max((43739 >= 28395), -25165835));
                                var_12 = (max(var_12, (arr_6 [i_2])));
                                var_13 = (max((((arr_13 [13] [i_1 - 1] [i_2 - 1] [i_4] [i_4] [i_2 - 1] [i_1 - 1]) ? (arr_13 [i_0] [i_0] [i_0] [i_1 - 1] [i_0] [i_0] [i_4]) : (arr_13 [10] [i_1] [i_2 - 1] [i_2] [i_2 + 1] [i_3] [i_4]))), (((arr_13 [15] [i_3] [i_2 + 1] [2] [i_1 + 2] [i_0] [i_0]) ? var_7 : (arr_13 [i_0] [i_1] [i_1 - 1] [i_2 + 1] [i_3] [i_1] [i_4])))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 4; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        {
                            var_14 += (((((arr_8 [i_6] [i_0] [i_5] [i_1] [i_0] [i_0]) + 2147483647)) >> (((((18446744073709551608 + (arr_20 [i_0] [i_0] [16] [i_1 + 1] [i_5 - 3] [i_6]))) >= (arr_0 [i_1 + 2]))))));

                            for (int i_7 = 0; i_7 < 17;i_7 += 1)
                            {
                                var_15 = (((((arr_9 [i_1 - 1] [4] [4] [i_1 - 1]) << (((arr_9 [i_1 - 1] [i_1 - 1] [5] [i_1 - 1]) - 13863842330276094908)))) >= (max(106, (arr_9 [i_1 - 1] [i_1] [i_1] [i_1 - 1])))));
                                var_16 = (min(var_16, ((-(max((arr_17 [i_5 - 1] [i_6] [i_6] [i_1 + 2] [i_7]), (arr_17 [i_5 + 2] [i_1 + 1] [i_5 + 1] [i_1 - 1] [i_7])))))));
                                var_17 = (min(((((arr_23 [i_1] [i_1 - 1] [i_5 - 2] [i_6]) <= (arr_7 [i_7] [i_1] [i_1 + 2])))), -110));
                                var_18 = (max(7429652461978593605, 165));
                            }
                            for (int i_8 = 0; i_8 < 17;i_8 += 1)
                            {
                                var_19 = max((68652367872 & 126), (arr_5 [i_8]));
                                var_20 = (arr_1 [16]);
                                var_21 = ((+((~(max((arr_10 [i_0] [i_1] [16] [1] [i_8]), var_9))))));
                            }
                            for (int i_9 = 0; i_9 < 17;i_9 += 1)
                            {
                                var_22 = (min(var_3, ((-((((arr_20 [15] [i_1 - 1] [i_1 - 1] [15] [i_1 - 1] [i_1 - 1]) >= (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
                                var_23 = ((!(((-((190 ? 184 : 47655)))))));
                                var_24 = (max(((min((arr_8 [6] [i_1] [9] [9] [i_1] [i_1 + 1]), (arr_8 [i_9] [i_1] [i_6] [i_6] [i_1] [i_1 + 1])))), ((+((max((arr_8 [i_1] [i_1] [i_5] [i_5] [i_1] [i_0]), -23)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = var_1;
    var_26 = ((162 ^ ((max(var_7, -18)))));
    var_27 = (((~((var_4 ? var_5 : var_3)))));
    #pragma endscop
}
