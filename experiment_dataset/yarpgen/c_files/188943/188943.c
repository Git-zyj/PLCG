/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188943
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_18 = (arr_2 [i_0]);
                arr_4 [i_0] &= 1;
            }
        }
    }
    var_19 ^= (var_12 ? ((5813 ? 5803 : -2591)) : ((var_0 ? 32767 : (var_1 || 59))));
    #pragma endscop
}
