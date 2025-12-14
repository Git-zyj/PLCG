/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182593
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_10;

    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = ((!(arr_0 [i_0 - 2])));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        var_13 = 0;
                        arr_10 [i_0] [i_1] [i_2] [i_2] [i_1] = (+(((arr_1 [i_2]) ? (max((arr_5 [i_0 - 3] [i_0 - 3]), (arr_8 [i_0 - 1] [i_1] [i_1] [i_0 - 1] [i_0]))) : (((arr_7 [i_0] [i_2] [i_3]) ? (arr_4 [i_1]) : 0)))));
                    }
                }
            }
        }
        var_14 *= (min(((var_5 ? (arr_0 [i_0]) : (arr_9 [i_0] [i_0] [i_0 - 3] [i_0] [i_0]))), ((-(arr_4 [i_0])))));
        var_15 ^= ((((arr_4 [i_0]) ? (((arr_7 [i_0] [i_0] [i_0]) ? var_0 : -1622047516)) : (min(1, var_2)))) <= (((1 == 127) << (((((arr_0 [i_0]) | -243575466)) + 243575475)))));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_16 ^= 1;
        var_17 *= (!1);
    }
    #pragma endscop
}
