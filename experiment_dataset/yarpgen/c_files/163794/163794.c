/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163794
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 25873;
    var_11 = (((((0 % var_5) - ((var_9 ? 0 : 25867)))) ^ (((-25873 & (~7))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_12 = (((arr_0 [i_0] [i_0]) >> (((arr_0 [i_0] [i_0]) - 48465))));
        arr_3 [i_0] = (3288365947 | 1);
        var_13 = (5326937159196817064 * 1);
    }
    #pragma endscop
}
