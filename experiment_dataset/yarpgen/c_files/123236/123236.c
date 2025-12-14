/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123236
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_13 *= ((((((arr_4 [i_1 + 1] [i_1 - 2] [i_1 + 1] [i_0 + 2]) >> (((arr_1 [i_1 - 1]) - 29516))))) ? ((min((arr_2 [i_1 - 1] [i_1] [i_2]), (arr_2 [i_1 - 1] [i_1] [i_2])))) : (((arr_4 [i_1 - 1] [i_1 - 1] [i_2] [i_0 - 1]) >> (arr_2 [i_1 - 2] [i_1] [i_2])))));
                    arr_6 [i_0 + 1] [i_1 + 2] [i_2] [i_1] = 255;
                    var_14 &= arr_4 [15] [8] [i_1 + 3] [10];
                }
            }
        }
    }
    var_15 = -var_10;
    var_16 &= (max((((min(var_1, var_10)))), (max(255, var_9))));
    #pragma endscop
}
