/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139661
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((((min(-31, 0))) ? var_10 : 463468250))) ? (((((var_16 ? 48938 : 2093056))) ^ (min(var_17, var_16)))) : var_16));
    var_20 += (min(87, (196 && 126)));
    var_21 = (min(var_21, (((-1549104827 ? 123 : -117)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_0] [0] [i_1 - 1] = ((((max(1, -6))) < ((8 ? 126 : 0))));
                arr_7 [i_0] [i_0] = 215;
            }
        }
    }
    #pragma endscop
}
