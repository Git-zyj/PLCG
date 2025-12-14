/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171812
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_12;
    var_18 = -76633083;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_19 = ((var_10 * (255 / -76633083)));
                var_20 *= (((((~(arr_2 [i_1])))) & (min(11, var_0))));
            }
        }
    }
    var_21 = ((((((((65535 ? 65535 : 2681018887))) ? (min(29, 13)) : -1))) ? (!31888) : ((184 ? (((19 ? var_16 : 76633082))) : 0))));
    #pragma endscop
}
