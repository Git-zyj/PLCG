/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102576
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 2786;
    var_18 = (min(((min(var_12, var_7))), -406485496));
    var_19 = ((((var_14 + (!var_11))) ^ var_13));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_20 ^= (min((arr_3 [i_1]), (((arr_7 [i_2]) ? var_5 : ((((arr_0 [i_0]) ? (arr_8 [i_0] [i_1] [i_2]) : 8)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_21 = (max(var_21, (((65535 & (max(((var_12 ? 3 : 70367670435840)), ((min((arr_4 [i_0] [i_0] [i_0]), 0))))))))));
                                var_22 = (((((arr_11 [i_2] [i_2] [i_1] [i_3 + 1]) ? (arr_12 [i_0] [i_2] [i_2] [i_3 - 1] [i_3 - 1] [i_3]) : (arr_11 [i_2] [i_3] [i_3 - 1] [i_3 - 2]))) & ((((6103 ^ var_8) ? (((var_10 ? (arr_0 [i_0]) : (arr_2 [i_1] [i_4])))) : (max((arr_10 [i_2] [i_3] [i_2] [2] [i_2]), (arr_1 [i_4]))))))));
                                arr_16 [i_2] [i_2] [i_2] [i_2] [i_4] = (arr_9 [8] [i_2] [i_1]);
                            }
                        }
                    }
                    var_23 = (max(var_23, (((((((var_10 >> (var_9 - 1483921271044841517))) << (((var_14 & var_2) - 10385407668784234599)))) | 23854)))));
                }
            }
        }
    }
    var_24 = var_11;
    #pragma endscop
}
