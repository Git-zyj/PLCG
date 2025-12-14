/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151436
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, (((!(((-(-1388262656 * 14955830485231677289)))))))));
    var_17 ^= (-71 > 1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = (!3311451107225145843);
                var_18 = (!1);
                arr_5 [i_0] [i_0] = (((((29 || 1) | (!1))) >> (((--288230376151711743) - 288230376151711712))));
            }
        }
    }
    #pragma endscop
}
