/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143924
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= 1;
    var_12 = ((((2147483647 + 0) - var_10)));
    var_13 = var_1;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_14 *= ((((((16698 << (var_6 - 26)))) ? (var_6 < var_9) : ((var_2 ? -36 : 120)))) - ((var_3 >> (48838 - 48835))));
                    var_15 = (min(var_15, (((((((var_0 ? 0 : 8388352))) ? var_5 : (-109 - var_2)))))));
                    var_16 ^= var_10;
                }
            }
        }
        arr_11 [i_0] = (((((var_6 && var_10) && (1 && -1286254663))) ? (var_10 || var_10) : (var_0 || 0)));
        var_17 = var_6;
    }
    #pragma endscop
}
