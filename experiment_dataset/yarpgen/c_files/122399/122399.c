/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122399
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (~var_11);
    var_19 = (max(var_19, 25702));
    var_20 = (var_3 != 39834);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_21 ^= ((((~(arr_4 [i_1]))) ^ (min((~var_14), (arr_3 [i_0] [i_1] [5])))));
                var_22 = arr_2 [6];
            }
        }
    }
    var_23 |= ((~(max((((137 ? var_9 : var_14))), ((var_6 >> (var_16 - 11354)))))));
    #pragma endscop
}
