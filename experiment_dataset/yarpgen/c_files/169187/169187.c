/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169187
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += ((((max((max(113, var_8)), (!var_14)))) ? ((((var_11 ? var_4 : -25565)))) : (min(var_6, ((-2457 ? var_16 : var_12))))));
    var_19 = 65535;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 6;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    arr_8 [i_0] = (max(255, (min(-1, 5351312946550307315))));
                    arr_9 [i_2 + 1] [i_2] [i_0] [i_2 - 1] = (((!2251) > (~246)));
                    arr_10 [i_0] [i_0] = (arr_5 [i_0] [i_1] [i_0]);
                }
            }
        }
    }
    #pragma endscop
}
