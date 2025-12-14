/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106848
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((-8 & ((var_8 ? var_0 : (-9223372036854775807 - 1)))))) ? 1141505023 : var_7));
    var_15 ^= ((var_1 ? ((min(((1395798176 ? (-9223372036854775807 - 1) : 1395798176)), ((max(14865, 5194)))))) : var_1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_16 = (min(9223372036854775807, ((((max(32767, 3489974511196951818))) ? (-1003024774 & 255) : (-22 | -9223372036854775807)))));
                var_17 = ((((((-6999498609741788200 / 21) ? ((var_12 ? 16383 : (arr_3 [i_1] [11] [11]))) : ((62049 ? 72057593903710208 : -1684919285))))) ? 16391 : (max((((-21 + 9223372036854775807) >> (-2377661345276389468 + 2377661345276389501))), (((11796375657561381451 ? var_6 : 2639315738)))))));
            }
        }
    }
    #pragma endscop
}
