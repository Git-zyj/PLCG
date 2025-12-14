/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178812
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_9 [i_0] = ((~(-1 ^ -8)));
                    var_15 = (max((max((arr_2 [i_0] [i_2]), (arr_3 [i_0 - 1]))), ((-(~131071)))));
                    arr_10 [i_0] [i_0 + 1] [i_0] [i_0] = ((((((((arr_2 [i_0] [i_1 + 3]) & (arr_1 [i_2])))) ? ((((arr_8 [i_0] [i_0] [1] [i_2]) ? (arr_0 [i_0]) : (arr_3 [i_2])))) : (((arr_1 [i_2]) * (arr_8 [i_0] [i_1] [i_0] [i_0]))))) * ((((((arr_4 [i_0]) ? (arr_5 [7] [i_1] [16] [i_2]) : (arr_1 [i_0]))))))));
                }
            }
        }
    }
    var_16 = ((~-var_14) ? ((((min(var_7, var_0))) ? var_11 : 1)) : (((var_6 > var_1) ? ((var_10 << (var_5 - 8650))) : var_1)));
    var_17 = ((var_3 >= (max(((var_7 ? var_4 : var_3)), var_8))));
    #pragma endscop
}
