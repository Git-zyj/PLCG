/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167496
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (4387766247137468959 * 0);
    var_14 = (min(var_14, ((max(var_5, (13640 && 5551769428369187624))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                {
                    arr_7 [i_0] = -9223372036854775787;
                    arr_8 [i_0] = (((((max((arr_6 [i_0] [1] [i_2 - 2]), var_12)))) && var_6));
                    arr_9 [20] [20] [i_1] [i_2] |= (min(((((178 ? 65535 : 1)) << (((((arr_2 [i_1]) + 3144187321405478722)) - 13)))), -1474644453));
                }
            }
        }
    }
    var_15 = var_0;
    var_16 = (max(var_16, var_4));
    #pragma endscop
}
