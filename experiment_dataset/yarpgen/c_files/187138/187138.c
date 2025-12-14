/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187138
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((min(3138624666453364145, (min(4294966784, 32766)))));
    var_16 = (max(var_16, 15182015357456556763));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] = (min(-6370910835810684304, ((max((min(165, 112)), (max(109, 111)))))));
                var_17 = 178;
                var_18 = (max(var_18, 1));
            }
        }
    }
    #pragma endscop
}
