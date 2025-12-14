/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142385
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_2] = max((!var_5), (((arr_3 [i_1 - 1]) << (((max((arr_6 [i_0] [i_1] [i_2]), var_4)) - 5635333798468250042)))));
                    var_15 = ((((min((arr_0 [i_0] [i_0]), 1)))) - (min((arr_6 [i_0] [i_1 - 1] [i_0]), var_0)));
                    var_16 = ((((((var_11 ? (arr_2 [i_0]) : (arr_4 [i_0] [i_2 + 4]))))) <= ((var_6 ? ((max((arr_4 [i_0] [i_0]), (arr_4 [i_0] [i_0])))) : (arr_6 [i_0] [i_0] [i_0])))));
                    arr_8 [i_0] [i_0] [i_2 + 3] [i_0] = (max(-var_4, (arr_0 [i_0] [i_2])));
                    arr_9 [i_0] [11] [i_0] = 28672;
                }
            }
        }
    }
    var_17 = (min(((var_11 ? var_12 : ((var_5 << (var_10 + 109))))), (max(-var_14, -var_14))));
    #pragma endscop
}
