/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130342
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= 10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_21 *= min((arr_0 [i_0] [i_0]), ((~(arr_0 [i_1] [i_1 + 1]))));
                arr_4 [8] |= (((max((((var_7 ? 63 : (arr_1 [10])))), ((var_10 ? var_4 : 72)))) << (112 - 85)));
            }
        }
    }
    var_22 *= 240;
    var_23 = ((var_2 >> (var_18 + 444677857)));
    #pragma endscop
}
