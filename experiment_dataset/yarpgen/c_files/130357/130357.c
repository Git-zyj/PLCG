/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130357
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max((max(var_10, var_13)), -778254262));
    var_15 *= ((var_4 ? var_9 : ((min(var_2, (var_5 < 176))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0] [7] [i_1] = (((((max((arr_4 [i_0] [i_1]), var_11))) ? (~-778254258) : ((max(var_9, (arr_3 [i_0] [i_1])))))));
                arr_6 [i_1 + 2] [i_0] = (max((((var_4 ? var_13 : var_5))), ((((max((-9223372036854775807 - 1), var_8))) ? ((2097144 ? 0 : 13)) : -778254272))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_16 = ((((max(var_8, (~778254238)))) ? (((max(var_11, var_12)) & (arr_8 [i_0] [i_1] [i_2]))) : (((~(((arr_3 [i_0] [i_1]) ^ (arr_8 [i_0] [i_0] [i_2]))))))));
                            var_17 = ((((((arr_10 [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 + 1]) ? var_0 : (arr_7 [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2 - 1])))) ? (((arr_0 [i_3]) ? (arr_0 [i_3]) : 32)) : var_12));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
