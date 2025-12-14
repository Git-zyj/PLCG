/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120637
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= (((((min((!var_12), (var_3 >= 9223372036854775807))))) * var_8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                var_15 = ((~(((arr_2 [i_0] [i_1 + 2] [i_1 - 1]) | (arr_2 [i_0] [i_1 + 2] [i_1 - 1])))));
                var_16 ^= (min((arr_3 [1]), -var_13));
            }
        }
    }
    #pragma endscop
}
