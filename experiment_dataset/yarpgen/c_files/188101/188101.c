/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188101
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_0] = (min((min(115, -11)), 127));
                arr_6 [i_0] [i_1] = -390880985584208824;
                var_16 = (max(var_16, (((-(max(-112, -8191)))))));
            }
        }
    }
    var_17 = ((!((max((max(18055863088125342775, 1)), 837)))));
    var_18 = 63488;
    #pragma endscop
}
