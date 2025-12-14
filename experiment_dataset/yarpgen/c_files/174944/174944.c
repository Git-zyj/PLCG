/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174944
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_12 -= var_8;
                var_13 = (~0);
                arr_8 [i_0] [i_0] [i_0] = var_5;
                var_14 = (((min(((max(5915689965868182044, 1))), -var_6)) % ((((((arr_5 [i_1] [i_1] [i_1]) ? 12370 : 4107385849699925380)))))));
                var_15 = (--32767);
            }
        }
    }
    var_16 = (max(var_16, var_4));
    var_17 = (!var_7);
    #pragma endscop
}
