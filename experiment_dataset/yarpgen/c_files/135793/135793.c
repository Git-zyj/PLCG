/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135793
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= var_11;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = (((~(((arr_2 [i_1]) >> (8572415977369148545 - 8572415977369148540))))));
                var_21 = (min(var_21, (((max(var_2, ((-5809538789771673794 ? 127 : 1585919225610482012))))))));

                for (int i_2 = 4; i_2 < 23;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [i_0] [i_1] [22] [16] [15] = (((((((23 ? var_19 : var_8)) | (arr_1 [i_0 + 1])))) ? (~var_7) : (((arr_12 [i_0] [i_1] [i_1] [i_2 - 2] [i_3 + 1] [i_4] [i_4]) * (max(3932970355, 31))))));
                                var_22 = (min(var_22, (((((((var_10 ? var_14 : 1))) ? ((max(var_15, 1))) : (arr_2 [i_1])))))));
                                var_23 = (min(((9223372036854775807 + (max(-1340601347, (arr_0 [i_0]))))), ((((-3068 ? var_14 : (arr_5 [i_3 + 2] [i_3] [i_3])))))));
                            }
                        }
                    }
                    arr_16 [i_1] [i_1] [i_2] = (arr_3 [i_1] [i_1]);
                    arr_17 [i_0] [i_0] [i_1] = (((arr_9 [i_0 + 2] [i_1] [i_1] [i_2]) << (((max(((255 ? (arr_14 [i_0 - 4] [i_0] [i_0] [i_0] [i_1] [i_0]) : 12409838392768035861)), ((127 ? 18446744073709551605 : var_12)))) - 18446744073709551604))));
                    var_24 = (((((var_1 ? (max(var_8, (arr_7 [i_0 - 3] [i_0] [i_0] [i_0]))) : (~var_9)))) ? 27 : (((arr_14 [i_2] [i_2] [i_2 - 1] [i_2 + 1] [i_1] [12]) ? (arr_5 [i_2 - 3] [i_1] [i_0 - 4]) : (min((arr_3 [i_1] [i_1]), 2147483647))))));
                }
                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {
                    var_25 = ((var_6 ? (arr_1 [i_0 + 1]) : ((((~(arr_6 [i_1] [i_1])))))));
                    arr_20 [i_0] [i_1] = (min((((((((arr_13 [i_1] [i_5]) ? -1865178016 : (arr_12 [i_5] [i_1] [i_5] [i_5] [i_1] [i_5 - 1] [2])))) ? ((22324 ? var_17 : 1251434720)) : ((min((arr_11 [i_0 - 2] [i_1] [i_1] [i_5 - 1]), var_14)))))), (min(var_17, ((2085131273 ? 23 : 18182396570054055871))))));
                }
            }
        }
    }
    #pragma endscop
}
