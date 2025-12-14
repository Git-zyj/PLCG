/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152666
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_12 ^= (max(184, ((((((arr_1 [i_1]) + -70))) ? (~0) : 10544032271220043995))));
                arr_4 [i_0] [i_1 - 1] = (((((max(69, (max(var_10, 71)))))) / (((((-(-32767 - 1)))) ? (((~(arr_2 [i_0] [i_0] [i_0])))) : (((-9223372036854775807 - 1) ? (arr_3 [i_1]) : 60))))));
            }
        }
    }
    var_13 = -1616530117;
    #pragma endscop
}
