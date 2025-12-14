/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126938
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_14 = (max(var_14, ((((2097151 & 255) ? (((min(-1, 2097151)) | (~0))) : (-127 - 1))))));
                var_15 = ((-(((min(23889, -32))))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        var_16 = (((-(161 % 8))));
        var_17 = ((min((min(2097151, 0)), ((min(248, -2147483633))))));
    }
    #pragma endscop
}
