/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151801
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_1] |= ((-(min((arr_0 [i_1]), var_12))));
                var_17 = (max(var_17, (arr_2 [i_1])));
                arr_6 [i_0] = (max((((var_12 < (arr_2 [i_0])))), -2147483639));
                arr_7 [i_0] [i_0] [i_0] = 4555681535442201346;
            }
        }
    }
    var_18 ^= var_4;
    #pragma endscop
}
