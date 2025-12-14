/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107826
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_14 = (((max(((1995600115040323638 ? var_8 : 64)), 49413))) ? ((27925 ? (arr_4 [i_0 + 1]) : ((110 ? var_4 : (arr_6 [i_0] [i_1]))))) : (((((~(arr_4 [i_0 - 3]))) ^ (arr_4 [i_0])))));
                var_15 *= ((-(((-(arr_2 [i_0]))))));
                var_16 ^= (max(0, (var_13 || var_9)));
                var_17 = (((((-(329606567 / -49)))) < -706750459));
            }
        }
    }
    var_18 = (min(64, -73));
    #pragma endscop
}
