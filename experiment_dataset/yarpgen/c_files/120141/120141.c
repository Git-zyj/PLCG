/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120141
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((~(~273886048)))) ? ((~(max(10360021361972150060, 0)))) : var_10));
    var_13 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_14 = 8086722711737401555;
                    var_15 = (-55 ? (min(8086722711737401571, -78)) : ((9 ? 8001770539270525436 : -59)));
                    var_16 = ((+(((16 ^ -37) ^ (-49 ^ 1)))));
                    var_17 = (max(var_17, 496263870));
                }
            }
        }
    }
    #pragma endscop
}
