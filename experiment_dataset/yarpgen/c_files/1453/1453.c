/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1453
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_19 ^= (((((-1 ? ((-(arr_0 [i_0] [i_1]))) : (-2083548794 > -2028318320)))) ? (min((((arr_3 [i_0] [i_1] [i_1]) ? var_18 : 58389)), (!var_15))) : var_6));
                arr_5 [i_1] [i_1] = var_7;
            }
        }
    }
    var_20 -= (min((((min(var_11, var_3)) % ((var_15 ? var_16 : var_17)))), var_18));
    #pragma endscop
}
