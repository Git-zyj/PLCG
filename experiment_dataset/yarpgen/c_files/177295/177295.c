/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177295
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (var_0 - var_16);
    var_20 *= (min((min(var_4, var_10)), (var_1 << var_16)));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_21 ^= (((((var_9 ? 0 : ((var_12 ? var_5 : var_4))))) ? (((arr_4 [i_0 - 1] [i_0 - 1]) ? ((63 ? var_17 : var_16)) : (63 != var_7))) : (arr_4 [i_0 - 4] [i_0])));
                var_22 &= (((((var_7 ? 50 : var_3))) ? (var_7 & var_8) : ((((62782 ^ (arr_0 [i_1]))) | ((0 ? var_18 : 28583))))));
                arr_5 [i_1] [i_0] [i_0] &= ((((min(51, (((var_12 >= (arr_3 [i_0] [11]))))))) ? var_4 : ((((((arr_2 [i_0] [4]) * 1))) ? (var_17 * 0) : 0))));
                var_23 ^= var_16;
                arr_6 [i_0 - 1] = (((((((var_7 ? -32 : 341826937)) ^ 1481520533))) + ((var_16 * (arr_3 [i_1] [i_0 - 1])))));
            }
        }
    }
    #pragma endscop
}
