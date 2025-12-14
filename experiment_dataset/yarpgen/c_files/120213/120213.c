/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120213
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_19 = (((32768 && (arr_3 [10] [10] [i_0]))));
                var_20 = (((((((((arr_1 [i_0] [i_0]) | (arr_1 [i_0] [i_0])))) == (((arr_1 [i_0] [i_0]) ? 32767 : (arr_0 [i_0] [i_1])))))) | (((32768 / 32752) / (123 && 12)))));
                var_21 = (((arr_1 [i_1] [i_0]) + ((654 + (arr_1 [i_0] [i_0])))));
            }
        }
    }
    var_22 ^= (((~var_4) ? (var_14 < 7) : ((var_8 ? (18446744073709551615 + 7) : var_6))));
    #pragma endscop
}
