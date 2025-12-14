/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184369
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 11;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        {
                            var_20 = ((((max((arr_12 [i_3 - 1] [i_3 + 1] [i_3 + 3] [i_3 + 3] [i_3] [i_3 + 2] [i_3 + 2]), (arr_12 [i_3 + 3] [i_3 - 4] [i_3 - 3] [i_3 + 2] [i_3] [i_3 + 2] [i_3 + 3])))) ? var_0 : ((-64 ? -103 : 9223372036854775802))));
                            arr_13 [i_3] = ((((((3447113080 + var_12) ? (((max(17281, (arr_6 [i_0] [i_1] [i_2]))))) : (arr_9 [i_3] [5] [i_3])))) ? (max((0 >= -1), (((-9223372036854775807 - 1) ^ 255)))) : (((((arr_4 [i_4] [i_2] [3]) <= ((var_3 ? (-9223372036854775807 - 1) : 10))))))));
                            var_21 = ((((max(((var_13 ? (arr_1 [11]) : 246)), (arr_7 [9] [2] [i_3] [i_4])))) & (max((((arr_3 [i_1]) + 197)), (arr_5 [5] [i_4] [i_2] [i_3])))));
                            arr_14 [11] [i_0] [i_3] [i_0] [i_3] [i_1] [i_0] = (max((max(847854233, 197)), (arr_1 [i_3 + 1])));
                        }
                    }
                }
            }
            arr_15 [i_0] = (((((((191 < (arr_8 [i_0] [12] [i_1])))))) & (max((((arr_4 [3] [3] [12]) ? (arr_9 [i_1] [i_1] [i_1]) : 100)), (arr_1 [i_0])))));
            arr_16 [i_1] [i_0] &= ((((((arr_11 [i_1] [i_0] [i_0]) * (var_15 < 31)))) ^ ((var_7 ? (arr_3 [3]) : (((max((arr_4 [i_1] [i_1] [i_0]), var_3))))))));
            arr_17 [i_0] &= (max((((((var_15 ? 17272 : (arr_2 [i_0] [i_0]))) >= (((((arr_6 [i_0] [i_1] [5]) < -21))))))), (((var_12 >= var_11) ? 50 : var_14))));
            var_22 *= (((arr_7 [i_0] [i_1] [i_1] [i_1]) + (max(var_13, (((var_0 ? var_4 : (arr_11 [10] [i_0] [i_0]))))))));
        }
        arr_18 [i_0] = (arr_1 [i_0]);
        var_23 = ((((max(((max(187, 127))), -206988926301222418))) ? ((2839827501 / (max((arr_9 [i_0] [i_0] [i_0]), (arr_11 [i_0] [i_0] [i_0]))))) : (((((var_7 ? 66 : (arr_0 [2])))) / (max((arr_5 [i_0] [i_0] [3] [i_0]), (arr_1 [i_0])))))));
        var_24 = 22;
    }
    for (int i_5 = 3; i_5 < 13;i_5 += 1)
    {
        var_25 = (max(((((arr_11 [i_5] [i_5 - 2] [i_5 - 1]) <= 7732123577925394364))), ((((847854196 ? (arr_20 [i_5]) : var_13)) - (-125 | 61)))));
        var_26 = -32761;
        arr_22 [i_5] [i_5] = (max((((((max(6561028840021069772, 3727407607))) ? (-127 - 1) : (arr_11 [i_5] [i_5] [i_5])))), (max(var_14, (arr_19 [i_5])))));
    }
    var_27 = (((((var_15 ? var_8 : (var_6 / var_8)))) ? ((max((!var_10), var_19))) : var_14));
    #pragma endscop
}
