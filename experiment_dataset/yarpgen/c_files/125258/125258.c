/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125258
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = (((-9223372036854775807 - 1) ? 254 : (max(251, ((1 ? 2842460384097683708 : 1))))));
                var_17 ^= ((+(((((9223372036854775807 ? (arr_2 [0]) : 1457344374092644464))) ? 1 : ((246 ? var_9 : -1300170794554083336))))));
                var_18 |= (max(((-((min((arr_1 [5]), 1))))), (arr_3 [i_0])));
            }
        }
    }
    var_19 = ((((var_16 ? var_15 : 254) - var_6)));
    #pragma endscop
}
