/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146140
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                var_20 = (min(var_20, ((((((min(var_1, var_11))) ? ((49152 ? 32767 : 35445233)) : 32768))))));
                var_21 += ((16383 * (arr_1 [i_0 + 3])));
                arr_5 [9] [1] = ((((((((max(30333, 30358))) != 16392)))) - ((max(30357, 65535)))));
                var_22 = (max(var_22, ((min(-32019, ((((max(1193864558, 1))) ? (arr_3 [i_0 + 1]) : ((var_11 ? var_16 : var_14)))))))));
            }
        }
    }
    var_23 *= -5633535494509271281;
    var_24 += ((((max(var_10, var_17))) ? var_19 : ((max(((var_1 ? 0 : var_3)), 49175)))));
    var_25 = var_19;
    #pragma endscop
}
