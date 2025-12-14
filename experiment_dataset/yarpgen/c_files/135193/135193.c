/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135193
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((((var_14 >> (var_1 - 8211))) - (((min(var_10, 127)))))) >= (((((min(1269133392036708723, 0)) > var_15))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_17 = var_0;
                var_18 = (((((max(var_15, 62)) | (~0))) ^ ((max((var_13 | var_0), (31215 ^ 32734))))));
            }
        }
    }
    #pragma endscop
}
