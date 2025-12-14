/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112011
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [14] [i_0 - 2] [i_0] |= 0;
                var_19 = (((((32767 ? (arr_3 [i_0] [8]) : (((max(var_17, (arr_0 [i_1]))))))) + 9223372036854775807)) >> (var_12 - 33609));
                var_20 = (max(var_20, var_6));
                var_21 = ((18446744073709551615 >> (18446744073709551615 - 18446744073709551561)));
            }
        }
    }
    var_22 ^= ((var_1 * ((var_7 >> (var_8 - 176)))));
    #pragma endscop
}
